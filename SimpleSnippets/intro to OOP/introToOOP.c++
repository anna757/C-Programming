// OOP - real world concepts in code
//pointer just stores an address to the memory int* recieve pointer dereference operator changes value of address
// *age = 22; changes value to 2.
//exceptions are errors that occur when things dont happen as expected
#include <iostream>
#include <string>
using namespace std;


//user defined data type
class Cars {
    private:
    string companyName;
    string modelName;
    string fuelType;
    float mileage;
    double price;

    public:
    void setData(string cName, string mName, string fType, float m, double p) {
        companyName = cName; 
        modelName = mName; 
        fuelType = fType; 
        mileage = m; 
        price = p;
    };

    void displayData() {
        cout << "car properties: " << endl;
        cout << "company name: " << companyName << endl;
        cout << "model name: " << modelName << endl;
        cout << "fuel type: " << fuelType << endl;
        cout << "mileage: " << mileage << endl;
        cout << "price: " << price << endl;


    };
};

int main() {
    Cars car1; //create an object of type Cars - object are nothing by variables of type class
    car1.setData("Toyota", "Penis", "in penis", 34.2, 1534);
    car1.displayData();
};
