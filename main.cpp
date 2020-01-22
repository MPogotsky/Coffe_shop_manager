#include "head.h"

using namespace std;

int main() {

    vector<PRODUCT_DESC> arr_of_prod(0);
    vector<PRODUCT_DESC> *point_arr_of_prod = &arr_of_prod;

    int operation;

    do {
        cout << "\n\nPlease, chose an operation:";
        cout << "\nAdd product                       (1)"
                "\nDelete product                    (2)"
                "\nEdit info about product           (3)"
                "\nFind product                      (4)"
                "\nSave data as file                 (5)"
                "\nLoad data from file               (6)"
                "\nShow                              (7)"
                "\nExit                              (8)" << endl;

        cout << "\nEnter number of operation, and don`t forget to save your data: " << endl;
        cin >> operation;

        switch (operation) {
            case add_product:
                function_add_product(*point_arr_of_prod);
                break;
            case delete_product:
                cout << "Please, enter the number of the product you want to delete: " << endl;
                int number_of_del_el;
                cin >> number_of_del_el;
                function_delete_product(*point_arr_of_prod, number_of_del_el);
                break;
            case edit_info_about_product:
                function_to_edit_info(*point_arr_of_prod);
                break;
            case save_database_as_file:
                save_data(*point_arr_of_prod);
                break;
            case show:
                output(*point_arr_of_prod);
                break;
            case load_database_from_file:
                load_data(*point_arr_of_prod);
                break;
            case find_prod:
                funct_find_product(*point_arr_of_prod);
                break;
            default:
                save_data(*point_arr_of_prod);
                break;
        }
    } while (operation != stop);
    return 0;
}
