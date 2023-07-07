#include <iostream>
#include "compare.h"

int main() {
    std::cout << "Working" << std::endl;
    const int minimum = min(5,9);
    const int maximum = max(5,9);
    const int sumval = sum(5, 9);
    std::cout << "Minimum :" << minimum << std::endl;
    std::cout << "Maximum :" << maximum << std::endl;
    std::cout << "sumval :" << sumval << " address : "<< &sumval << std::endl;
    int age = 40;
    say_age(&age);
    std::cout << age << std::endl;
    int year = 2020;
    std::cout << "Old year :" << year << "& is: " << &year << std::endl;
    say_year(year);
    std::cout << "New year :" << year << "& is: " << &year << std::endl;

    std::cout << "======================================== End Here ==========================================" << std::endl;

    std::string output_str;
    std::string string1("Cassanblanca");
    std::string string2("Bellevue");
    max_Str(string1, string2, output_str);
    std::cout << output_str << std::endl;



    return 0;
}
