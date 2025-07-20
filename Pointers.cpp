#include<iostream>
#include<vector>
using namespace std;


int main(){


    /*
   // variables used to assign the value and pointers used to point out their address their memeory location.
    int savings = 10000;
    int* savings2Ptr = &savings; //referencing   ..... pSavings, ptrSavings, savings_ptr.


    savings += 30000;
    *savings2Ptr += 5000;

    cout << savings << endl; //dereferencing
    cout << *savings2Ptr << endl;

    */
/*
    vector<string> courses = {"Chemistry" , "Physics" , "Calculus"};
    vector<string>* courses2Ptr = &courses;          //  (*)  asterik   (&) ampersand.

    (*courses2Ptr).push_back("Urdu");   // In replacement of * we used arrow operator like (*coursesPtr).push_back() instead of we used coursePtr->push_back().

    for(size_t i = 0; i < courses.size(); i++){
        cout << courses[i] << " ";
    }
    cout << endl;

    for(size_t i = 0; i < (*courses2Ptr).size(); i++){
        cout << (*courses2Ptr)[i] << " ";
    }

    */

    int  a = 20;
    int* ptr = &a;

    cout << ptr  <<endl;
    cout << *ptr << endl;


    int num = 2000;
    int* ptrnum = &num;

    cout << ptrnum << endl;     //referencing  ...... access to the memeory address.
    cout << *ptrnum << endl;     //dereferencing ...... accessn to their value.




    vector<string> languages = {"URDU" , "ENGLISH" , "JAPAN" , "HINDI"};
    vector<string>* languages2ptr = &languages;

    for(size_t i = 0;  i < languages.size(); i++){
        cout << languages[i] << " ";
    }
    cout << endl;


    for(size_t i =0; i < (*languages2ptr).size(); i ++){
        cout << (*languages2ptr)[i] << " ";
     }
     cout << endl;
     
    cout << languages2ptr << endl;
}