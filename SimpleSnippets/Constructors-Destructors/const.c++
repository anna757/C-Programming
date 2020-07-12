/* what is a constructor?
member function of a class - a function inside a class - which initializes objects of a class, a constructor is automatically called
when object is created, it is a special member function.
How is it different from a normal member function?
1. it has the same name as the class itself - case sensetive
2. does not have a return type 
3. automatically called when an object is created 
4. if we do not specify a constructor C++ compiler generates a default constructor for us (empty body no parameters)

3 different types of constructors:
1. default constructor: does not take any arguments, does not have any parameters
2. Parameterized constructor: it is possible to pass arguments to constructors. you can add parameters to this constructor and use them
to initialize the object
3. copy constructor: member function which initializes an object using another of the same class. 

Destructors: member function which destroys or deletes an object, it is called when a function ends, program ends, block containing local
variables ends, delete operator is called. have the same name as class ~destructor - they do not take arguments or return anything.
only one destructor per class. when use? if we have dynamically allocated memory or pointer, we write a destructor to release memory,
this is done to avoid memory leak.
*/
#include <iostream>
#include <cstring>
using namespace std;
//from previous program
//user defined data type
class Cars {
    private:
    //data members
    string companyName;
    string modelName;
    string fuelType;
    float mileage;
    double price;

    public:
    //we create a constructor: has to be in public
    //default constructor
     Cars() {
         companyName = "Toyota";
         cout << "default constructor called" << endl;
     }
    //parameterized constructor
     Cars(string mName, string fType, float m, double p){
        cout << "parameterized constructor called" << endl;
        modelName = mName; 
        fuelType = fType; 
        mileage = m; 
        price = p;
     };
     //copy constructor
     Cars(Cars &obj){
        cout << "copy constructor called" << endl;
        companyName = obj.companyName; 
        modelName = obj.modelName; 
        fuelType = obj.fuelType; 
        mileage = obj.mileage; 
        price = obj.price;
     };
    //member functions
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
    //destructor
    ~Cars() {
        cout << "Destructor Called" << endl;
    };
};

int main() {
    //car2 is how we call parameterized constructor
    Cars car1, car2("fsadas", "dsada", 32.1, 32344); //create an object of type Cars - object are nothing by variables of type class
    car1.setData("Toyota", "Penis", "in penis", 34.2, 1534);
    car1.displayData();
    car2.displayData();
    Cars car3=car1; //copy data from car1 to car3 
    car3.displayData();
    return 0;
};
