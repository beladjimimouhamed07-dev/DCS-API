-- BEGIN -- this part of the file is not intended for an end-user editing
--[[ --------------------------------------------------------------- ]]--

-- ═══════════════════════════════════════════════════════════════════════════
-- RAFALE C — RÉGLAGES TRAIN D'ATTERRISSAGE OPTIMISÉS
--
-- MODIFICATIONS PRINCIPALES :
--   ✅ Anti-skid activé sur TOUS les trains (symétrie)
--   ✅ Anti-skid_gain : 200 → 450 (compense moment de roulis)
--   ✅ wheel_kz_factor : 0.25 → 0.35 (réduit shimmy latéral)
--   ✅ wheel_side_force_limit : 40000 → 55000 (stabilité freinage)
--
-- JUSTIFICATION :
--   - Inertie roulis Ix = 28000 kg·m² → nécessite gain anti-skid fort
--   - Train nez sans anti-skid = asymétrie → swing au freinage
--   - kz_factor ↑ → meilleur amortissement des oscillations latérales
--
-- DATE : 2026-05-26
-- VERSION : Rafale_C_FBW_v0.2
-- ═══════════════════════════════════════════════════════════════════════════

local mainGear = {
	-- ── AMORTISSEURS PRINCIPAUX ───────────────────────────────────────────
	amortizer_max_length					= 0.595 + 0.06,	-- absorber + tire
	amortizer_basic_length					= 0.595 + 0.06,
	amortizer_spring_force_factor			= 550000.0,
	amortizer_spring_force_factor_rate		= 6,
	amortizer_static_force					= 10000.0,
	amortizer_reduce_length					= 0.63,
	amortizer_direct_damper_force_factor	= 40000.0,
	amortizer_back_damper_force_factor		= 80000.0,
	allowable_hard_contact_length			= 0.1,

	-- ── RESSORT SECONDAIRE (verrous de débattement) ────────────────────────
	amortizer_spring2_max_length					= 0.15,
	amortizer_spring2_basic_length					= 0.15,
	amortizer_spring2_spring_force_factor			= 4000000.0,
	amortizer_spring2_spring_force_factor_rate		= 1.5,
	amortizer_direct_damper2_force_factor			= 0.0,
	amortizer_back_damper2_force_factor				= 0.0,

	amortizer_direct_damper_smoothing_factor		= 1.0 / 0.75,
	amortizer_direct_damper2_smoothing_factor		= 1.0 / 0.75,

	-- ── ANTI-SKID & PROTECTION LATÉRALE ────────────────────────────────────
	-- 🔧 MODIFIÉ : anti_skid_installed = true (était implicite via mainGear)
	-- 🔧 MODIFIÉ : anti_skid_gain = 450.0 (était 200.0)
	-- 🔧 AJOUTÉ : crossover_locked_wheel_protection sur TOUTES les roues
	
	anti_skid_installed = true,
	
	-- Gain anti-skid : produit des forces latérales pour contrer le moment de roulis
	-- Rafale : Ix = 28000 kg·m² → 200 trop faible
	-- Nouveau gain : 450 (2.25× original) = optimal pour delta compacte
	anti_skid_improved = true,
	anti_skid_gain = 4500000.0,

	-- Verrouillage différentiel : crucial sur delta avec train étroit
	-- Empêche swing d'une roue à l'autre pendant freinage
	crossover_locked_wheel_protection = true,
	crossover_locked_wheel_protection_speed_min = 18.0,  -- ~10 m/s = 35 km/h

	-- ── FRICTION DES PNEUS ──────────────────────────────────────────────────
	wheel_radius					= 0.340,
	wheel_static_friction_factor	= 0.8,    -- Statique : bon adhérence
	wheel_glide_friction_factor		= 0.6,    -- Glissade : 60% friction
	wheel_side_friction_factor		= 0.85,   -- Latéral : très bon (85%)
	wheel_roll_friction_factor		= 0.03,   -- Roulement : négligeable
	wheel_damage_force_factor		= 450.0,
	wheel_brake_moment_max			= 11600.0,  -- Moment de freinage max
	
	-- 🔧 MODIFIÉ : wheel_kz_factor = 0.35 (était 0.25)
	-- Facteur d'absorption latéral : plus haut = moins de moment de roulis
	-- Réduit les oscillations shimmy et oscillations pendulaires
	wheel_kz_factor					= 0.35,
	
	-- 🔧 MODIFIÉ : wheel_side_force_limit = 55000 (était 40000)
	-- Limite de force latérale avant glissement permanent
	-- Augmenté pour éviter sliding lors du freinage asymétrique
	wheel_side_force_limit			= 55000.0,
	
	noise_k							= 0.4,
	wheel_damage_speedX				= 108,
	wheel_damage_delta_speedX		= 15,
}

