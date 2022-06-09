/*
 * Practice to see if I could build a sort of database
 * that can be used through the terminal? Mostly practicing using
 * maps and file i/o, modifying data types I don't often use and 
 * maintaining time efficiency at a larger scale than school
 * projects would need me to use 
*/

#include <map>
#include <string>

class item_manager {
    public:
	bool add_item(int id);
	bool del_item(int id);
	bool add_stock(int id);
	bool del_stock(int id);
	
	// uses id as map key, prints id, name, price, stock
        void print_item_details(int id);

	// searches for a certain item by name, returns id
	int search_for_item(std::string item_name);
	
	// creates two maps, id_tup_map and id_name_map
	// first maps id --> (name, price, stock) <string, float, int>
	// second maps name --> id
	std::map<int, std::string> load_inventory(std::string config_filename);
};
