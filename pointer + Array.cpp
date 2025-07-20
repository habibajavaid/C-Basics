#include<iostream>
using namespace std;


int main(){
 
    
    int arr[3] = { 20 , 30 ,40};

    int* ptr = arr;
    
    //cout << ptr << endl;
    //cout << ptr + 0 << endl;
    //cout << *ptr << endl;
    //cout << *(ptr + 1) << endl;
    //cout <<*(ptr + 2) << endl;

    for(int i =0; i < 3; i++){
       // cout << *(ptr + i) << " ";  // in pointer....
       cout << arr[i] << " ";         // in array.....
    }
   

   int studentGrades[5] = { 100 , 20 , 40 , 50 , 30};
   cout << studentGrades << endl;      //display memory address.....
   cout << studentGrades[0] << endl;

   cout << &(studentGrades[0]) << endl;   //display memory address.....


   int* ptrstudentGrades = studentGrades;
   //cout << *ptrstudentGrades << " ";
   //cout << *(ptrstudentGrades + 1) << " ";
   //cout << *(ptrstudentGrades + 2) << " ";
   //cout << *(ptrstudentGrades + 3) << " ";

   for(int i =0; i < 5; i++){
    cout << (ptrstudentGrades + i) << " ";   // display memeory address....
    cout << *(ptrstudentGrades  + i) << " ";
   }
   

   /*why index start from 0 ?
   there is a formula to start index from 0 
   final address = starting adress + index * size...
   */




 }