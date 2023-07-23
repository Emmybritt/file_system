#include "constants.h"
#include "cylinder.h"

Cylinder::Cylinder(double rad_params, double height_params) {
    base_radius = rad_params;
    height = height_params;
}
Cylinder::~Cylinder(){
    // delete height;
    // delete base_radius;
}
double Cylinder::volume() {
    return PI * base_radius * base_radius * height;
}

double Cylinder::get_height() {
    return height;
}

double Cylinder::get_base_radius() {
    return base_radius;
}

void Cylinder::set_base_radius(double rad_params) {
    base_radius = rad_params;
}

void Cylinder::set_height(double height_params ) {
    height = height_params;
}