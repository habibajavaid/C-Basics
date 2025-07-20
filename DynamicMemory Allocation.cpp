#include<iostream>
using namespace std;

int main(){

    /*
     Static memeory--- static memory is a local variable memory (allocated compile time)....
     Heap memory---- heap memory is free store (allocated run time) ,need to clean up....
     heap memory is larger than statk and is used when you don't know how much memory you need ahead of the time...
    */

    int savings;  //.......stack memory......
    savings = 100000;  
    cout << &savings << " " << savings << endl;


    int* savingsptr = new int(50000);  //.......new key word is used for heap memory.... and used pointers to allocate memory adress.....
    //*savingsptr = 50000;
    cout << &savingsptr << endl;
    cout << savingsptr << " " << *savingsptr << endl;

       delete savingsptr;
    // dangling pointer                 // dangling pointer is like a null pointer  .... in which do not initilize any variables....
      savingsptr = nullptr; 

    int* savingsptr = new int(7400);           // the display of this memory adress...... the 50000 stuck there and no longer uses , do not clean up so memory leaks and this is bad  when we have a lots of values in heap and not clean up....

    cout << &savingsptr << endl;
    cout << savingsptr << " " << *savingsptr << endl;


    /*  Important note...
     In java and python there is no heap memory syntax its also called garbage collector
     but in c++ there is no garbage collector and called it as a heap memeory.
    
    */
}