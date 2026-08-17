Conditions = {
	IF_TARGET_DESTROYED = 1,
	IF_OVER_DISTANCE = 2,
	IF_PRECISE_APPROACH = 3,
	IF_LINE_RELEASE = 4,
	IF_LASER_GUIDED_BOMB = 5,
	IF_HIGHER_THAN_TARGET = 6,
	IF_IMPACT_POINT_OVER_TARGET = 7,
	IF_TURN_TO_TARGET_IMPOSSIBLE = 8,
	IF_PLANE_AHEAD = 9,
	IF_EGRESS_NEEDED = 10,
	IF_EGRESS_FINISHED = 11,
	IF_TOSS_ATTACK_CLIMB_POINT = 12,
}

ConditionActualityPeriods = {}

States = {
	INIT = 1,
	APPROACHING = 2,
	AIMING = 3,
	BOMBING = 4,
	BOMBING_AND_COURSE_HOLDING = 5,
	WAITING_AFTER_BOMBING = 6,
	TARGET_LASER_ILLUMINATION = 7,
	MID_AIR_COLLISION_AVOIDANCE = 8,
	BREAKAWAY = 9,
	EGRESS = 10,
	AIMING_TOSS = 11,
}

InitState = States.INIT

FinishState = States.BREAKAWAY

Subtasks = {
	ALTITUDE_VELOCITY_HOLDING = 1,
	VELOCITY_HOLDING = 2,
	APPROACHING = 3,
	HOR_AIMING = 4,
	BOMBING = 5,	
	ATTACK_COURSE_HOLDING = 6,
	TIMER = 7,
	BREAKAWAY = 8,
	MID_AIR_COLLISION_AVOIDANCE = 9,
	EGRESS = 10,
	TOSS_CLIMB = 11,
}

SubtaskStates = {
	[Subtasks.APPROACHING] = {
		FINAL = 7
	},
	[Subtasks.BOMBING] = {
		RELEASE_IN_PROCESS = 2,
		RELEASE_FINISHED = 3,
		WEAPON_IMPACT = 4
	},
	[Subtasks.TIMER] = {
		TIME_OVER = 3
	}
}

SubtasksByState = {
	[States.APPROACHING] = {Subtasks.APPROACHING},		
	[States.AIMING] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.HOR_AIMING, Subtasks.BOMBING},	
	[States.BOMBING] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.HOR_AIMING, Subtasks.BOMBING},
	[States.BOMBING_AND_COURSE_HOLDING] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.ATTACK_COURSE_HOLDING, Subtasks.BOMBING},
	[States.WAITING_AFTER_BOMBING] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.ATTACK_COURSE_HOLDING, Subtasks.TIMER},
	[States.TARGET_LASER_ILLUMINATION] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.ATTACK_COURSE_HOLDING, Subtasks.BOMBING},
	[States.BREAKAWAY] = {Subtasks.ALTITUDE_VELOCITY_HOLDING, Subtasks.BREAKAWAY},
	[States.MID_AIR_COLLISION_AVOIDANCE] = {Subtasks.MID_AIR_COLLISION_AVOIDANCE},
	[States.EGRESS] = {Subtasks.EGRESS},
	[States.AIMING_TOSS] = {Subtasks.TOSS_CLIMB, Subtasks.HOR_AIMING, Subtasks.BOMBING},
}

