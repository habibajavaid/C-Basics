#include<iostream>
using namespace std;

int main(){
     
    int savings = 10000;
   const int savings2 = 50000; // do not touch.

    int* const savingsPtr = &savings; // const pointer to an int.
    

    const int* savingsPtr2 = &savings2;  // pointer to an int that is const.
    int const* savingsPtr3 = &savings2;   // pointer to a const int.


    const int* const savingsPtr4 = &savings2;
   // savingsPtr4 = &savings;  don't allow.
    cout << savings << endl;
    cout << savings2 << endl;
}