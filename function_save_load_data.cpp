void save_data(vector<PRODUCT_DESC> &arr_prod) {

// Jeżeli chcemy sami określić ściezką do pliku
//                | | | | | | | |
//    string file_path;
//    cout << "Please, enter path, where you want to save your data, and add name .txt: " << endl;
//    cin >> file_path;
//    ofstream DataBase(file_path);

    ofstream DataBase("D:\\C++PROJECTS\\TEMAT_12_PROJ\\DataBase.txt");
    for (int i = 0; i < arr_prod.size(); i++) {
        DataBase << arr_prod[i].name << "\t ";

        DataBase << arr_prod[i].grade << "\t ";

        DataBase << arr_prod[i].kind << "\t ";

        DataBase << arr_prod[i].package_weight << "\t ";

        DataBase << arr_prod[i].type_of_packaging << "\t ";

        DataBase << arr_prod[i].quantity << "\t ";

        DataBase << arr_prod.at(i).expected_delivery_date.day << "\t ";
        DataBase << arr_prod.at(i).expected_delivery_date.month << "\t ";
        DataBase << arr_prod.at(i).expected_delivery_date.year << "\t ";

        DataBase << arr_prod[i].notes;
        DataBase << "\n";
    }
    DataBase.close();
}

void load_data(vector<PRODUCT_DESC> &arr_prod) {
    PRODUCT_DESC Product;

// Jeżeli chcemy sami określić ściezką do pliku
//                | | | | | | | |
//    string file_path;
//    cout << "Please, enter path, where you want to load data, and add name .txt: " << endl;
//    cin >> file_path;
//    ifstream DataBase(file_path);

    ifstream DataBase("D:\\C++PROJECTS\\TEMAT_12_PROJ\\DataBase.txt");

    if (DataBase.is_open()) {
        while (!DataBase.eof()) {
            arr_prod.push_back(Product);
            int i = arr_prod.size() - 1;
            DataBase >> arr_prod.at(i).name;
            DataBase >> arr_prod.at(i).grade;
            DataBase >> arr_prod.at(i).kind;
            DataBase >> arr_prod.at(i).package_weight;
            DataBase >> arr_prod.at(i).type_of_packaging;
            DataBase >> arr_prod.at(i).quantity;
            DataBase >> arr_prod.at(i).expected_delivery_date.day;
            DataBase >> arr_prod.at(i).expected_delivery_date.month;
            DataBase >> arr_prod.at(i).expected_delivery_date.year;
            DataBase >> arr_prod.at(i).notes;
        }
        DataBase.close();
        arr_prod.pop_back();
        output(arr_prod);
    } else {
        cout << "ERROR" << endl;
    }
}

void is_file_empty(vector<PRODUCT_DESC> &point_prod) {

    ifstream DataBase("D:\\C++PROJECTS\\TEMAT_12_PROJ\\DataBase.txt");

    int operation;

    long file_size;
    DataBase.seekg(0, ios::end);
    file_size = DataBase.tellg();
    if (file_size != 0) {
        cout << "You already have data, do you want to load it?" << endl;
        cout << "        Yes(1)                  No(2) " << endl;
        cin >> operation;
        if (operation == 1) {
            load_data(point_prod);
        } else {
            DataBase.close();
        }
    } else {
        DataBase.close();
    }

}