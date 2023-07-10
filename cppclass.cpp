#include <iostream>
#include <ios>


using namespace std;

const double PI {3.14159265358979323846}; 

class Cylinder {
    private:
        double base_radius {1.0};
        double height {1.0};


    public:
        // Function methods
        // Cylinder() {
        //     base_radius =2;
        //     height = 5;
        // }

        // default constructor
        Cylinder() = default;

        Cylinder(double rad_params, double height_params) {
            base_radius = rad_params;
            height = height_params;
        }
        double volume() {
            return PI * base_radius * base_radius * height;
        }

        double get_height() {
            return height;
        }

        double get_base_radius() {
            return base_radius;
        }

        void set_base_radius(double rad_params) {
            base_radius = rad_params;
        }
        void set_height(double height_params ) {
            height = height_params;
        }
};

int main() {
    Cylinder cylinder1;
    std::cout << "Volume : " << cylinder1.volume() << std::endl;

    Cylinder cylinder2(5,7);
    std::cout << "Volume : " << cylinder2.volume() << std::endl;


    return 0;
}