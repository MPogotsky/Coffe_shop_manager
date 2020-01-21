void output_only_one(vector<PRODUCT_DESC> &point_prod, int number) {
    cout << "\n";
    cout << number + 1 << ": ";

    cout << point_prod[number].name << "\t ";

    cout << point_prod[number].grade << "\t ";

    cout << point_prod[number].kind << "\t ";

    cout << point_prod[number].package_weight << "\t ";

    cout << point_prod[number].type_of_packaging << "\t ";

    cout << point_prod[number].quantity << "\t ";

    cout << point_prod.at(number).expected_delivery_date.day;
    cout << '.' << point_prod.at(number).expected_delivery_date.month;
    cout << '.' << point_prod.at(number).expected_delivery_date.year << "\t ";

    cout << point_prod[number].notes;
    cout<<"\n";
}

void funct_find_product(vector<PRODUCT_DESC> arr_prod) {
    if (arr_prod.size() == 0) {
        cout << "Sorry, your list is empty." << endl;
    } else {
        string word;
        cout << "Please, enter name, grade or kind of coffee to search for: " << endl;
        cin >> word;
        char *str;
        for (int i = 0; i < arr_prod.size(); i++) {
            for (int j = 1; j <= 3; j++) {
                switch (j) {
                    case c_name:
                        str = arr_prod.at(i).name;
                        if (str == word) {
                            cout << "You were searching for the product: " << endl;
                            output_only_one(arr_prod, i);
                        }
                        break;
                    case c_grade:
                        str = arr_prod.at(i).grade;
                        if (str == word) {
                            cout << "You were searching for the product: " << endl;
                            output_only_one(arr_prod, i);
                        }
                        break;
                    case c_kind:
                        str = arr_prod.at(i).kind;
                        if (str == word) {
                            cout << "You were searching for the product: " << endl;
                            output_only_one(arr_prod, i);
                        }
                        break;
                    default:
                        break;
                }
            }
        }
    }
}

