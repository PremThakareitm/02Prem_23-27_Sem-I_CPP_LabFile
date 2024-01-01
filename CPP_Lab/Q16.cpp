// Write a program to creating an inventory management system for a small
// store. The system should use object-oriented principles in C++. Your program
// should have the following features:
// • Create a Product class that represents a product in the inventory. Each
// Product object should have the following attributes:
// • Product ID (an integer)
// • Product Name (a string)
// • Price (a floating-point number)
// • Quantity in stock (an integer)
// • Implement a parameterized constructor for the Product class to
// initialize the attributes when a new product is added to the inventory.


#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int prod_id;
    string prod_name;
    float price;
    int quantity;

public:
    Product()
    {
    }
    Product(int id, string n, float p, int q)
    {
        prod_id = id;
        prod_name = n;
        price = p;
        quantity = q;
    }
};

int main()
{
    int n, prod_id, quantity;
    string prod_name;
    float price;
    cout << "Enter number of products: ";
    cin >> n;
    Product p[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Product ID: ";
        cin >> prod_id;
        cout << "Enter Product Name: ";
        cin.ignore();
        getline(cin, prod_name);
        cout << "Enter Price of Product: ";
        cin >> price;
        cout << "Enter Quantity of Product: ";
        cin >> quantity;
        p[i] = Product(prod_id, prod_name, price, quantity);
    }
    return 0;
}