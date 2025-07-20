#include<iostream>
using namespace std;

int main(){
    
    int a = 100;
    int b = 200;
   
/*
    // pointer to const...

    const int* ptr = &a; //In which we do not change the value of the varible because it's constant and we change the value of the ptr mean variable address....
    
    cout << ptr << endl;

         ptr = &b;
         b = 300;
         cout << *ptr << endl;   //In which we do , change the value of b because it's not const.

*/
    // Const to pointer.... (Constant Pointers).....

    int* const  aptr = &a;

       *aptr = 25;                 //In constant pointer we change the value of the variable but do not change their address like ptr not change.
    cout << *aptr  << endl;
     
    
    return 0;


    /*
    int savings = 10000;
   const int savings2 = 50000; // do not touch.

    int* const savingsPtr = &savings; // const pointer to an int.
    

    const int* savingsPtr2 = &savings2;  // pointer to an int that is const.
    int const* savingsPtr3 = &savings2;   // pointer to a const int.


    const int* const savingsPtr4 = &savings2;
   // savingsPtr4 = &savings;  don't allow.
    cout << savings << endl;
    cout << savings2 << endl;
    */
}
