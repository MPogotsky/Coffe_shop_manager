#include "head.h"

using namespace std;

void function_editing_delivery(vector<PRODUCT_DESC> &point_prod, int number_of_edit_prod) {

    cout << "Please, enter what exactly you want to edit: ";
    cout << "\nDate   (1)"
            "\nMonth  (2)"
            "\nYear   (3)" << endl;
    int number_of_edit_character;
    cin >> number_of_edit_character;

//Zmieniamy dzień
    if (number_of_edit_character == 1) {
        cout << "Please, enter another date: " << endl;
        cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.day;
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.day <= 0) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.day;
        }
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.day > 31) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.day;
        }
    }

//Zmieniamy miesiąc
    if (number_of_edit_character == 2) {
        cout << "Please, enter another month: " << endl;
        cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.month;
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.month <= 0) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.month;
        }
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.month > 12) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.month;
        }
    }

//Zmieniamy rok
    if (number_of_edit_character == 3) {
        cout << "Please, enter another year: " << endl;
        cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.year;
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.year <= 1990) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.year;
        }
        if (point_prod.at(number_of_edit_prod - 1).expected_delivery_date.year > 3000) {
            cout << "ERROR, please, try again: " << endl;
            cin >> point_prod.at(number_of_edit_prod - 1).expected_delivery_date.year;
        }
    }
}

void function_to_edit_info(vector<PRODUCT_DESC> &arr_prod) {
    int number_of_edit_prod;
    int number_of_character;

    cout << "\nYour list: " << endl;
    output(arr_prod);

    do {
        cout << "\nPlease enter the product number whose information you want to edit, or "
                "enter 0 to exit to main menu: " << endl;

        cin >> number_of_edit_prod;
        if (number_of_edit_prod == 0) {
            break;
        }

        while (number_of_edit_prod > arr_prod.size()) {
            cout << "There is no such element int the list, please, try again." << endl;
            cin >> number_of_edit_prod;
        }

        cout << "Please, enter what information you want to edit: " << endl;
        cout << "\nName                    (1)"
                "\nGrade                   (2)"
                "\nKind                    (3)"
                "\nPackage weight          (4)"
                "\nType of packaging       (5)"
                "\nQuantity                (6)"
                "\nExpected delivery date  (7)"
                "\nNotes                   (8)" << endl;

        cin >> number_of_character;

        switch (number_of_character) {
            case c_name:
                cout << "Please, enter new name: " << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).name;
                break;
            case c_grade:
                cout << "Please, enter new grade:" << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).grade;
                break;
            case c_kind:
                cout << "Please, enter new kind:\n"
                        "Roasted\n"
                        "Ground\n"
                        "Instant" << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).kind;
                break;
            case c_weight:
                cout << "Please, enter new weight of package:" << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).package_weight;
                break;
            case c_packaging:
                cout << "Please, enter new t ype of packaging:" << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).type_of_packaging;
                break;
            case c_quantity:
                cout << "Please, enter new quantity that is available in the store:" << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).quantity;
                if (arr_prod.at(number_of_edit_prod-1).quantity < 0) {
                    cout << "ERROR, please, try again: " << endl;
                    cin >> arr_prod.at(number_of_edit_prod-1).quantity;
                }
                break;
            case c_delivery:
                function_editing_delivery(arr_prod, number_of_edit_prod);
                break;
            case c_notes:
                cout << "Enter another notes: " << endl;
                cin >> arr_prod.at(number_of_edit_prod - 1).notes;
                break;
            default:
                break;
        }
    } while (number_of_edit_prod != 0);
}