FSM = {
	[States.INIT] = {
		{new_state = States.APPROACHING}
	},
	[States.APPROACHING] = {
		{condition = {operator = "and", operands = {  {subtask = Subtasks.APPROACHING, status = SubtaskStates[Subtasks.APPROACHING].FINAL}, Conditions.IF_HIGHER_THAN_TARGET }}, new_state = States.AIMING},
		{condition = Conditions.IF_TARGET_DESTROYED, new_state = States.BREAKAWAY}
	},
	[States.AIMING] = {
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_IN_PROCESS}, Conditions.IF_LINE_RELEASE}}, new_state = States.BOMBING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_IN_PROCESS}, {operator = "not", operand = Conditions.IF_LINE_RELEASE}}}, new_state = States.BOMBING_AND_COURSE_HOLDING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, {operator = "not", operand = Conditions.IF_LASER_GUIDED_BOMB}}}, new_state = States.WAITING_AFTER_BOMBING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, Conditions.IF_LASER_GUIDED_BOMB}}, new_state = States.TARGET_LASER_ILLUMINATION},
		{condition = Conditions.IF_TARGET_DESTROYED, new_state = States.BREAKAWAY},
		--{condition = {operator = "not", operand = Conditions.IF_OVER_DISTANCE}, new_state = States.BREAKAWAY},
		{condition = Conditions.IF_IMPACT_POINT_OVER_TARGET, new_state = States.APPROACHING},
		--{condition = Conditions.IF_TURN_TO_TARGET_IMPOSSIBLE, new_state = States.BREAKAWAY}
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' },
		{condition = Conditions.IF_TOSS_ATTACK_CLIMB_POINT, new_state = States.AIMING_TOSS}
	},
	[States.BOMBING] = {
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, {operator = "not", operand = Conditions.IF_LASER_GUIDED_BOMB}}}, new_state = States.WAITING_AFTER_BOMBING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, Conditions.IF_LASER_GUIDED_BOMB}}, new_state = States.TARGET_LASER_ILLUMINATION},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,{operator = "not", operand = Conditions.IF_EGRESS_NEEDED}}}, new_state = States.BREAKAWAY},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,Conditions.IF_EGRESS_NEEDED}}, new_state = States.EGRESS},
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' }
	},
	[States.BOMBING_AND_COURSE_HOLDING] = {
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, {operator = "not", operand = Conditions.IF_LASER_GUIDED_BOMB}}}, new_state = States.WAITING_AFTER_BOMBING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, Conditions.IF_LASER_GUIDED_BOMB}}, new_state = States.TARGET_LASER_ILLUMINATION},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,{operator = "not", operand = Conditions.IF_EGRESS_NEEDED}}}, new_state = States.BREAKAWAY},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,Conditions.IF_EGRESS_NEEDED}}, new_state = States.EGRESS},
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' }
	},
	[States.WAITING_AFTER_BOMBING] = {
		{condition = {operator = "and", operands = {{subtask = Subtasks.TIMER, status = SubtaskStates[Subtasks.TIMER].TIME_OVER},{operator = "not", operand = Conditions.IF_EGRESS_NEEDED}}}, new_state = States.BREAKAWAY},
		{condition = {operator = "and", operands = {{subtask = Subtasks.TIMER, status = SubtaskStates[Subtasks.TIMER].TIME_OVER}, operand = Conditions.IF_EGRESS_NEEDED}}, new_state = States.EGRESS},
		--{condition = {operator = "not", operand = Conditions.IF_OVER_DISTANCE}, new_state = States.BREAKAWAY},
		{condition = Conditions.IF_TARGET_DESTROYED, new_state = States.BREAKAWAY},
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' }
	},
	[States.TARGET_LASER_ILLUMINATION] = {
		{condition = {subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].WEAPON_IMPACT}, new_state = States.BREAKAWAY},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,{operator = "not", operand = Conditions.IF_EGRESS_NEEDED}}}, new_state = States.BREAKAWAY},
		{condition = {operator = "and", operands = {Conditions.IF_TARGET_DESTROYED,Conditions.IF_EGRESS_NEEDED}}, new_state = States.EGRESS},
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' }
	},
	[States.MID_AIR_COLLISION_AVOIDANCE] = {
		{condition = Conditions.IF_TARGET_DESTROYED, new_state = States.BREAKAWAY},
		{condition = {operator = "not", operand = Conditions.IF_PLANE_AHEAD}, action = 'POP' }
	},
	[States.EGRESS] = {
		{condition = Conditions.IF_EGRESS_FINISHED, new_state = States.BREAKAWAY},		
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' }
	},
	[States.AIMING_TOSS] = {
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_IN_PROCESS}, Conditions.IF_LINE_RELEASE}}, new_state = States.BOMBING},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, {operator = "not", operand = Conditions.IF_LASER_GUIDED_BOMB}}}, new_state = States.EGRESS},
		{condition = {operator = "and", operands = {{subtask = Subtasks.BOMBING, status = SubtaskStates[Subtasks.BOMBING].RELEASE_FINISHED}, Conditions.IF_LASER_GUIDED_BOMB}}, new_state = States.TARGET_LASER_ILLUMINATION},
		{condition = Conditions.IF_TARGET_DESTROYED, new_state = States.BREAKAWAY},
		{condition = Conditions.IF_IMPACT_POINT_OVER_TARGET, new_state = States.APPROACHING},
		{condition = Conditions.IF_PLANE_AHEAD, new_state = States.MID_AIR_COLLISION_AVOIDANCE, action = 'PUSH' },
	},
}
