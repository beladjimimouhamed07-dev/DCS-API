#pragma once
#include "stdafx.h"



namespace FM_DATA
{
	// =========================================================================
	// RAFALE C – Flight Model Data
	// Foyers calculés depuis RafaleC_complet.obj (Blender 3.6.23, 425 825 verts)
	// Méthode : intégration spanwise 100 stations, foyer @ 25% CAM
	//
	// Repère DCS / OBJ body frame :
	//   X = longitudinal, positif vers le nez
	//   Y = vertical,     positif vers le haut
	//   Z = latéral,      positif vers la droite
	// Toutes les positions en mètres, relatives à l'origine du modèle 3D.
	// =========================================================================

	// ── DIMENSIONS GÉNÉRALES (mesurées sur le modèle) ──────────────────────
	double wing_area = 46.0;   // Surface alaire totale incl. canards (m²)
	double wingspan = 10.80;  // Envergure totale (m) → Z×2 = 5.511×2
	double length = 15.27;  // Longueur (m)  [nez X=+6.646 → queue X=-8.846]
	double height = 5.34;   // Hauteur totale (m)
	double mach_max = 1.80;   // Vitesse max (Mach), config lisse

	double Cy0 = 0.022;           // Portance à AoA nul (delta cambré + canards)
	double Czbe = -0.018;           // Coefficient force latérale (dérapage)

	double cx_gear = 0.014;          // Traînée train sorti
	double cx_brk = 0.095;         // Traînée aérofreins (grandes trappes AR)
	double cx_slat = 0.018;          // ΔCx traînée becs déployés (contribue à Drag line 422)
	double cy_slat = 0.28;           // ΔCyMax becs déployés (contribution portance max)

	// =========================================================================
	// FOYERS AÉRODYNAMIQUES — POSITIONS 3D (tous en mètres)
	// Calculées sur le modèle complet, cohérentes avec CG (-2.630, -0.304, 0)
	// =========================================================================

	// ── CANARDS ──────────────────────────────────────────────────────────────
	// CAM = 0.614 m  |  semi-envergure = 1.201 m
	// Bras tangage vs CG : +2.626 m (CABRANT – positif devant CG)
	// → Toute portance canard crée un moment cabreur : logique instabilité FBW
	double canard_ac_x = -0.004;   // Foyer X (quasi-neutre longitudinal)
	double canard_ac_y = +0.348;   // Foyer Y (légèrement au-dessus axe fuselage)
	double canard_ac_z_L = -1.861;   // Foyer Z canard gauche
	double canard_ac_z_R = +1.869;   // Foyer Z canard droit
	double canard_mac = 0.614;   // CAM canard (m)
	double canard_span = 1.201;   // Semi-envergure canard (m)

	// ── AILE DELTA (plan fixe principal) ─────────────────────────────────────
	// CAM = 3.487 m  |  semi-envergure = 3.454 m
	// Foyer moyen (haut + bas, G + D)
	// Marge statique vs CG utilisateur : –5.60% CAM [INSTABLE → correct FBW]
	double wing_ac_x = -2.826;   // Foyer X aile (moyenne 4 surfaces)
	double wing_ac_y = -0.239;   // Foyer Y aile (légèrement sous axe)
	double wing_ac_z_L = -2.848;   // Foyer Z aile gauche
	double wing_ac_z_R = +2.848;   // Foyer Z aile droite
	double wing_mac = 3.487;   // CAM aile (m)
	double wing_span_semi = 3.454;   // Semi-envergure (m)

	// Foyers séparés haut/bas pour usage avancé (profil asymétrique)
	double wing_ac_x_haut = -2.829;  // Intrados haut (suction side)
	double wing_ac_x_bas = -2.822;  // Extrados bas  (pressure side)

	// ── BECS DE BORD D'ATTAQUE (Leading Edge Devices) ────────────────────────
	// CAM = 0.298 m  |  envergure = 2.985 m
	// Déployés à fort AoA → déplacent foyer aile vers l'avant (~–2.71 m)
	// En position neutre, pas de contribution aérodynamique significative
	double bec_ac_x = -2.710;   // Foyer X becs (proche foyer aile → normal)
	double bec_ac_y = -0.229;   // Foyer Y becs
	double bec_ac_z_L = -3.426;   // Foyer Z bec gauche (excentré vers tip)
	double bec_ac_z_R = +3.426;   // Foyer Z bec droit
	double bec_mac = 0.298;   // CAM bec (m)

