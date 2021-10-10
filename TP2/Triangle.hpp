/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    TP2
** Author :
**    Antoine Orion
** File description :
**    declaration of the triangle class
*/

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "projet.h"

class Triangle {
private:
    Point a, b, c;

public:
    Triangle();
    Triangle(Point const &, Point const &, Point const &);
    ~Triangle();
    
    void            set_PointA(Point const &);
    Point const    &get_PointA() const;
    void            set_PointB(Point const &);
    Point const    &get_PointB() const;
    void            set_PointC(Point const &);
    Point const    &get_PointC() const;

    const float     get_AB() const;
    const float     get_AC() const;
    const float     get_BC() const;

    const float     get_base() const;
    const float     get_height() const;
    const double    get_area() const;
    const float     get_length() const;

    const bool      is_isosceles() const;
    const bool      is_right() const;
    const bool      is_equilateral() const;
};

#endif /* TRIANGLE_HPP */