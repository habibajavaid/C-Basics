#include<iostream>
using namespace std;


    

    int sum(int a , int b){
        return a + b;
    }

    int sum(int a , int b , int c){
        return a+b+c;
    }

    double multiply(double a , double b){
           return a * b;
    }

    double multiply( double a , double b , double c){
        return a * b * c;
    }

    int multiply(int numbers[],int n) {
        int result = 1;
        for(int i = 0;  i < n;  i++) {
            result *= numbers[i];
        }
        return result;
    }




    int main(){
        
     int numbers[] = {1,2,3,4,5,6};
        cout << sum( 10 , 11) << endl;
        cout << sum(2,13,22) << endl;
        cout << multiply(2.00000 ,4.0) << endl;
       cout << multiply(2.0, 4.5, 7.5) << endl;
       cout <<"{1 ,2,3,4,5,6}" << multiply(numbers , 5) <<endl;

        return 0;

    
}