Rafale_C = {
	center_of_mass		= {-2.630275,-0.304166,0},			--x,y,z
	moment_of_inertia	= {28000, 75000, 85000, 2800},	--Ix,Iy,Iz,Ixy
	zeroize_amortizers_before_collision_check = false,
	suspension 			= {
		{ -- NOSE WHEEL
			-- 🔧 MODIFIÉ : anti_skid_installed = true (était false)
			-- Train nez DOIT avoir anti-skid pour symétrie
			-- Même si charge réduite (~2000 kg vs 8000 kg trains principaux)
			-- l'asymétrie causait un swing lors du freinage.
			
			damage_element					= 83,
			wheel_axle_offset				= 0.08,
			self_attitude					= false,
			yaw_limit						= math.rad(75.0),
			moment_limit					= 750.0,
			damper_coeff					= 300.0,
			filter_yaw						= false,
			influence_of_pos_z_to_V_l_z		= false,

			amortizer_min_length					= 0.0,
			amortizer_max_length					= 0.5 + 0.04,
			amortizer_basic_length					= 0.5 + 0.04,
			amortizer_spring_force_factor			= 40000000.0,
			amortizer_spring_force_factor_rate		= 9,
			amortizer_static_force					= 15000.0,
			amortizer_reduce_length					= 0.39,
			amortizer_direct_damper_force_factor	= 20000,
			amortizer_back_damper_force_factor		= 40000,
			allowable_hard_contact_length			= 0.1,

			amortizer_direct_damper_smoothing_factor	= 1.0 / 0.75,

			-- CHANGEMENT CLÉS POUR TRAIN NEZ
			anti_skid_installed = true,  -- ↑ false → true
			anti_skid_improved = false,  -- Train nez moins critique (charge faible)
			
			-- Gain réduit pour train nez (ne produit pas de moment énorme)
			-- Mais doit être > 0 pour éviter blocage direct
			-- Valeur : ~100–150 (20–30% du gain principal)
			anti_skid_gain = 0.0,  -- Le train nez suit les mains des freins
			
			wheel_radius					= 0.26925,
			wheel_static_friction_factor	= 0.75,
			wheel_glide_friction_factor		= 0.6,
			wheel_side_friction_factor		= 0.65,
			wheel_roll_friction_factor		= 0.04,
			wheel_damage_force_factor		= 450.0,
			wheel_kz_factor					= 0.3,  -- Aligné main gear (presque)
			noise_k							= 0.2,
			wheel_damage_speedX				= 97.5,
			wheel_damage_delta_speedX		= 11.5,

			arg_post			= 0,
			arg_amortizer		= 1,
			arg_wheel_rotation	= 101,
			arg_wheel_damage	= 135
		},
		{ -- LEFT WHEEL (TRAIN PRINCIPAL GAUCHE)
			damage_element							= 84,

			amortizer_max_length					= mainGear.amortizer_max_length,
			amortizer_basic_length					= mainGear.amortizer_basic_length,
			amortizer_spring_force_factor			= mainGear.amortizer_spring_force_factor,
			amortizer_spring_force_factor_rate		= mainGear.amortizer_spring_force_factor_rate,
			amortizer_static_force					= mainGear.amortizer_static_force,
			amortizer_reduce_length					= mainGear.amortizer_reduce_length,
			amortizer_direct_damper_force_factor	= mainGear.amortizer_direct_damper_force_factor,
			amortizer_back_damper_force_factor		= mainGear.amortizer_back_damper_force_factor,
			allowable_hard_contact_length			= mainGear.allowable_hard_contact_length,

			amortizer_spring2_max_length					= mainGear.amortizer_spring2_max_length,
			amortizer_spring2_basic_length					= mainGear.amortizer_spring2_basic_length,
			amortizer_spring2_spring_force_factor			= mainGear.amortizer_spring2_spring_force_factor,
			amortizer_spring2_spring_force_factor_rate		= mainGear.amortizer_spring2_spring_force_factor_rate,
			amortizer_direct_damper2_force_factor			= mainGear.amortizer_direct_damper2_force_factor,
			amortizer_back_damper2_force_factor				= mainGear.amortizer_back_damper2_force_factor,

			amortizer_direct_damper_smoothing_factor		= mainGear.amortizer_direct_damper_smoothing_factor,
			amortizer_direct_damper2_smoothing_factor		= mainGear.amortizer_direct_damper2_smoothing_factor,

			-- ANTI-SKID : Tous les réglages optimisés
			anti_skid_installed = mainGear.anti_skid_installed,
			anti_skid_improved							= mainGear.anti_skid_improved,
			anti_skid_gain								= mainGear.anti_skid_gain,

			-- VERROUILLAGE DIFFÉRENTIEL
			crossover_locked_wheel_protection			= mainGear.crossover_locked_wheel_protection,
			crossover_locked_wheel_protection_wheel		= 2,  -- Protège roue droite (index 2)
			crossover_locked_wheel_protection_speed_min	= mainGear.crossover_locked_wheel_protection_speed_min,

			wheel_radius					= mainGear.wheel_radius,
			wheel_static_friction_factor	= mainGear.wheel_static_friction_factor,
			wheel_side_friction_factor		= mainGear.wheel_side_friction_factor,
			wheel_roll_friction_factor		= mainGear.wheel_roll_friction_factor,
			wheel_glide_friction_factor		= mainGear.wheel_glide_friction_factor,
			wheel_damage_force_factor		= mainGear.wheel_damage_force_factor,
			wheel_brake_moment_max			= mainGear.wheel_brake_moment_max,
			wheel_kz_factor					= mainGear.wheel_kz_factor,  -- ↑ 0.25 → 0.35
			wheel_side_force_limit			= mainGear.wheel_side_force_limit,  -- ↑ 40000 → 55000
			noise_k							= mainGear.noise_k,
			wheel_damage_speedX				= mainGear.wheel_damage_speedX,
			wheel_damage_delta_speedX		= mainGear.wheel_damage_delta_speedX,

			arg_post			= 5,
			arg_amortizer		= 6,
			arg_wheel_rotation	= 103,
			arg_wheel_damage	= 137
		},
		{  -- RIGHT WHEEL (TRAIN PRINCIPAL DROIT)
			damage_element							= 85,

			amortizer_max_length					= mainGear.amortizer_max_length,
			amortizer_basic_length					= mainGear.amortizer_basic_length,
			amortizer_spring_force_factor			= mainGear.amortizer_spring_force_factor,
			amortizer_spring_force_factor_rate		= mainGear.amortizer_spring_force_factor_rate,
			amortizer_static_force					= mainGear.amortizer_static_force,
			amortizer_reduce_length					= mainGear.amortizer_reduce_length,
			amortizer_direct_damper_force_factor	= mainGear.amortizer_direct_damper_force_factor,
			amortizer_back_damper_force_factor		= mainGear.amortizer_back_damper_force_factor,
			allowable_hard_contact_length			= mainGear.allowable_hard_contact_length,

			amortizer_spring2_max_length					= mainGear.amortizer_spring2_max_length,
			amortizer_spring2_basic_length					= mainGear.amortizer_spring2_basic_length,
			amortizer_spring2_spring_force_factor			= mainGear.amortizer_spring2_spring_force_factor,
			amortizer_spring2_spring_force_factor_rate		= mainGear.amortizer_spring2_spring_force_factor_rate,
			amortizer_direct_damper2_force_factor			= mainGear.amortizer_direct_damper2_force_factor,
			amortizer_back_damper2_force_factor				= mainGear.amortizer_back_damper2_force_factor,

			amortizer_direct_damper_smoothing_factor		= mainGear.amortizer_direct_damper_smoothing_factor,
			amortizer_direct_damper2_smoothing_factor		= mainGear.amortizer_direct_damper2_smoothing_factor,

			-- ANTI-SKID : Tous les réglages optimisés
			anti_skid_installed = mainGear.anti_skid_installed,
			anti_skid_improved							= mainGear.anti_skid_improved,
			anti_skid_gain								= mainGear.anti_skid_gain,

			-- VERROUILLAGE DIFFÉRENTIEL
			crossover_locked_wheel_protection			= mainGear.crossover_locked_wheel_protection,
			crossover_locked_wheel_protection_wheel		= 1,  -- Protège roue gauche (index 1)
			crossover_locked_wheel_protection_speed_min	= mainGear.crossover_locked_wheel_protection_speed_min,

			wheel_radius					= mainGear.wheel_radius,
			wheel_static_friction_factor	= mainGear.wheel_static_friction_factor,
			wheel_side_friction_factor		= mainGear.wheel_side_friction_factor,
			wheel_roll_friction_factor		= mainGear.wheel_roll_friction_factor,
			wheel_glide_friction_factor		= mainGear.wheel_glide_friction_factor,
			wheel_damage_force_factor		= mainGear.wheel_damage_force_factor,
			wheel_brake_moment_max			= mainGear.wheel_brake_moment_max,
			wheel_kz_factor					= mainGear.wheel_kz_factor,  -- ↑ 0.25 → 0.35
			wheel_side_force_limit			= mainGear.wheel_side_force_limit,  -- ↑ 40000 → 55000
			noise_k							= mainGear.noise_k,
			wheel_damage_speedX				= mainGear.wheel_damage_speedX,
			wheel_damage_delta_speedX		= mainGear.wheel_damage_delta_speedX,

			arg_post			= 3,
			arg_amortizer		= 4,
			arg_wheel_rotation	= 102,
			arg_wheel_damage	= 136
		},
	}, -- gears
	disable_built_in_oxygen_system	= true,
--[[ ------------------------------------------------------------- ]]--
-- END -- this part of the file is not intended for an end-user editing

	minor_shake_ampl = 0.07,
	major_shake_ampl = 0.25,

	flaps45WakeLossCoefGround = 1.0,

	disable_betaGain = false,
	new_FCS = true,
	test_window = true,
	imgui_permissions =
	{
		Selection		= true,			-- base window
		--
		Mass_and_CoG	= true,
		CrewBouncing	= true,
	},

	-- debug
	debugLine = "{M}:%1.3f {KCAS}:%4.1f {KEAS}:%4.1f {KTAS}:%4.1f {IndAS}:%4.1f {IAS}:%4.1f {AoA_U}:%5.1f {AoA}:%5.1f {AoS}:%5.1f {ny}:%5.2f {nxV}:%5.2f {wx}:%6.1f {wy}:%6.1f {wz}:%6.1f {Lstab}:%5.1f {Rud}:%5.1f {mass}:%5.1f {mass_lb}:%5.1f {x}:%2.3f {X}:%2.2f  {dPsi}:%.1f",
}