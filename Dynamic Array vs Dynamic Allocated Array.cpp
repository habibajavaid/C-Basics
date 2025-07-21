#include<iostream>
#include<vector>
using namespace std;
int main(){

/*
    vector<int> marks = {20 , 30, 40};

    //marks.push_back(20);
    //marks.push_back(30);
    //marks.push_back(40);


    cout << "Dynamic Array:" ;
    for(int i = 0; i < marks.size(); i++){
        cout << marks[i] << " ";
    }
        return 0;

   */


    int* marks = new int[3];

    marks[0] = 20;
    marks[1] = 30;
    marks[2] = 40;
    
    cout << "Dynamically allocated array:" ;
    for(int i = 0;  i < 3; i++){
        cout << marks[i] << " ";
    }

    delete[] marks;
    return 0;


}