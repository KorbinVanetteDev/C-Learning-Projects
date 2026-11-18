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
        string updateItem;
        int quantity;

        cin >> updateItem >> quantity;

        inventory[updateItem] += quantity;

        cout << "Added " << quantity << " " << updateItem
             << ". New total: " << inventory[updateItem] << "\n";
    }

    cout << "Final Inventory:\n";

    for (const auto& i : inventory) {
        cout << i.first << ": " << i.second << "\n";
    }

    return 0;
}
