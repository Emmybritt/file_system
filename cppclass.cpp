#include <iostream>
#include <ios>
#include "constants.h"
#include "cylinder.h"
#include "dog.h"


using namespace std;

void some_func() {
    Dog* p_dog = new Dog("German", "shephered", 56);
    delete p_dog;
}

int main() {
    Cylinder cylinder1;
    std::cout << "Volume : " << cylinder1.volume() << std::endl;

    Cylinder cylinder2(5,7);
    std::cout << "Volume : " << cylinder2.volume() << std::endl;
    std::cout << "Volume : " << cylinder2.get_height( ) << std::endl;

    Cylinder* p_cylinder1 = &cylinder1;

    cout << p_cylinder1->volume() << endl;
    cout << (*p_cylinder1).volume() << endl;


    Cylinder* cylinder3 = new Cylinder(500,2);
    cout << cylinder3->volume() << endl;
    cout << cylinder3->get_base_radius() << endl;

    cout << "" << endl;

    Dog* my_dog = new Dog("Fluffy", "Shephered", 2);

    cout << "Done !" << my_dog->get_name()  << endl;
    my_dog->change_dog_name("Person")->change_dog_breed("pumba")->change_dog_age(40)->print_info();


    some_func();


    return 0;
}