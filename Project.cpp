#include <iostream>
using namespace std;

enum Category {
    Food,
    Books,
    Cloths,
    Electronics,
    Furniture
};

class Product {
    int Productid;
    string Name;
    int Price;
    int stock;
    Category category;

public:

    Product(int id, string n, int p, int s, Category c) {
        Productid = id;
        Name = n;
        Price = p;
        stock = s;
        category = c;
    }

    void displayProduct() {
        cout << "The productid is: " << Productid << endl;
        cout << "Product name is: " << Name << endl;
        cout << "Product price is: " << Price << endl;
        cout << "Stock: " << stock << endl;
        cout << "Category: " << category << endl;
    }

    void updatestock(int quantity) {
        stock = stock + quantity;
        cout << "The stock is updated successfully" << endl;
    }

    void checkAvailability() {
        if (stock > 0) {
            cout << "It is available" << endl;
        }
        else {
            cout << "Not available" << endl;
        }
    }
};

int main() {

    Product p1(345, "Smart Phone", 90000, 19, Electronics);

    p1.displayProduct();

    p1.updatestock(10);

    p1.checkAvailability();

    return 0;
}