#include<iostream>
using namespace std;

int main(){
    int age;
    string name;
    float price;
    double Rate;

    cout << typeid(age).name()  << endl;
    cout << typeid(price).name() << endl;
    cout << typeid(Rate).name() << endl;
    
    cout << typeid(name).name() << endl;



       // Implicit Type Casting , control the compiler,mean directly conversion between them.
    char intToChar = 70;
    int charToInt = 'A';
    cout<< intToChar  << endl;
    cout << charToInt << endl;

      return 0;
}