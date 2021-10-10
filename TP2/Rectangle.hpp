/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    Project Name
** Author :
**    Antoine Orion
** File description :
**    contain the declaration of the rectangle class
*/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "projet.h"

class Rectangle {
private :
    int longueur;
    int largeur;
    Point position;

public :
    Rectangle();
    Rectangle(Point const &, int, int);
    ~Rectangle();
    
    void            set_longueur(int);
    const int       get_longueur(void) const;
    void            set_largeur(int);
    const int       get_largeur(void) const;

    void            set_position(Point const &);
    Point const    &get_position(void) const;
    const float     get_perimetre(void) const;
    const float     get_surface(void) const;
    const bool      has_bigger_perimeter(Rectangle);
    const bool      has_bigger_surface(Rectangle);
};

#endif /* RECTANGLE_HPP */