	// ── ÉLEVONS (surfaces internes bord de fuite) ─────────────────────────────
	// CAM = 0.890 m  |  envergure = 1.316 m
	// Bras tangage  : –2.996 m (piqueur)   Bras roulis : ±2.023 m
	// Couplés aux canards en tangage : canard+ → élevon– (symétrique)
	// En roulis     : différentiel G/D
	double elevon_ac_x = -5.626;   // Foyer X élevon
	double elevon_ac_y = -0.170;   // Foyer Y élevon
	double elevon_ac_z_L = -2.023;   // Foyer Z élevon gauche
	double elevon_ac_z_R = +2.023;   // Foyer Z élevon droit
	double elevon_mac = 0.890;   // CAM élevon (m)
	double elevon_span = 1.316;   // Envergure élevon (m)

	// ── GOUVERNES (surfaces externes bord de fuite — ailerons) ───────────────
	// CAM = 0.633 m  |  envergure = 2.434 m
	// Bras roulis   : ±3.808 m (levier max de l'avion)
	// Bras tangage  : –2.891 m (contribution piquante en déflexion symétrique)
	double gouv_ac_x = -5.521;   // Foyer X gouverne
	double gouv_ac_y = -0.321;   // Foyer Y gouverne
	double gouv_ac_z_L = -3.808;   // Foyer Z gouverne gauche
	double gouv_ac_z_R = +3.808;   // Foyer Z gouverne droite
	double gouv_mac = 0.633;   // CAM gouverne (m)
	double gouv_span = 2.434;   // Envergure gouverne (m)

	// ── DÉRIVE (empennage vertical fixe) ─────────────────────────────────────
	// CAM = 1.566 m  |  hauteur = 2.659 m
	// Bras lacet vs CG : –3.546 m
	double derive_ac_x = -6.176;   // Foyer X dérive
	double derive_ac_y = +1.756;   // Foyer Y dérive (mi-hauteur effective)
	double derive_mac = 1.566;   // CAM dérive (m)
	double derive_span = 2.659;   // Hauteur dérive (m)

	// ── GOUVERNE DE DIRECTION (rudder) ───────────────────────────────────────
	// CAM = 0.875 m  |  hauteur = 1.979 m
	// Bras lacet vs CG : –4.555 m (bras de moment le plus long)
	double rudder_ac_x = -7.185;   // Foyer X gouverne de direction
	double rudder_ac_y = +1.462;   // Foyer Y gouverne de direction
	double rudder_mac = 0.875;   // CAM gouverne de direction (m)
	double rudder_span = 1.979;   // Hauteur gouverne de direction (m)

	// ── SAUMONS (wingtips / pointe delta) ────────────────────────────────────
	// CAM = 0.252 m  |  envergure saumon = 0.282 m (épaisseur du tip)
	// Contribution portante négligeable ; important pour les tourbillons marginaux
	double saumon_ac_x = -4.835;   // Foyer X saumon (moyen G/D)
	double saumon_ac_y = -0.305;   // Foyer Y saumon
	double saumon_ac_z_L = -5.232;   // Foyer Z saumon gauche (extrémité δ)
	double saumon_ac_z_R = +5.232;   // Foyer Z saumon droit

	// =========================================================================
	// CENTRE DE GRAVITÉ
	// =========================================================================
	//
	// ANALYSE :
	//   Foyer aile moyen : X = –2.826 m
	//   CAM aile         : 3.487 m
	//
	//   CG (–2.630, –0.304, 0) → marge statique = –5.60% CAM  [INSTABLE]
	//     ✓ Cohérent Rafale FBW (marge réelle : –5% à –10% selon config)
	//     ✓ CG_y = –0.304 m : moteurs M88 bas dans le fuselage + carburant ventral
	//
	//   CG (–2.889, 0, 0) estimation géométrique → +1.8% CAM [trop stable]
	//   CG volumétrique brut → +6.5% CAM [non représentatif, volumes ≠ masses]
	//
	//   RECOMMANDATION : utiliser (–2.630, –0.304, 0) comme CG de référence.
	//   À ajuster in-game via le fichier .edm/.def si la stabilité diverge.
	//
	double cg_x = -2.630275;        // CG longitudinal (m) – validé aérodynamiquement
	double cg_y = -0.304166;        // CG vertical (m) – moteurs + carburant bas
	double cg_z = 0.000000;        // CG latéral (plan de symétrie)

	// ── BRAS DE MOMENT DEPUIS LE CG (pour référence) ──────────────────────
	//   Canards   : +2.626 m (cabrant)   — devant CG
	//   Aile      : –0.196 m             — légèrement derrière CG
	//   Élevons   : –2.996 m (piqueur)   — loin derrière CG
	//   Gouvernes : –2.891 m (piqueur)
	//   Dérive    : –3.546 m
	//   Rudder    : –4.555 m (bras max)

