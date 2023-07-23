#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"


class Cylinder {
    private:
        double base_radius {1.0};
        double height {1.0};
    public:
        Cylinder() = default;
        ~Cylinder();

        Cylinder(double rad_params, double height_params);
        double volume();

        double get_height();

        double get_base_radius();

        void set_base_radius(double rad_params);
        void set_height(double height_params );
};


#endif