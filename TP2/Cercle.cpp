/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    TP2
** Author :
**    Antoine Orion
** File description :
**    Implementation of the Circle class
*/

#include <math.h>
#include "Cercle.hpp"

Cercle::Cercle(Point const &o, int diameter) : diameter(diameter) {
    this->position.x = o.x;
    this->position.y = o.y;
}

void Cercle::set_position(Point const &position) {
    this->position.x = position.x;
    this->position.y = position.y;
}

const Point &Cercle::get_position(void) const {
    return (this->position);
}

void Cercle::set_diameter(int d) {
    this->diameter = d;
}

const int  Cercle::get_diameter(void) const {
    return (this->diameter);
}

const float Cercle::get_perimetre(void) const {
    return (this->diameter * M_PI * 2);
}
const float Cercle::get_surface(void) const {
    return (M_PI * pow(this->diameter, 2));
}

const bool Cercle::contain(Point const &p) {
    if (sqrt((pow(this->position.x, 2) + pow(p.x, 2)) - (pow(this->position.y, 2) + pow(p.y, 2))) > this->diameter)
        return (false);
    return (true);
}

const bool Cercle::intersect(Point const &p) {
    if (sqrt((pow(this->position.x, 2) + pow(p.x, 2)) - (pow(this->position.y, 2) + pow(p.y, 2))) == this->diameter)
        return (false);
    return (true);
}