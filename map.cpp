#include <iostream>
#include <map>

using namespace std;

int main() {
    // map<int, std::string> studentMap;
    map<int, std::string> studentMap = {
        {1, "John"},
        {2, "Alice"},
        {3, "Bob"}
    };

    // Inserting or pushing into a map
//     studentMap.insert(std::pair<int, std::string>(4, "berit"));
//     studentMap[5] = "daniel";

//     std::string name = studentMap[2];
//     cout << "Student name ->" << name;

//     auto it = studentMap.find(1);

//     for (auto it = studentMap.begin(); it != studentMap.end(); ++it) {
//     int id = it->first;
//     std::string name = it->second;
//     std::cout << "ID: " << id << ", Name: " << name << std::endl;
// }

// std::cout << "Is empty? " << (studentMap.empty() ? "Yes" : "No") << std::endl;



std::map<int, std::string> myMap{{1, "one"}, {3, "three"}, {4, "four"}, {5, "five"}};
auto it = myMap.upper_bound(3);
if (it != myMap.end()) {
    std::cout << "Key " << it->first << ": " << it->second << '\n';
} else {
    std::cout << "No element greater than 3\n";
}

for (auto mt = myMap.begin(); mt != myMap.end(); ++it) {
    std::cout << "Key " << it->first << ": " << it->second << '\n';
}



    



    // for (auto student : studentMap)
    // {
    //     cout << student.first << student.second<< endl;
    // }
    
    

    return 0;
}