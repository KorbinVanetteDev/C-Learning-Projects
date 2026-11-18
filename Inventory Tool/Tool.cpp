#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // TODO: Write your code below
    map<string, int> inventory;

    inventory["apples"] = 50;
    inventory["bananas"] = 30;
    inventory["oranges"] = 25;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string itemName;
        int quantity;

        cin >> itemName >> quantity;

        if (!inventory.count(itemName)) {
            cout << "Error: " << itemName << " not found in inventory\n";
        } else if (inventory[itemName] < quantity) {
            cout << "Error: Cannot remove " << quantity << " " << itemName
                 << ". Only " << inventory[itemName] << " in stock\n";
        } else {
            inventory[itemName] -= quantity;
            cout << "Removed " << quantity << " " << itemName
                 << ". New total: " << inventory[itemName] << "\n";
        }
    }

    cout << "Final Inventory:\n";

    for (const auto& item : inventory) {
        cout << item.first << ": " << item.second << "\n";
    }

    return 0;
}
