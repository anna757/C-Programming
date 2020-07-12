#include <iostream>
using namespace std;
//vehicles
class Vehicle{};
class Car: public Vehicle {};
class Truck: public Vehicle, carLicense{};
class Van : public Truck, Car{};

//licenses
class License{};
class carLicense: public License{};
class truckLicense: public License{};

//rental office and client
class rentalOffice{
    public: 
        void reserveVehicle(string Category, int Period){};
        void cancel(reservationContract){};
        void fetchVehicle(){};           
        void returnVehicle(){};
        void signReservationContract(){};
        void signRentalContract(){};    
};
class Client{
    public:
        void reserveVehicle(string Category, int Period){};
};

//contracts
class reservationContract: public rentalOffice {
    private:
        string category;
        int period;
    public:
    reservationContract(string Category, int Period);
};
class rentalContract{};
class insuranceContract{};

//main function
void main(){

}


