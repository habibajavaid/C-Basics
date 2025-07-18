#include <iostream>
#include<vector>
using namespace std;


int main(){


    for(int i = 0; i < 10; i++){
        cout << i <<  " " << endl;
    }
    cout << endl;


    for(int i = 0; i < 10;  i+=2){
        cout << i << " " << endl;
    }
    cout << endl;


    for( int i = 0; i < 10; i+=3){
        cout << i << " " << endl;
    }
    cout  << endl;


    for(int i = 10; i > 0; i--){
        cout << i << " " <<endl;
    }
    cout << endl;


    /*factorial
    n! = product of all numbers from 1 to n.
    3! = 1*2*3 = 6
    */
    
    int factorial = 1;
    int n= 0;

    cout << "Enter any number:\n";
    cin >> n;

    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    cout << n <<"!factorial = " << factorial << endl;


    vector<int>grades = {10,20,30,40,50};
     

    cout << "BEFORE" <<endl;
    for(size_t  i = 0;  i < grades.size(); i++){
        cout << grades[i] <<  " " << endl;
    }
    cout << endl;

    for(size_t i = 0; i<grades.size(); i++){
        grades[i] += 10;
        if(grades[i] > 30){
            grades[1] = 60;
        }
        
    }

    cout <<"AFTER" <<endl;
    for(size_t i = 0; i <grades.size(); i++){
        cout << grades[i] << " " <<endl;
    }
    cout << endl;


}