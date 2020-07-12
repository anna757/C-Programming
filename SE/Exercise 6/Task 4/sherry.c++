#include<iostream>
#include<string>
using namespace std;

class Office{
private:
    string type;
    int time;
public:
    Office(string atype,int atime){
        type = atype;
        time = atime; 
    }
    void Reservation(string itype,int itime){
        
        type = itype;   
        time = itime;

    }
    void insurance(){
        cout<<"You have signed up for insurance!\n";
    }
    void fetch(bool){
        cout<<"Sign this contract and do you want insurance? Press 1 for insurance, 0 for none\n";
        int confirm; cin>>confirm;

        if(confirm){
            insurance();
        }
    }
    ~Office(){
        cout<<"Your contract is cancelled!";
        }
    

};

class Vehicle : public Office {

};

class Car : public Vehicle {

};

class Truck : public Vehicle {

};

class Van : public Truck, Car{

};

int main()
{
    cout<<"Which vehicle do you want to reserve and for how long?\n";
    Office *Honda = new Office("Car",30);
    Honda->fetch(1);
    cout<<"Do you want to cancel your contract? y/n \n"; char s; cin>>s;
    if(s=='y'){
        delete Honda;
    }
}