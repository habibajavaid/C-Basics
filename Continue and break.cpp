#include<iostream>
using namespace std;

int main(){
    


    for(int i = 0; i < 20; i++){
        if(i == 12){
            break;             // break statement , stop the displation where we want and don't next to move.
        }
        cout << i <<endl;
    }




    for(int i = 0; i < 20; i++){
        if(i == 5){
            continue;
        }
        cout << i <<endl;              //continue statement , move to the next util we want to stop it.
    }
}