	// =========================================================================
	// POSITION RÉACTEURS M88-2 (application force de poussée)
	// =========================================================================
	//
	// La poussée s'applique à la sortie tuyère (plan de référence EFM).
	// Tuyères mesurées sur modèle : X = –7.599 m (sortie volets primaires)
	// Y moyen tuyères ≈ –0.103 m → DESSUS du CG_y (–0.304 m)
	// → La ligne de poussée est 0.201 m au-dessus du CG :
	//   moment en tangage = –Δy × F_thrust → PIQUEUR à pleine poussée
	//   (compensé par les canards en configuration FBW)
	//
	// Z moteurs : ±0.604 m (espacement inter-axes réacteurs)

	double left_engine_pos_x = -7.599;  // X sortie tuyère gauche
	double left_engine_pos_y = -0.097;  // Y sortie tuyère gauche
	double left_engine_pos_z = -0.604;  // Z sortie tuyère gauche

	double right_engine_pos_x = -7.599;  // X sortie tuyère droite
	double right_engine_pos_y = -0.109;  // Y sortie tuyère droite
	double right_engine_pos_z = +0.604;  // Z sortie tuyère droite (symétrisé)

	// =========================================================================
	// TABLES AÉRODYNAMIQUES — Dépendance au Mach
	// =========================================================================
	//
	// Rafale C : aile delta ogive 48° + canards rapprochés
	// λ = b²/S = 10.80²/46.0 = 2.532
	// k = 1/(π·λ·e) = 0.153 (e=0.82 subsonique, e=0.72 supersonique)
	//
	// Sources : méthode DATCOM/Raymer ch.12, calibration famille delta-canard
	// (Mirage 2000 Cx0≈0.015, EF Typhoon, données publiques Dassault/Safran)
	// Toutes les valeurs ci-dessous sont des estimations semi-empiriques.
	// Les données exactes de soufflerie Dassault restent classifiées.

	double mach_table[] =
	{
		0.00,   // Statique / très basse vitesse
		0.15,   // Décollage (~150 kt)
		0.30,   // Montée initiale
		0.45,   // Subsonique bas
		0.60,   // Subsonique moyen
		0.75,   // Subsonique haut
		0.85,   // Mcrit (début wave drag)
		0.90,   // Transsonique montant
		0.95,   // Juste avant M1
		1.00,   // Mur du son
		1.05,   // Juste après M1
		1.10,   // Début supersonique
		1.20,   // Supersonique bas
		1.40,   // Supersonique moyen
		1.80,   // Vmax structurelle
	};
	// Nombre d'entrées : 15 (indices 0..14)


	// ---- 3.1 TRAÎNÉE PARASITE (Cx0) ----------------------------------------
	//
	// Méthode composants (Raymer ch.12) :
	//   Cx0 = Cf × Swet/Sref + ΔCx_forme + ΔCx_interf
	//   Cf ≈ 0.0028 (turbulent, Re ~20M)    Swet/Sref ≈ 4.2 → friction = 0.0118
	//   Forme + interférences ≈ 0.0040
	//   Total subsonique ≈ 0.0158
	//
	// Comparaison : Mirage 2000 ≈ 0.015, F-16 ≈ 0.017, F-22 ≈ 0.011
	// Mcrit ≈ 0.85 (profil supercritique mince ~4-5%)
	// Pic transsonique M=0.95–1.00 (onde de choc normale – méthode Whitcomb)
	// Supersonique : déclin en ~1/M² + pénalité tuyère convergente (~+0.006)
	// NOTE : La tuyère convergente simple du M88 (vs convergente-divergente)
	//        génère une traînée de culot accrue en supersonique.
	double cx0[] =
	{
		0.0162,   // M 0.00 — subsonique référence
		0.0160,   // M 0.15 — minimum (becs légèrement ouverts, auto FBW)
		0.0158,   // M 0.30 — minimum absolu (flux pleinement attaché)
		0.0160,   // M 0.45
		0.0163,   // M 0.60 — légère montée compressibilité
		0.0172,   // M 0.75 — début compressibilité nette
		0.0220,   // M 0.85 — Mcrit : wave drag naissant
		0.0320,   // M 0.90 — onde de choc sur extrados
		0.0420,   // M 0.95 — pic transsonique montant
		0.0450,   // M 1.00 — maximum absolu (onde normale au nez)
		0.0430,   // M 1.05 — détente partielle post-choc
		0.0400,   // M 1.10 — onde oblique attachée
		0.0370,   // M 1.20 — déclin supersonique + traînée culot tuyère
		0.0340,   // M 1.40 — déclin lent (pénalité tuyère convergente)
		0.0320,   // M 1.80 — domaine supersonique établi
	};


