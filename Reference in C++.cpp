#include<iostream>
using namespace std;


int main(){
  

    //Referencing  is like a nickname of the  variable in which same variable exist not copy . 
    // we do not change their assigning value after initilization....

    int a = 100;
    int b = 200;

    int& refa = a;
      a = 300;
     // ref = b;

    cout << refa << endl;


    int savings = 10000;
    int savings2 = 50000;
    int* savingsptr = &savings;

    *savingsptr += 2000;

    int& savingsRef = savings;
    savingsRef = savings2;
    savingsRef += 2000;

    cout << savings << endl;
    cout << *savingsptr << endl;
    cout << savingsRef << endl;
}