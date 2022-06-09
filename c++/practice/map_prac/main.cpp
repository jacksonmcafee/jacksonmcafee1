#include <string>
#include <tuple>
#include <map>
#include <iostream>

int main() {
    // creates map<int, tuple>
    std::map<int, std::tuple<int, int, int>> _map;
    
    // creates tuple_temp and int_temp
    std::tuple<int, int, int> tuple_temp;
    int int_temp;

    // insert values to map with nested for
    for(int i = 1; i < 101; i++) {
	int_temp = i;
	tuple_temp = std::make_tuple(i, i+10, i*10);
	_map.insert({int_temp, tuple_temp});
	} 

    // iterates through map and prints
    for (auto pr : _map)
 
    // pr points to current pair of _map 
    std::cout  << pr.first << "            [" <<
	    std::get<0>(pr.second) << ", " <<
 	    std::get<1>(pr.second) << ", " << 
	    std::get<2>(pr.second) << "]" << std::endl;

    return 0;
}
