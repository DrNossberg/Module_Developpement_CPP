/*
** Cnam, en partenariat avec l'ITII Alsace, 2021
** Projet :
**    TP2
** Author :
**    Antoine Orion
** File description :
**    Implementation of the triangle class
*/

#include <math.h>

#include "Triangle.hpp"

Triangle::Triangle(Point const &a, Point const &b, Point const &c) {
    this->a.x = a.x;
    this->a.y = a.y;
    this->b.x = b.x;
    this->b.y = b.y;
    this->c.x = c.x;
    this->c.y = c.y;
}

void Triangle::set_PointA(Point const &a) {
    this->a.x = a.x;
    this->a.y = a.y;
}

Point const &Triangle::get_PointA(void) const {
    return (this->a);
}

void Triangle::set_PointB(Point const &b) {
    this->b.x = b.x;
    this->b.y = b.y;
}

Point const &Triangle::get_PointB(void) const {
    return (this->b);
}

void Triangle::set_PointC(Point const &c) {
    this->c.x = c.x;
    this->c.y = c.y;
}

Point const &Triangle::get_PointC(void) const {
    return (this->c);
}

const float Triangle::get_AB() const {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

const float Triangle::get_AC() const {
    return sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
}

const float Triangle::get_BC() const {
    return sqrt(pow(b.x - c.x, 2) + pow(b.y - c.y, 2));
}

const float Triangle::get_base(void) const {
    float base = (get_AB() > get_AC()) ? get_AB() : get_AC();

    return ((get_BC() > base) ? get_BC() : base);
}

const float Triangle::get_height(void) const {
    return ((2 * get_area()) /  get_base());
}

const double Triangle::get_area(void) const {
    float s = (get_AB() + get_AC() + get_BC()) / 2;

    return (sqrt(s * (s - get_AB()) * (s - get_AC()) * (s - get_BC())));
}

const float Triangle::get_length() const {
    return (get_AB() + get_BC() + get_AC());
}

const bool Triangle::is_equilateral(void) const {
    return ((get_AB() == get_BC()) == get_AC() ? true : false);
}

const bool Triangle::is_isosceles(void) const {
    return (get_AB() == get_BC() || get_AB() == get_AC()
        || get_AC() == get_BC() ? true : false);
}
