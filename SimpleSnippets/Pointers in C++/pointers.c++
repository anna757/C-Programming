//pointer is a variable whose value is the address of another variable
//uses: allow us to refer to the same space in memory from multiple locations + Dynamic memory allocation
#include <iostream>
using namespace std;
int main () {
    int var = 5;
    //datatype pointername*
    int *ip; //pointer to an integer
    ip = &var;
    cout << "variable value: " << var << endl;
    cout << "variable value: " << ip << endl;
    cout << "variable value: " << *ip << endl;
};

// dynamic memory allocation allows you to set array size dynamically using run time than at compile time
//this helps when you do not know how many members of the array you got.