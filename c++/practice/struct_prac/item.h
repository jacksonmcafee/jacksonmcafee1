#include <map>
#include <string>

class item_manager {
    public:
	bool add_item(int id);
	bool del_item(int id);
	bool add_stock(int id);
	bool del_stock(int id);
	void print_item_details(int id);
	int search_for_item(std::string item_name);
	// would loading every item into a map at runtime be faster than
	// searching every time?
	std::map<int, std::string> load_inventory(std::string config_filename);
};
