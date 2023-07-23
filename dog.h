#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <ios>
#include <string_view>

using namespace std;

class Dog {
    private:
        std::string name;
        std::string breed;
        int * p_age {nullptr};

    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
        ~Dog();
        Dog* get_name();
        Dog* change_dog_name(std::string name);
        Dog* change_dog_breed(std::string breed);

        Dog* change_dog_age(int age);

        Dog* print_info();
};


#endif
