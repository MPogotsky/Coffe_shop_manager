void output_only_one(vector<PRODUCT_DESC> &point_prod, int number) {

    cout << number + 1 << ":";

    cout << setw(5) << left << point_prod[number].name << " \t ";

    cout << setw(15) << left << point_prod[number].grade << " \t ";

    cout << setw(10) << left << point_prod[number].kind << " \t ";

    cout << setw(5) << left << point_prod[number].package_weight << " \t ";

    cout << setw(10) << left << point_prod[number].type_of_packaging << " \t ";

    cout << setw(5) << left << point_prod[number].quantity << " \t ";

    cout << point_prod.at(number).expected_delivery_date.day;
    cout << '.' << point_prod.at(number).expected_delivery_date.month;
    cout << '.' << point_prod.at(number).expected_delivery_date.year << " \t ";

    cout << point_prod[number].notes;
    cout << "\n";
}

void funct_find_product(vector<PRODUCT_DESC> arr_prod) {
    if (arr_prod.size() == 0) {
        cout << "Sorry, your list is empty." << endl;
    } else {
        string word;
        cout << "Please, chose with the help of what word you want to search product: " << endl;
        cout << "Name\t(1)\nGrade\t(2)\nKind\t(3)" << endl;
        int j;
        char *str;
        cin >> j;
        int result = 0;
        switch (j) {
            case c_name:
                cout << "Please, enter name of coffee to search for: " << endl;
                cin >> word;
                cout
                        << "N|    Name     |        Grade         |    Kind    |   Weight |  Packaging  | Quantity | Delivery date |  Notes   "
                        << endl;
                for (int i = 0; i < arr_prod.size(); i++) {
                    str = arr_prod.at(i).name;
                    if (str == word) {
                        output_only_one(arr_prod, i);
                        result++;
                    }
                }
                if (result == 0) {
                    cout << "No products with that name.";
                }
                break;
            case c_grade:
                cout << "Please, enter grade of coffee to search for: " << endl;
                cout << "Arabika\n"
                        "Robusta\n"
                        "Arabika/Robusta" << endl;
                cin >> word;
                cout
                        << "N|    Name     |        Grade         |    Kind    |   Weight |  Packaging  | Quantity | Delivery date |  Notes   "
                        << endl;
                for (int i = 0; i < arr_prod.size(); i++) {
                    str = arr_prod.at(i).grade;
                    if (str == word) {
                        output_only_one(arr_prod, i);
                        result++;
                    }
                }
                if (result == 0) {
                    cout << "No products of that grade.";
                }
                break;
            case c_kind:
                cout << "Please, enter kind of coffee to search for: " << endl;
                cout << "Roasted\n"
                        "Ground\n"
                        "Instant" << endl;
                cin >> word;
                cout
                        << "N|    Name     |        Grade         |    Kind    |   Weight |  Packaging  | Quantity | Delivery date |  Notes   "
                        << endl;
                for (int i = 0; i < arr_prod.size(); i++) {
                    str = arr_prod.at(i).kind;
                    if (str == word) {
                        output_only_one(arr_prod, i);
                        result++;
                    }
                }
                if (result == 0) {
                    cout << "No products of that kind.";
                }
                break;
            default:
                break;
        }
    }
}



