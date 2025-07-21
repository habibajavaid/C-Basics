#include <iostream>
using namespace std;

int main(){

    /* 
    int n ;
    cout << "Enter size of array: ";
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cout << "Enter element" << i << ":";
        cin >> arr[i];
    }

    cout << "You entered: ";
    for(int i = 0;  i < n; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
*/


/*
    int*  arr = new int[4]{10 , 20, 30 , 40};

    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;


*/

  
int capacity;
cout << "How many tickets do you want to buy:";
cin >> capacity;

int* lotteryTickets = new int[capacity];

for(int i = 0;   i < capacity; i++){
    cout <<"Enter a lottery number:";
    cin >> (lotteryTickets [i]);
}

for(int i = 0; i < capacity; i++){
    cout << lotteryTickets[i] << " ";
}
cout << endl;


}