#include "dog.h"

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;

    cout << "Dog Constructor called :" << name << " at "<< this << endl;
}

Dog::~Dog(){
    cout << "Dog Destructor called here :" << name << " at "<< this << endl;
    delete p_age;
}

Dog* Dog::change_dog_name(std::string name) {
    name = name;
    return this;
}

Dog* Dog::change_dog_breed(std::string breed){
    this->breed = breed;
    return this;
}

Dog* Dog::change_dog_age(int age) {
    p_age = new int;
    *p_age = age;
    return this;
}

Dog* Dog::get_name(){
    return this;
}

Dog* Dog::print_info(){
    cout << "name: "<< name << "breed: "<< breed << "age: " << *p_age <<endl;
    return this;
}