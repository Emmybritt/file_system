#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <list>

using namespace std;
 

int main() {

    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("mango", "This is an mango"));
    myDictionary.insert(pair<string, string>("apple", "This is an apple"));
    myDictionary.insert(pair<string, string>("orange", "This is a orange"));
    myDictionary.insert(pair<string, string>("banana", "This is a banana"));
    myDictionary.insert(pair<string, string>("strawberry", "This is a strawberry"));
    myDictionary["strawberry"] = "testing strawberryr";
    cout << myDictionary.size() << endl;
    // myDictionary.clear();
    myDictionary.erase("strawberry");
    myDictionary.begin();
    cout << myDictionary.size() << endl;

    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    cout << "=========================== End here =======================" << endl;
    cout << "=========================== Starts here =======================" << endl;

    map<string, list<string>> pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attacks"}; 
    list<string> charmandaAttacks {"flame thrower", "scary face"}; 
    list<string> chikoritaAttacks {"razor leaf", "poison powder"}; 

    pokedex.insert(pair<string, list<string>>("pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("charmanda", charmandaAttacks));
    pokedex.insert(pair<string, list<string>>("chikorita", chikoritaAttacks));

    for (auto pair : pokedex)
    {
        cout << pair.first << endl;
        for (auto attack : pair.second)
        {
            cout << " - "<< attack << endl;
        }
        
    }


    cout << "=========================== End here =======================" << endl;
    cout << "=========================== Starts here =======================" << endl;

    struct CityRecord{
        CityRecord(std::string N, uint64_t P, double Lng, double lat) {
            Name = N;
            Population = P;
            longitude = Lng;
            latitude = lat;
        }
        std::string Name;
        uint64_t Population;
        double longitude, latitude;
    };

    map<string, CityRecord> cityrecords;


    std::vector<CityRecord> cities;
    cities.emplace_back("Lagos", 600000, 50.3950, 3029495);
    cities.emplace_back("Ondo", 45000, 4.3950, 3029495);
    cities.emplace_back("Akure", 600000, 50.3950, 3029495);
    cities.emplace_back("Osun", 600000, 50.3950, 3029495);
    cities.emplace_back("Benue", 600000, 50.3950, 3029495);
    cities.emplace_back("danie", 600000, 50.3950, 3029495);

    cityrecords["lagos"] = CityRecord {"Lagos", 500000, 3.4, 3.4};


    for (size_t i = 0; i < cities.size(); i++)
    {
        cout << "City" << cities[i].Name << endl;
        cout << " - lat" << cities[i].latitude << endl; 
    }
    
    
    
    
    return 0;
}