#include<iostream>
using namespace std;

int main(){


    int age;
    string name;
    char sex;

    cout << "Enter your name , age , sex:";
   
    getline(cin , name); 
    cin >> age;
    cin >> sex;

    cout << "Name:  " << name << "  Age: " << age << "  sex " << sex << endl;

    
    return 0;
}