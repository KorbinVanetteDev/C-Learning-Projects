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
    inventory["grapes"] = 40;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string itemName;
        cin >> itemName;

        if (inventory.count(itemName)) {
            cout << itemName << ": " << inventory[itemName] << " in stock\n";
        } else {
            cout << itemName << ": Item not found\n";
        }
    }

    cout << "Total items in inventory: " << inventory.size() << "\n";

    return 0;
}
