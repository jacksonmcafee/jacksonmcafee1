#include <string>
#include <vector>

class Showroom {
    private:
        std::string _name;
        std::vector<Vehicle> _vehicles;
        unsigned int _numberOfVehicles, _capacity;

    public:
        Showroom(std::string name = "Unnamed Showroom", unsigned int capacity = 0)  {
            _name = name;
            _capacity = capacity;
            _numberOfVehicles = 0;
        }

        std::vector<Vehicle> GetVehicleList() {
            return _vehicles;
        }

        void AddVehicle(Vehicle v) {
            // check if showroom is full
            if (_numberOfVehicles == _capacity) {
                // print warning
                std::printf("Showroom is full! Cannot add %s", v.GetYearMakeModel().c_str());
            } else {
                // add vehicle to vector and increment counter
                _vehicles.push_back(v);
                _numberOfVehicles++;
            }
        }

        void ShowInventory() {
            if (_numberOfVehicles == 0) {
                std::printf("%s is empty!\n", _name.c_str());
            } else {
                printf("Vehicles in %s\n", _name.c_str());
                
                for (Vehicle v : _vehicles) {
                    v.Display();
                }
            }
        }

        float GetInventoryValue() {
            float aggregatePrice = 0;
            for (Vehicle v : _vehicles) {
                aggregatePrice += v.GetPrice();
            }
            return aggregatePrice;
        }
};