	// ---- 3.2 PENTE DE PORTANCE (Cya, par DEGRÉ d'incidence) ----------------
	//
	// Méthode : DATCOM delta ogive + correction vortex canard (+15%)
	//   Subsonique : Cla = (AR·π/2) / (1+√(1+(AR·β/2)²)) / 57.3 × 1.15
	//   AR = 2.532, β = √(1−M²)
	//
	// Supersonique : théorie Ackeret (aile mince) lissée sur la transition
	//   Ackeret brut diverge à M→1 ; transition lissée sur M=0.95–1.10
	//
	// Cohérence : Cy = Cy0 + Cya × α (°), limité à CyMax
	// Vérification : α=20° → Cy = 0.022 + 0.060×20 = 1.22 ✓ (< CyMax=1.40 à M=0.60)
	double Cya[] =
	{
		0.052,   // M 0.00 — delta pur basse V, vortex LEVF modéré
		0.054,   // M 0.15 — décollage
		0.057,   // M 0.30 — montée initiale
		0.060,   // M 0.45 — pic vortex subsonique
		0.062,   // M 0.60 — plateau manœuvrabilité
		0.062,   // M 0.75 — légère compressibilité Prandtl-Glauert
		0.060,   // M 0.85 — Mcrit : début dégradation
		0.057,   // M 0.90 — onde de choc décolle la couche limite
		0.054,   // M 0.95 — transition (Ackeret lissé)
		0.050,   // M 1.00 — minimum transsonique
		0.053,   // M 1.05 — remontée Ackeret post-choc
		0.058,   // M 1.10 — onde oblique attachée
		0.057,   // M 1.20 — déclin supersonique
		0.052,   // M 1.40 — Ackeret : 4/(β·57.3)·1.10 ≈ 0.052
		0.040,   // M 1.80 — Ackeret : 4/(β·57.3)·1.10 ≈ 0.040
	};


	// ---- 3.3 TAUX DE ROULIS MAXIMUM (OmxMax, rad/s) -------------------------
	//
	// Le Rafale atteint ~270°/s (4.71 rad/s) selon démos solo publiques.
	// Le FBW limite ce taux pour éviter le couplage inertiel à forte charge.
	// Pic autour de M=0.60–0.75 (vitesse de coin, meilleur compromis q/autorité).
	// Basse V : autorité limitée (faible q) → OmxMax réduit.
	// Haute V : limitation structurelle (chargement élevon) → OmxMax réduit.
	double OmxMax[] =
	{
		1.80,   // M 0.00 — faible dynamique, faible autorité
		2.80,   // M 0.15
		3.50,   // M 0.30
		4.40,   // M 0.45
		4.71,   // M 0.60 — ~270°/s (vitesse de coin)
		4.71,   // M 0.75 — plateau peak
		4.50,   // M 0.85
		4.20,   // M 0.90
		3.90,   // M 0.95
		3.60,   // M 1.00
		3.40,   // M 1.05
		3.20,   // M 1.10
		2.90,   // M 1.20
		2.50,   // M 1.40 — limitation structurelle
		2.00,   // M 1.80
	};


	// ---- 3.4 INCIDENCE MAXIMALE (Aldop, degrés) -----------------------------
	//
	// Limite physique avant perte de contrôle (avant protection CDVE).
	// Le FBW protège à ~29–30° en combat (domaine normal).
	// En supersonique : saturation entrée d'air et instabilité latérale.
	//
	// Note : des sources évoquent 100–110° en post-stall lors de démonstrations,
	// hors domaine opérationnel normal → non modélisé ici.
	double Aldop[] =
	{
		30.0,   // M 0.00 — config basse V + becs (limite FBW nominale)
		30.0,   // M 0.15
		29.0,   // M 0.30
		28.0,   // M 0.45
		27.0,   // M 0.60
		26.0,   // M 0.75
		24.0,   // M 0.85
		22.0,   // M 0.90
		20.0,   // M 0.95
		18.0,   // M 1.00
		16.0,   // M 1.05
		15.0,   // M 1.10
		14.0,   // M 1.20
		13.0,   // M 1.40
		12.0,   // M 1.80
	};


