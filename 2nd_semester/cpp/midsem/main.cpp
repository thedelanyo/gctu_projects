#include <iostream>
#include <vector>
#include <iomanip>
#include <map>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::find_if;
using std::fixed;
using std::left;
using std::setprecision;
using std::setw;
using std::string;
using std::vector;

struct Product
{
    int id;
    string name;
    string category;
    double price;
    int quantity;
    bool prescriptionRequired;
};

// Object
struct Sale
{
    int saleId;
    vector<Product> products; // dynamic array
    double totalAmount;
    string date;
};

vector<Product> inventory;
vector<Sale> sales;
int nextProductId = 1;
int nextSaleId = 1;

const string ADMIN_PASSWORD = "admin123";

// Functions
void displayMainMenu()
{
    cout << "\n\n=====================================\n";
    cout << "        PHARMACY POS SYSTEM          \n";
    cout << "=====================================\n";
    cout << "1. Client Menu\n";
    cout << "2. Admin Menu\n";
    cout << "3. Exit\n";
    cout << "=====================================\n\n";
};

void clientMenu()
{
    vector<Product> cart;
    int choice;

    do
    {
        clearScreen();
        cout << "\n\n=====================================\n";
        cout << "        CLIENT MENU          \n";
        cout << "=====================================\n";
        cout << "1. View Available Products\n";
        cout << "2. Add Product to Cart\n";
        cout << "3. Remove Product from Cart\n";
        cout << "4. View Cart\n";
        cout << "5. Checkout\n";
        cout << "6. Back to Main Menu\n";
        cout << "=====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayProducts();
            pressEnterToContinue();

            break;

        case 2:
            addToCart(cart);
            break;

        case 3:
            removeFromCart(cart);
            break;

        case 4:
            viewCart(cart);
            break;

        case 5:
            checkout(cart);
            break;

        case 6:
            cout << "Returning to main menu....";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            pressEnterToContinue();
        }

    } while (choice != 6);
};

bool authenticateAdmin()
{
    string password;
    cout << "Enter admin password to continue: ";
    cin >> password;

    if (password == ADMIN_PASSWORD)
    {
        cout << "Authentication successful\n";
        pressEnterToContinue();

        return true;
    }

    cout << "Authentication failed. Access denied.\n";
    pressEnterToContinue();

    return false;
};

void adminMenu()
{
    int choice;

    do
    {
        clearScreen();
        cout << "\n\n=====================================\n";
        cout << "        ADMIN MENU        \n";
        cout << "=====================================\n";
        cout << "1. Manage Inventory\n";
        cout << "2. View Sales Data\n";
        cout << "3. Back to Main Menu\n";
        cout << "=====================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            manageInventory();
            break;

        case 2:
            viewSalesData();
            pressEnterToContinue();
            break;

        case 3:
            cout << "Returning to main menu ...\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            pressEnterToContinue();
        }

    } while (choice != 3);
}

void displayProducts()
{
    cout << "\n\n=====================================\n";
    cout << "        AVAILABLE PRODUCTS       \n";
    cout << "=====================================\n";
    cout << left << setw(5) << "ID" << setw(20) << "Name"
         << setw(15) << "Category" << setw(10) << "Price"
         << setw(10) << "Qty" << setw(8) << "Rx\n";
    cout << "-------------------------------------------------\n";

    for (const auto &product : inventory)
    {
        cout << left << setw(5) << product.id
             << setw(20) << product.name
             << setw(15) << product.category
             << setw(10) << fixed << setprecision(2) << product.price
             << setw(10) << product.quantity
             << setw(8) << (product.prescriptionRequired ? "Yes" : "No") << "\n";
    };
};

void addToCart(vector<Product> &cart)
{
    displayProducts();
    int productId, quantity;

    cout << "\nEnter Product ID to add to cart: ";
    cin >> productId;

    auto it = find_if(inventory.begin(), inventory.end(),
                      [productId](const Product &p)
                      { return p.id == productId; });

    if (it == inventory.end())
    {
        cout << "Product not found";
        pressEnterToContinue();
        return;
    }

    if (it->prescriptionRequired)
    {
        char hasPrescription;
        cout << "This product requires a prescription. Do you have one? (y/n): ";
        cin >> hasPrescription;
        if (hasPrescription != 'y' && hasPrescription != 'Y')
        {
            cout << "cannot add prescription product without prescription.\n";
            pressEnterToContinue();
            return;
        }
    }

    // To continue Tomorrow.
};

void removeFromCart(vector<Product> &cart) {

};

void viewCart(const vector<Product> &cart) {

};

void checkout(const vector<Product> &cart) {

};

void manageInventory() {};

void addNewProduct() {};

void updateProduct() {};
void viewSalesData() {};
void initializeSampleData() {};

void clearScreen()
{
    // system("cls || clear");
}

void pressEnterToContinue()
{
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
}

int main()
{

    return 0;
};