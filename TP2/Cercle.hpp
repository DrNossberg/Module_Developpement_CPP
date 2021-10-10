/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    Project Name
** Author :
**    Antoine Orion
** File description :
**    contain the declaration of the rectangle class
*/

#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "projet.h"

class Cercle {
private :
    int diameter;
    Point position;

public :
    Cercle();
    Cercle(Point const &, int);
    ~Cercle();

    void            set_position(Point const &);
    const Point    &get_position(void) const;

    void            set_diameter(int);
    const int       get_diameter(void) const;

    const float     get_perimetre(void) const;
    const float     get_surface(void) const;

    const bool      contain(Point const &);
    const bool      intersect(Point const &);
};

#endif /* CERCLE_HPP */