	// ---- 3.5 COEFFICIENT DE PORTANCE MAXIMUM (CyMax) ------------------------
	//
	// Portance max avant décrochage (ou limite structurelle en sup).
	//
	// Subsonique : vortex canard + becs → CyMax élevé (~1.7–1.85 avec becs)
	//   Config propre (sans becs) : CyMax ≈ 1.40 à M=0.60
	//   Config décollage (becs) : CyMax ≈ 1.70–1.80
	//   Valeurs ci-dessous : config intermédiaire (FBW auto-becs)
	//
	// Vérification M=1.40 :
	//   q = ½ × 0.307 × (1.4×322)² = 99 600 Pa  (ρ à 9000 m ISA)
	//   L_max = 0.60 × 99600 × 46.0 = 2 745 kN → facteur = 2745/127 ≈ 21g
	//   → La limite est donc bien structurelle (+9g) avant CyMax aéro
	double CyMax[] =
	{
		1.80,   // M 0.00 — config T/O becs sortis + vortex
		1.75,   // M 0.15
		1.65,   // M 0.30
		1.50,   // M 0.45
		1.40,   // M 0.60 — Cy_opt ≈ 0.32, L/D max ≈ 10
		1.28,   // M 0.75
		1.15,   // M 0.85
		1.05,   // M 0.90
		0.95,   // M 0.95
		0.85,   // M 1.00
		0.80,   // M 1.05
		0.76,   // M 1.10
		0.70,   // M 1.20
		0.62,   // M 1.40
		0.56,   // M 1.80 — encore +9g à masse combat légère
	};


	// =========================================================================
	// FCS — TABLES DE COMMANDE PAR PAS DE MACH 0.1
	// =========================================================================
	//
	// Données publiques disponibles :
	//   • 270°/s à 350 kt et à 450 kt en essai/présentation, soit environ
	//     M≈0.53 et M≈0.68 au voisinage ISA mer.
	//   • le Rafale est annoncé à +9g / ~29° AoA en mode air-air.
	//
	// Il n'existe pas de table publique complète "rate = f(Mach)" de Dassault.
	// Les points intermédiaires ci-dessous sont donc une LOI DE COMMANDE du mod,
	// ancrée sur ces points publics, et non une prétendue table classifiée.
	// =========================================================================

	static constexpr int fcs_mach_count = 19;
	static constexpr double fcs_mach_axis[fcs_mach_count] = {
		0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9,
		1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8
	};

	// Taux de roulis max demandé au pilote/FCS, rad/s.
	// 4.71239 rad/s = 270°/s.
	static constexpr double fcs_roll_rate_max_rad_s[fcs_mach_count] = {
		1.00, 2.00, 3.00, 3.80, 4.40,
		4.71239, 4.71239, 4.71239,
		4.60, 4.35, 4.10, 3.90, 3.60, 3.30,
		3.05, 2.80, 2.55, 2.30, 2.05
	};

	// Cette table de lacet est une loi de confort/coordination du mod.
	// Elle n'est pas une donnée de performance publiée du Rafale.
	static constexpr double fcs_yaw_rate_max_deg_s[fcs_mach_count] = {
		18.0, 22.0, 27.0, 32.0, 36.0,
		37.0, 37.0, 36.0, 34.0, 32.0,
		30.0, 28.0, 27.0, 26.0, 25.0,
		24.0, 23.0, 22.0, 20.0
	};

	// ============================================================================
// PITCH PID / FBW RAFALE
// ============================================================================
//
// Réglage basé sur pid_pitch_analysis.png
//
// Observations télémétrie :
//   - forte sous-amortissement entre ~0 et 90 s
//   - overshoot important du taux de tangage
//   - sorties PID avec pics > 100
//   - Ki trop présent pendant les transitoires
//   - Kd classique volontairement nul
//   - amortissement q utilisé séparément
//
// Architecture :
//
//   erreur de taux q
//        |
//        +--> Kp ----+
//        |           |
//        +--> Ki ----+----> commande pitch
//                    |
//   q mesuré --> damping q
//
// Objectifs :
//   - réduire fortement l'overshoot
//   - supprimer l'oscillation post-rotation
//   - conserver une bonne autorité en tangage
//   - éviter le wind-up
//   - garder une réponse progressive à basse vitesse
//
// ============================================================================


// ---------------------------------------------------------------------------
// PITCH PROPORTIONNEL
// ---------------------------------------------------------------------------
//
// Ancienne valeur : ~2.0 à basse/moyenne vitesse.
//
// On réduit volontairement le gain à basse vitesse car c'est là que la
// télémétrie montre les plus gros dépassements.
//
// Le gain remonte progressivement avec Mach afin de conserver une réponse
// suffisamment ferme lorsque la dynamique aérodynamique devient plus rapide.
//

