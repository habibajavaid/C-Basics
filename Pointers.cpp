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
}