#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>tickets = {1000 , 2000 , 3000};

    //tickets.push_back(1000);
    //tickets.push_back(2000);
    //tickets.push_back(3000);
    
    
    //tickets[1] = 88888;                 //for number replacement.
    //cout << tickets[0] << endl;           //display of the numbers.
    //cout << tickets[1] << endl;
    //cout << tickets[2] << endl;
    cout << tickets.back() << endl;
    cout << tickets.front() << endl;


    //cout << tickets.at(0) << endl;         // Another way to dispaly of the numbers.
    //cout << tickets.at(1)<< endl;
    //cout << tickets.at(2)<< endl;

    cout << tickets.size() << endl;             //To check the size of the numbers.
    cout << tickets.empty() << endl;            //To show the empty of the array or vector.
}





//The different between Array and vector is that, In array we fixed size and don't change and in vector we don't decalare their size.