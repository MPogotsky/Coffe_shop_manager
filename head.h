
#ifndef TEMAT_12_PROJ_HEAD_H
#define TEMAT_12_PROJ_HEAD_H

#include <iostream>
#include <fstream>
#include <vector>

#include <sstream>
#include <iomanip>
#include <cstring>

struct DELIVERY {
    int day;
    int month;
    int year;
};

struct PRODUCT_DESC {
    char name[256];
    char grade[256];
    char kind[256];
    int package_weight;
    char type_of_packaging[50];
    int quantity;
    DELIVERY expected_delivery_date;
    char notes[1000];
};

enum operations {
    add_product = 1,                          //1
    delete_product,                           //2
    edit_info_about_product,                  //3
    find_prod, //name,variety,type            //4
    save_database_as_file,                    //5
    load_database_from_file,                  //6
    show,                                     //7
    stop = 8                                  //8
};

enum info_about_product {
    c_name = 1,
    c_grade,
    c_kind,
    c_weight,
    c_packaging,
    c_quantity,
    c_delivery,
    c_notes,
};

#include "functions_add_del.cpp"
#include "function_to_edit.cpp"
#include "function_save_load_data.cpp"
#include "function_find_prod.cpp"

void is_file_empty(vector<PRODUCT_DESC> &point_prod);

void function_add_product(vector<struct PRODUCT_DESC> &point_prod);

void function_delete_product(vector<struct PRODUCT_DESC> &prod, int element_numb);

void output(vector<PRODUCT_DESC> &point_prod);

void function_editing_delivery(vector<PRODUCT_DESC> &point_prod, int number_of_edit_prod);

void function_to_edit_info(vector<PRODUCT_DESC> &arr_prod);

void save_data(vector<PRODUCT_DESC> &arr_prod);

void load_data(vector<PRODUCT_DESC> &arr_prod);

void funct_find_product(vector<PRODUCT_DESC> arr_prod);

void output_only_one(vector<PRODUCT_DESC> &point_prod, int number);

#endif //TEMAT_12_PROJ_HEAD_H


