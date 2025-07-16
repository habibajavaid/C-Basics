#include<iostream>
using namespace std;


int main(){
    


    char  letterGrade;
    int grade ;
    cout << " Enter grade\n";
    cin>>grade;
    

    letterGrade = (grade >= 65) ?  'T' : 'F';

    cout << "Final grade: " << letterGrade << endl;
}