#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // TODO: Write your code below
    map<string, int> inventory;

    inventory["Laptops"] = 15;
    inventory["Mice"] = 42;
    inventory["Keyboards"] = 28;
    inventory["Monitors"] = 12;

    cout << "Initial Inventory Setup:\n";
    for(const auto& i : inventory) {
        cout << i.first << ": " << i.second << "\n";
    }
    cout << "Inventory system is ready!\n";

    return 0;
}
