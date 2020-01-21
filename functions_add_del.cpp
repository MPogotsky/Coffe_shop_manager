#include "head.h"

using namespace std;

void output(vector<PRODUCT_DESC> &point_prod) {
    if (point_prod.size() == 0) {
        cout << "Your list is empty."<<endl;
    } else {
        for (int i = 0; i < point_prod.size(); ++i) {
            cout << "\n";
            cout << i + 1 << ": ";

            cout << point_prod[i].name<< "\t ";

            cout << point_prod[i].grade << "\t ";

            cout << point_prod[i].kind << "\t ";

            cout << point_prod[i].package_weight << "\t ";

            cout << point_prod[i].type_of_packaging << "\t ";

            cout << point_prod[i].quantity << "\t ";

            cout << point_prod.at(i).expected_delivery_date.day;
            cout << '.' << point_prod.at(i).expected_delivery_date.month;
            cout << '.' << point_prod.at(i).expected_delivery_date.year << "\t ";

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

    cout << "Please, enter the grade:\n"
            "Roasted coffee  (1)\n"
            "Ground coffee   (2)\n"
            "Instant coffee  (3)" << endl;
    cin >> point_prod.at(number).grade;

    cout << "Please, enter the kind:" << endl;
    cin >> point_prod.at(number).kind;

    cout << "Please, enter the weight of package:" << endl;
    cin >> point_prod.at(number).package_weight;

    cout << "Please, enter the type of packaging:\n"<<endl;
    cin >> point_prod.at(number).type_of_packaging;

    cout << "Please, enter what quantity is available in the store:" << endl;
    cin >> point_prod.at(number).quantity;
    if (point_prod.at(number).quantity < 0) {
        cout << "ERROR, please, try again: " << endl;
        cin >> point_prod.at(number).quantity;
    }
    cout << "Please, enter an expected delivery date (DD.MM.YYYY): " << endl;
    cout << "Day: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.day;
    cout << "Month: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.month;
    cout << "Year: " << endl;
    cin >> point_prod.at(number).expected_delivery_date.year;

    cout << "If you have any notes, please enter them. If not, press - : " << endl;
    string str;
    cin>>str;
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







