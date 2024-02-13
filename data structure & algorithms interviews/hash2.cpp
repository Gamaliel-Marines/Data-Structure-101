#include <iostream>
#include <map>

int main() {
    // Declare a map with int keys and string values
    std::map<int, std::string> myMap;

    // Insert key-value pairs into the map
    myMap[1] = "One";
    myMap[3] = "Three";
    myMap[2] = "Two";

    // Access and print elements (automatically ordered by key)
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
