#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Three function .....

/*
//pass by value....used for primitive data types(int , double, float , char)..........................................

 int multiply(int a, int b){
    return a * b;
 }

 int main() {

    int a = 23;
    int b = 12;
    cout << " a * b = " << multiply(a , b) << endl;
 }
    */




/*

    //pass by reference......... affect the original value .................
   void Swap(int& a , int& b){
    int temp = a;
    a = b;
    b = temp;
   }

   int main() {
    int a = 100;
    int b = 900;
    cout << " a:" << a << " b:" << b << endl;
    Swap(a , b);
    cout <<" a:" << a << " b:" << b << endl;
   }
    */



   //pass by Const Reference.... same as pass by reference but only read value not modifying....

   void printVector(const vector<string>& cities){
    for(size_t i = 0;  i < cities.size(); i++){
        cout << cities[i] << " ";
    }
    cout << endl;
   }

   int main(){

    vector<string> cities = { "Pakistan" , "Paris" , "London"};
    printVector(cities);
   }