	static constexpr double pitch_kp[fcs_mach_count] =
	{
		// M0.0
		1.55,

		// M0.1
		1.60,

		// M0.2
		1.65,

		// M0.3
		1.70,

		// M0.4
		1.74,

		// M0.5
		1.78,

		// M0.6
		1.82,

		// M0.7
		1.84,

		// M0.8
		1.86,

		// M0.9
		1.88,

		// M1.0
		1.90,

		// M1.1
		1.92,

		// M1.2
		1.94,

		// M1.3
		1.96,

		// M1.4
		1.98,

		// M1.5
		2.00,

		// M1.6
		2.00,

		// M1.7
		2.00,

		// M1.8
		2.00
	};


	// ---------------------------------------------------------------------------
	// PITCH INTEGRAL
	// ---------------------------------------------------------------------------
	//
	// Ki fortement réduit.
	//
	// L'intégrale ne doit pas essayer de corriger instantanément une rotation.
	// Elle sert essentiellement à supprimer une erreur statique résiduelle.
	//
	// Ancien maximum : 0.1275
	// Nouveau maximum : ~0.060
	//
	// Cela réduit énormément le risque de wind-up pendant rotation / transition
	// de loi.
	//

	static constexpr double pitch_ki[fcs_mach_count] =
	{
		0.040,   // M0.0
		0.042,   // M0.1
		0.044,   // M0.2
		0.046,   // M0.3
		0.048,   // M0.4
		0.050,   // M0.5
		0.052,   // M0.6
		0.053,   // M0.7
		0.054,   // M0.8
		0.055,   // M0.9
		0.055,   // M1.0
		0.056,   // M1.1
		0.056,   // M1.2
		0.057,   // M1.3
		0.058,   // M1.4
		0.059,   // M1.5
		0.060,   // M1.6
		0.060,   // M1.7
		0.060    // M1.8
	};


	// ---------------------------------------------------------------------------
	// D PID CLASSIQUE
	// ---------------------------------------------------------------------------
	//
	// On garde le D classique à zéro.
	//
	// Le Rafale utilise ici un amortissement basé directement sur q.
	// C'est préférable à une dérivée brute de l'erreur car une dérivée classique
	// amplifie énormément le bruit de télémétrie.
	//

	static constexpr double pitch_kd[fcs_mach_count] =
	{
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0
	};


	// ---------------------------------------------------------------------------
	// AMORTISSEMENT DU TAUX DE TANGAGE q
	// ---------------------------------------------------------------------------
	//
	// C'est ici que je fais le changement le plus important.
	//
	// Ancienne loi :
	//   0.30 → 0.74
	//
	// Nouvelle loi :
	//   0.48 → 0.95
	//
	// L'objectif est d'absorber le dépassement de q avant que le PID ne renvoie
	// une commande inverse importante.
	//
	// La progression reste douce afin d'éviter une discontinuité à M≈1.
	//

	static constexpr double pitch_rate_damping_cmd[fcs_mach_count] =
	{
		0.48,   // M0.0
		0.50,   // M0.1
		0.53,   // M0.2
		0.56,   // M0.3
		0.59,   // M0.4
		0.62,   // M0.5
		0.65,   // M0.6
		0.68,   // M0.7
		0.71,   // M0.8
		0.74,   // M0.9
		0.77,   // M1.0
		0.80,   // M1.1
		0.83,   // M1.2
		0.86,   // M1.3
		0.88,   // M1.4
		0.90,   // M1.5
		0.92,   // M1.6
		0.94,   // M1.7
		0.95    // M1.8
	};

	// ── ROLL PID — Optimisé selon analyse telemetry_perfos.csv
	// Stratégie : augmenter Kp/Kd (+20-30%) pour stabilité roulis haute variance (1.109 deg/s)
	// Réduire Ki (-10%) pour limiter oscillations en roulis
	static constexpr double roll_kp[fcs_mach_count] = {
		0.2770, 0.3072, 0.3151, 0.3223, 0.3142,
		0.2867, 0.2690, 0.2583, 0.2460, 0.2334,
		0.2220, 0.2180, 0.2120, 0.2060, 0.2000,
		0.1940, 0.1880, 0.1820, 0.1760
	};
	static constexpr double roll_ki[fcs_mach_count] = {
		0.0720, 0.0720, 0.0701, 0.0652, 0.0614,
		0.0562, 0.0517, 0.0476, 0.0429, 0.0381,
		0.0339, 0.0310, 0.0280, 0.0250, 0.0225,
		0.0200, 0.0180, 0.0160, 0.0140
	};
	static constexpr double roll_kd[fcs_mach_count] = {
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0, 0.0,
		0.0, 0.0, 0.0, 0.0
	};

