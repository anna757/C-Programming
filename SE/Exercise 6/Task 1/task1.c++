#include <iostream>
using namespace std;


class house {
    private:
};
class pet  {
    private:
        string name;
    public:
        void setName(string a) {
            a = name;
        };

        void makeNoise() {
            cout << "Every pet makes different noise \n";
        };
};

class cat: public pet {
    public:
        void makeNoise() {
            cout << "cat does meow \n";
        };
    };
class dog: public pet { 
    public:
            void makeNoise() {
            cout << "dog does woof \n";
        };
};
int main() {
    house Myhouse;
    pet myPet;
    cat myCat; 
    dog myDog;
    myPet.makeNoise();
    myCat.makeNoise();
    myDog.makeNoise();
}