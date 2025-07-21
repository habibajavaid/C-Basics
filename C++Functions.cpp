#include<iostream>
using namespace std;




/* A function allow us to define a reusable block of code for a specific task.
A function needs to be called to run the block of code.
A function can take in poarameters/ arguments , and return a value..............................................................................................................................................................................................................................

*/

/*

//c++ code run top to bottom if we write th function declaration on the bottom error occur.
//pass by reference value later we can't change.

void speak(const string& name = "unknown"){  // this the function signature or function declaration........ And it necessary to write before main......
   // void had no return type....
}


int main(){


    speak();
    speak("Dog");
    speak("Parrot");


}

//This is the function definition and we write it after main....
void speak(const string& name = "unknown"){
   cout << "speak " <<  name << endl;
   */


   /*

   double sum(double a, double b){
    return a + b;
   }

   int main(){


int numa , numb;

    cout << "Enter number:" <<endl;
    cin>> numa >> numb;
    cout << "The sum is =  " << numa  +  numb << endl;
*/

string multiply( char c , int repetitions){
    string result = " ";
    for(int i = 0; i < repetitions; i++){
        result += c;
    }
    return result;
}

    int main(){
        cout << 'A' * 5;
        cout << multiply('A' , 5) << endl;
        cout << multiply('#' , 10) << endl;
    }

   