	// ── YAW PID — Légèrement optimisé selon analyse telemetry_perfos.csv
	// Stratégie : modulation modérée (+5-10% Kp/Kd, -5% Ki) — lacet stable (RMS 0.101)
	// Amélioration modeste pour damping haute fréquence en supersonique
	static constexpr double yaw_kp[fcs_mach_count] = {
		1.1549, 1.2246, 1.1745, 1.0765, 0.9884,
		0.8888, 0.8213, 0.7697, 0.7101, 0.6564,
		0.6136, 0.8500, 0.8500, 0.8500, 0.8500,
		0.8500, 0.8500, 0.8500, 0.8500
	};
	static constexpr double yaw_ki[fcs_mach_count] = {
		0.0397, 0.0462, 0.0475, 0.0465, 0.0446,
		0.0413, 0.0389, 0.0372, 0.0352, 0.0332,
		0.0314, 0.0350, 0.0350, 0.0350, 0.0350,
		0.0350, 0.0350, 0.0350, 0.0350
	};
	static constexpr double yaw_kd[fcs_mach_count] = {
		0.0279, 0.0271, 0.0260, 0.0247, 0.0234,
		0.0209, 0.0187, 0.0167, 0.0149, 0.0137,
		0.0127, 0.0220, 0.0220, 0.0220, 0.0220,
		0.0220, 0.0220, 0.0220, 0.0220
	};


	// =========================================================================
	// MOTEURS — SNECMA M88-2 × 2
	//
	// Sources (données officielles Safran/Dassault) :
	//   Poussée sèche  : 2 × 50.0 kN  = 100.0 kN  (SLS)
	//   Poussée PC     : 2 × 75.0 kN  = 150.0 kN  (SLS)
	//   SFC sec        : 0.78 lb/lbf·h → mdot = 2.21 kg/s (SLS, sec)
	//   SFC AB         : 1.66 lb/lbf·h → mdot = 7.05 kg/s (SLS, PC)
	//   Débit massique : 65 kg/s / moteur
	//   TET            : 1 850 K
	//   Taux de compression : 24.5
	//   Bypass ratio   : 0.30
	//
	// Modèle lapse rate :
	//   Tuyère CONVERGENTE (non CD) — limite le ram recovery supersonique.
	//   Sub : F(M) ≈ F_SL × (1 + 0.18·M) — récupération ram progressive
	//   Trans : pic à M≈0.70–0.75, déclin choc normal dès M>0.80
	//   Sup : déclin net car pas d'expansion convergente-divergente
	//   Modèle similaire M53-P2 / F404 (contemporains, BPR et tuyère analogues)
	// =========================================================================

	double idle_rpm = 22.0;    // N2 % au ralenti sol (M88 : ~22% N1 confirmé)
	double fuel_consumption = 2.216;    // Conso totale PC SLS (kg/s) — SFC 1.66×F_AB/3600
	// [= 1.66 × (150000/4.448) × 0.4536 / 3600]
	double engine_start_time = 20;     // Temps démarrage (s) — FADEC M88

	double engine_mach_table[] =
	{
		0.00, 0.15, 0.30, 0.45, 0.60, 0.75, 0.85,
		0.90, 0.95, 1.00, 1.05, 1.10, 1.20, 1.40, 1.80,
	};

	// Poussée totale AVEC postcombustion (N) — 2 × M88-2
	//
	// Lapse ram convergente : pic M≈0.70–0.75, puis déclin.
	// Pas de remontée forte en supersonique (tuyère non CD).
	// Valeurs normalisées sur F_SLS = 150 000 N.
	double max_thrust[] =
	{
		150000,   // M 0.00 — SLS 2×75 kN (référence Safran)
		154000,   // M 0.15 — ram recovery naissant
		158000,   // M 0.30 — montée ram
		163000,   // M 0.45 — ram soutenu
		167000,   // M 0.60 — ram max subsonique
		170000,   // M 0.75 — peak ram tuyère convergente
		165000,   // M 0.80 — choc ondulé entrée d'air
		161000,   // M 0.90 — choc de détente partielle
		157000,   // M 0.95 — onde de choc normale forte
		154000,   // M 1.00 — transition supersonique
		153000,   // M 1.05 — onde oblique attachée
		152000,   // M 1.10 — légère récupération
		149000,   // M 1.20 — déclin tuyère convergente
		143000,   // M 1.40 — perte expansion (pas de CD)
		133000,   // M 1.80 — limite structurelle — suffisant Vmax palier
	};
	// This is total thrust, not thrust per engine if there's more than one.

