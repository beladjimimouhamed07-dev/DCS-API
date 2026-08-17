#pragma once
#include "moteurs/Thrust_Data.h"
#include "moteurs/Drag_Data.h"
#include "moteurs/Fuel_Flow_Data.h"
#include <algorithm>

// Fonction d'interpolation bilinéaire directe
inline double interpolate_2d_raw(double mach, double alt,
    const double* axis,
    const double table[][150]) {

    // 1. Sature les entrées (Clamp) avec protections des macros
    double m = (std::max)(0.0, (std::min)(mach, 2.0));
    double a = (std::max)(axis[0], (std::min)(alt, axis[31]));

    // 2. Trouver les indices d'altitude
    int i_alt = 0;
    while (i_alt < 31 && axis[i_alt + 1] < a) i_alt++;

    // 3. Calcul de l'index et des proportions de Mach
    double m_scaled = m * (149.0 / 2.0);
    int i_m = (std::max)(0, (std::min)((int)m_scaled, 148));

    double m_frac = m_scaled - i_m;
    m_frac = (std::max)(0.0, (std::min)(m_frac, 1.0));

    // 4. Calcul de la proportion d'altitude (alt_frac)
    double alt_frac = (a - axis[i_alt]) / (axis[i_alt + 1] - axis[i_alt]);
    alt_frac = (std::max)(0.0, (std::min)(alt_frac, 1.0));

    // 5. Récupération des 4 points de la table
    double v00 = table[i_alt][i_m];         // Alt basse, Mach bas
    double v01 = table[i_alt][i_m + 1];     // Alt basse, Mach haut
    double v10 = table[i_alt + 1][i_m];     // Alt haute, Mach bas
    double v11 = table[i_alt + 1][i_m + 1]; // Alt haute, Mach haut

    // 6. Interpolation bilinéaire croisée
    double v0 = v00 * (1.0 - m_frac) + v01 * m_frac; // Mélange Mach à basse altitude
    double v1 = v10 * (1.0 - m_frac) + v11 * m_frac; // Mélange Mach à haute altitude

    // CORRECTIF ICI : On utilise bien alt_frac pour interpoler entre le résultat bas (v0) et haut (v1)
    return v0 * (1.0 - alt_frac) + v1 * alt_frac;
}