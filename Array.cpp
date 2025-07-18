#include<iostream>
using namespace std;

int main(){


   /*
    int num1 = 12;
    int num2 = 90;
    int num3 = 100;

    int num[3];
    num[0] = 12;
    num[1] = 90;
    num[2] = 100;

    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;

*/

    int num[] = { 12 , 90 , 100};

    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;              // Display of the numbers.

    cout << sizeof(num) << endl;
    cout << sizeof(num[0]) << endl;
    cout << sizeof(num[1]) << endl;
    cout << sizeof(num[2]) << endl;     // Display of the size of the error numbers.

    cout << num + 1 << endl;
    cout << num[0] + 2 << endl;
    cout << num[1] + 2 << endl;
    cout << num[2] + 2 << endl;        // Add some numbers to the each array numbers.



}