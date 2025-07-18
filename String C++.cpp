#include <iostream>
using namespace std;

int main(){

    string name = "Habiba";
    string name1 = {'E' , 'R' ,'T' , 'U' , 'G' , 'R' , 'A' , 'L'};

    name.push_back('!');    //push_back used to concatenate single character or thing at the end of the string.
    name.append(5 , '*');
    name1.append("AAAAA");  //append used to concatenate another string at the end of the string.
    name.insert(0 , "BBBBBB");   // insert used where you add something to the string like start , end or between the string.
    name1.erase(0 , 1);           //erase used to remove something start , end amd front of the string.
    name.erase(0 ,2);
    name.pop_back();           //pop_back erase something to the end of the string.
    name1.pop_back();

    cout << name << endl;
    cout << name1 << endl;
}