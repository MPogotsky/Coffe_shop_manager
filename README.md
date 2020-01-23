# TEMAT_12_PROJ
Software for managing coffee shop.

Each product (coffee/tea) is characterized by the following data entry:
* name - a character table with a maximum length of 256 characters
* genre-character table with a maximum length of 256 characters
* type - one of the types: roasted coffee, ground coffee, instant coffee, tea
red, green tea, white tea, black tea, fruit tea,
other
* package weight
* package type-symbol table: 50 characters each
* the number of pieces in stock is a positive number
* expected delivery date - date in the accepted format, empty if not
applicable
* note-character table, maximum length: 1000 characters

The program should allow you to perform the following actions:
* adding a product
* removing the product
* changing product data
* adding / changing the delivery date
* search / filter a product by name / genre/type
* saving the collected database to disk as a file
* loading a saved database from the specified file
