/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    TP2
** Author :
**    Antoine Orion
** File description :
**    Implementation of the rectangle class
*/

#include "Rectangle.hpp"

Rectangle::Rectangle(Point const &p, int longueur, int largeur) : longueur(longueur), largeur(largeur) {
    this->position.x = p.x;
    this->position.y = p.y;
}

void Rectangle::set_longueur(int longueur) {
    this->longueur = longueur;
}

const int Rectangle::get_longueur(void) const {
    return (this->longueur);
}

void Rectangle::set_largeur(int largeur) {
    this->largeur = largeur;
}

const int Rectangle::get_largeur(void) const {
    return (this->largeur);
}

void Rectangle::set_position(Point const &position) {
    this->position.x = position.x;
    this->position.y = position.y;
}

Point const &Rectangle::get_position(void) const {
    return (this->position);
}

const float Rectangle::get_perimetre(void) const {
    return (this->longueur * 2 + this->largeur * 2);
}

const float Rectangle::get_surface(void) const {
    return (this->longueur * this->largeur);
}

const bool Rectangle::has_bigger_perimeter(Rectangle rec) {
    return (this->get_perimetre() > rec.get_perimetre());
}

const bool Rectangle::has_bigger_surface(Rectangle rec) {
    return (this->get_surface() > rec.get_surface());
}