	// Poussée totale SANS postcombustion (N) — plein militaire sec
	//
	// Le dry_thrust suit le même profil mais plus sensible au ram
	// (rapport compression thermodynamique moindre sans AB).
	// Supercruise M=1.40 config propre : F_sec ≈ 100 kN suffisant si Cx faible.
	double dry_thrust[] =
	{
		100000,   // M 0.00 — SLS 2×50 kN (référence Safran)
		101500,   // M 0.15
		103000,   // M 0.30
		106000,   // M 0.45
		110000,   // M 0.60 — ram recovery efficace
		114000,   // M 0.75 — peak sec (ram > perte compression)
		111000,   // M 0.85 — début perte transsonique
		107000,   // M 0.90 — choc entrée d'air
		103500,   // M 0.95
		101500,   // M 1.00
		103000,   // M 1.05 — légère récupération onde oblique
		104000,   // M 1.10
		103000,   // M 1.20
		 98000,   // M 1.40 — supercruise (config propre : ~Cx*q*S ≈ 95 kN ✓)
		 88000,   // M 1.80 — limite, insuffisant pour palier sup à masse pleine
	};

	// Réponse manette → puissance normalisée [0..1]
	//
	// Architecture M88/FADEC :
	//   Axe DCS : -1.0 à +1.0 → mappé en interne vers 0.0 à 1.0
	//   0.00 (axe -1.0) = ralenti (22% N1)
	//   0.54 (axe ~0.08) = plein militaire sec (détente PC)
	//   0.54–0.57 = zone de transition détente
	//   0.57–1.00 (axe 0.14–1.0) = postcombustion progressive
	//
	// IMPORTANT : Cette table doit couvrir TOUTE la plage 0.0–1.0
	// car l'axe des gaz utilise maintenant toute la course.
	double throttle_input_table[] =
	{
		0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0,
	};

	double engine_power_table[] =
	{
		0.00,   // 0.0 (axe -1.0) — ralenti complet
		0.01,   // 0.1 (axe -0.8)
		0.03,   // 0.2 (axe -0.6)
		0.07,   // 0.3 (axe -0.4)
		0.14,   // 0.4 (axe -0.2)
		0.28,   // 0.5 (axe  0.0) — ~60% militaire sec
		0.55,   // 0.6 (axe +0.2) — plein militaire sec (détente PC)
		0.70,   // 0.7 (axe +0.4) — PC partiel (staging 1)
		0.82,   // 0.8 (axe +0.6) — PC moyen
		0.92,   // 0.9 (axe +0.8) — PC fort
		1.00,   // 1.0 (axe +1.0) — PC maxi
	};

	// Affichage N1/N2 cockpit (normalisé 0..1 → lecture ADEN/RCP)
	double engine_power_readout_table[] =
	{
		0.22,   // 0.0 (axe -1.0) — ralenti : N1 = 22%
		0.30,   // 0.1 (axe -0.8)
		0.38,   // 0.2 (axe -0.6)
		0.48,   // 0.3 (axe -0.4)
		0.58,   // 0.4 (axe -0.2)
		0.70,   // 0.5 (axe  0.0) — ~60% militaire sec
		0.84,   // 0.6 (axe +0.2) — plein militaire sec (détente PC)
		0.90,   // 0.7 (axe +0.4) — PC partiel (staging 1)
		0.94,   // 0.8 (axe +0.6) — PC moyen
		0.97,   // 0.9 (axe +0.8) — PC fort
		1.00,   // 1.0 (axe +1.0) — PC maxi
	};

	// =========================================================================
	// EFFICACITÉS DES SURFACES DE CONTRÔLE
	// (contributions Cm, Cl, Cn normalisées par radian de déflexion)
	// =========================================================================

	double canard_pitch_eff = 0.38;   // Bras +2.626m, surface canard (~0.74m²/côté)
	double elevon_pitch_eff = 0.36;   // Bras -2.996m, surface élevon (~1.17m²/côté)

	// Roulis — gouvernes (bras ±3.808 m)
	double gouv_roll_eff = 0.30;

	// Roulis — élevons (bras ±2.023 m, différentiel)
	double elevon_roll_eff = 0.18;

	// Lacet — gouverne de direction (bras –4.555 m)
	double rudder_yaw_eff = 0.32;

	// Lacet induit par roulis (couplage — sur delta à forte flèche)
	double roll_yaw_coupling = 0.12;



} // namespace FM_DATA