#include<iostream>
using namespace std;


int main(){



    //for_each loop used in array and vectors without iteration...
/*
    int nums[] = {12 , 34, 45 , 23,};

    for(int num : nums){
        cout << num << " " <<endl;
    }
     

    string languages[] = { "English" , "Frenc" , "Japan"};

    for(string language : languages){
        cout << language << endl;

    }

    float numbers[] = {23.0 , 34.0, 12.00 , 9.0};

    for(float number : numbers){
        cout << number << endl;
    }

*/

    //do-while  run just one time  and then check condition, it guarantees at least one iteration.


    int i = 0;

    do{
        cout << i <<endl;
        i++;
    }while(i < 5);

    return 0;
    

    int number , sum;

    do{
        cout << "Enter numbers:\n";
        cin >> number;
        sum +=number;
    }while(number != 0);

    cout << "The Sum is : " << sum <<endl;



}