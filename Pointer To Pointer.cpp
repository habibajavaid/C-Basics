#include<iostream>
using namespace std;


int main(){


    /*
    int value = 42;
    int* ptr = &value;
    int** pptr = &ptr;


    cout << "Value:" << value << endl;
    cout << "Value using *ptr:" << *ptr << endl;
    cout << "Value using **pptr:" << **pptr << endl;


    cout << "Adress of value (&value): " << &value << endl;
    cout << " Adress stored in ptr:" << ptr << endl;
    cout << " Adress of &ptr:" << &ptr << endl;
    cout << "Adress stored in pptr: " << pptr << endl;

    return 0;
    */



         //Pointer to Pointer mean double pointer the address is double.

       int num = 67;
       int *ptr = &num;
       int **pptr = &ptr;

       cout << "Value of num:" << num << endl;
       cout << "Value of *ptr:" << *ptr << endl;
       cout << "Value of **pptr:" << **pptr << endl;


       cout << "Address of ptr" << ptr << endl;
       cout << "Address of pptr" << pptr << endl;
       cout << "Address of &num" << &num << endl;
}

