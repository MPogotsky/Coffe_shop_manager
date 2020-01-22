#include "head.h"

using namespace std;

void output(vector<PRODUCT_DESC> &point_prod) {
    if (point_prod.size() == 0) {
        cout << "Your list is empty." << endl;
    } else {

        for (int i = 0; i < point_prod.size(); ++i) {
            if (i == 0) {
                cout
                        << "N|    Name     |        Grade         |    Kind    |   Weight |  Packaging  | Quantity | Delivery date |  Notes   ";
            }
            cout << "\n";
            cout << i + 1 << ":";

            cout << setw(5) << left << point_prod[i].name << " \t ";

            cout << setw(15) << left << point_prod[i].grade << " \t ";

            cout << setw(10) << left << point_prod[i].kind << " \t ";

            cout << setw(5) << left << point_prod[i].package_weight << " \t ";

            cout << setw(10) << left << point_prod[i].type_of_packaging << " \t ";

            cout << setw(5) << left << point_prod[i].quantity << " \t ";

            cout << point_prod.at(i).expected_delivery_date.day;
            cout << '.' << point_prod.at(i).expected_delivery_date.month;
            cout << '.' << point_prod.at(i).expected_delivery_date.year << " \t ";

            cout << point_prod[i].notes;

        }
    }
}

void function_add_product(vector<struct PRODUCT_DESC> &point_prod) {
    PRODUCT_DESC Product;
    int number;
    number = point_prod.size();
    point_prod.push_back(Product);

    cout << "Please, enter the name:" << endl;
    cin >> point_prod.at(number).name;

    cout << "Please, enter the grade:" << endl;
    cout << "Roasted\n"
            "Ground\n"
            "Instant" << endl;
    cin >> point_prod.at(number).grade;

    cout << "Please, enter the kind:\n"
            "Roasted\n"
            "Ground\n"
            "Instant" << endl;
    cin >> point_prod.at(number).kind;

    cout << "Please, enter the weight of package in grams:" << endl;
    cin >> point_prod.at(number).package_weight;

    cout << "Please, enter the type of packaging: " << endl;
    cin >> point_prod.at(number).type_of_packaging;

    cout << "Please, enter what quantity is available in the store:" << endl;
    cin >> point_prod.at(number).quantity;
    if (point_prod.at(number).quantity < 0) {
        cout << "ERROR, please, try again: " << endl;
        cin >> point_prod.at(number).quantity;
    }
    if (point_prod.at(number).quantity == 0) {
        cout << "Please, enter an expected delivery date (DD.MM.YYYY): " << endl;
    } else {
        cout << "Please, enter the date of receipt of the product in the store (DD.MM.YYYY): " << endl;
    }
    cout << "Day: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.day;
    cout << "Month: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.month;
    cout << "Year: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.year;

    cout << "If you have any notes, please enter them. If not, press - : " << endl;
    cin >> point_prod.at(number).notes;
}

void function_delete_product(vector<struct PRODUCT_DESC> &prod, int element_numb) {
    int length;
    length = prod.size();
    if (element_numb - 1 >= length) {
        cout << "Sorry, please, try again.";
    } else {
        prod.erase(prod.begin() + (element_numb - 1));
    }
    output(prod);
}







