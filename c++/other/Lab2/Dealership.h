#include <string>
#include <vector>

class Dealership {
    private:
        std::string _name;
        unsigned int _numberOfShowrooms, _capacity;
        std::vector<Showroom> _showrooms;

    public:
        Dealership(std::string name = "Generic Dealership", unsigned int capacity = 0) {
            _name = name;
            _capacity = capacity;
            _numberOfShowrooms = 0;
        }

        void AddShowroom(Showroom s) {
            // check if dealership is full
            if (_numberOfShowrooms == _capacity) {
                // print warning
                std::printf("Dealership is full, can't add another showroom!\n");
            } else {
                // add showroom to vector and increment counter
                _showrooms.push_back(s);
                _numberOfShowrooms++;
            }
        }

        float GetAveragePrice() {
            float aggregatePrice = 0, carCount = 0;
            for (Showroom s : _showrooms) {
                aggregatePrice += s.GetInventoryValue();
                carCount += (static_cast<float>(s.GetVehicleList().size()));
            }
            return (aggregatePrice / carCount);
        }

        void ShowInventory() {
            if (_numberOfShowrooms == 0) {
                std::printf("%s is empty!\n", _name.c_str());
                std::printf("Average car price: $0.00");
            } else {
                for (Showroom s : _showrooms) {
                    s.ShowInventory();
                    std::printf("\n");
                }
                std::printf("Average car price: $%.2f", GetAveragePrice());
            }

        }
};