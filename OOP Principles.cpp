#include <iostream>
using namespace std;

// Base class
class Item {
public:
    string name;
    int quantity;

    Item(string n, int q) {
        name = n;
        quantity = q;
    }

    virtual void display() = 0; // Pure virtual function
};
