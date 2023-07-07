#include <iostream>
int min(int a, int b) {
    if (a < b)
    {
        return a;
    }else{
        return b;
    }
    
}

int max(int a, int b) {
    if (a > b)
    {
        return a;
    }else{
        return b;
    }
}

int sum(int a, int b) {
    int result = a + b;
    std::cout << "result :" << result << " address :" << &result << std::endl;
    return result;
}
int sum(double a, double b) {
    int result = a + b;
    std::cout << "result :" << result << " address :" << &result << std::endl;
    return result;
}

void say_age(int* age) {
    ++(*age);
    std::cout << *age << std::endl;
    std::cout << age << std::endl;
}

void say_year(int& year) {
    ++year;
    std::cout <<  "Year from function is: " << year << "& is: " << &year << std::endl;
}

void max_Str(const std::string input1, const std::string input2, std::string& output_str) {
    if (input1 > input2)
    {
        output_str = input1;
    }else {
        output_str = input2;
    }
    
}

template <typename T> T deleteVal(T val1, T val2) {
    return val1 + val2;
};
