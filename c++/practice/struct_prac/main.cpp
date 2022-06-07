#include <iostream>
#include "item.h"

using namespace std;

int main() {

item notebook;
notebook.item_id = 1;
notebook.item_name = "notebook";
notebook.item_price = 4.99;
notebook.item_kg = 0.28;

cout << "The notebook is $" << notebook.item_price << "." << endl;

return 0;
}
