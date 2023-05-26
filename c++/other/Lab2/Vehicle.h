#include <string>
#include <iostream>

class Vehicle {
    private: 
        std::string _make, _model;
        unsigned int _year, _mileage;
        float _price;

    public:
        Vehicle() {
            _make = "COP3503";
            _model = "Rust Bucket";
            _year = 1900;
            _mileage = 0;
            _price = 0;
        }

        Vehicle(std::string make, std::string model, unsigned int year, float price, unsigned int mileage) {
            _make = make;
            _model = model;
            _year = year;
            _mileage = mileage;
            _price = price;
        }

        void Display() {
              std::printf("%d %s %s $%.2f %d\n", _year, _make.c_str(), _model.c_str(), _price, _mileage);
        }

        std::string GetYearMakeModel() {
            return (std::to_string(_year) + " " + _make + " " + _model + "\n");
        }

        float GetPrice() {
            return _price;
        }
};