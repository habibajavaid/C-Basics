#include<iostream>
using namespace std;


int main(){

int a = 200, b = 300, c = 400;

cout << "a:" << a << endl;
cout << "b:" << b << endl;
cout << "c:" << c << endl;

int *aptr = &a,   *bptr = &b , *cptr = &c;

cout << "aptr:" << aptr << " *aptr:" <<  *aptr << endl;
cout << "bptr:" << bptr << " *bptr:" <<  *bptr << endl;
cout << "cptr:" << cptr << " *cptr:" <<  *cptr << endl;


int *dptr , *eptr;
dptr = eptr = nullptr;




int* ptr = nullptr;  // or int* ptr = NULL;

    if (ptr == nullptr) {
        cout << "Pointer is null." << endl;
    } else {
        cout << "Pointer is not null." << endl;
    }
}

