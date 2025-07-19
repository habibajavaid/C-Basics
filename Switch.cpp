#include<iostream>
using namespace std;

int main(){




    /*
    int choice;

    cout << "Enter any choice(0,1,2):\n";
    cin >> choice;

    switch(choice){
      
      case 0:
      cout << "Apple:\n";
      break;
      case 1:
      cout << "Banana:\n";
      break;
      case 2:
      cout << "Orange:\n";
      break;
      default :
      cout << "Invalid:\n";

    }
      */

      int choice;

      do{

        cout << "\n==========Menue=======" << endl;
        cout << "1 . Say Hello" << endl;
        cout << "2 . Add two numbers" << endl;
        cout << "3 . Find a square of a number" << endl;
        cout << "4 . Exit" << endl;
        cout << "Enter your choice(1 - 4):";
        cin >> choice;

        switch(choice){
            case 1: {
            cout << "Hello, User!" << endl;
            break;
            }
            case 2: {
            int num1 , num2;

            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Sum = " << (num1 + num2) << endl;
            break;
            }
            case 3:{
            int num;
            cout<< "Enter a number:";
            cin >> num;
            cout << "Square = " << (num * num) <<endl;
            break;
            }
            case 4:{
            cout << "Exit program. Goodbye! " << endl;
            break;
            }
            default:{
            cout << "Invalid choice." << endl;
        }
    }
      }while(choice != 4);

      return 0;

      }




   


