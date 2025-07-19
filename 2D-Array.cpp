#include<iostream>
#include<vector>
using namespace std;


int main(){

/*
    string names[2][4] = {    {"Habiba " , "Hamza " ,"Hamiza " , " Hamna "},
                              { " Fiza " , " Foziya " , " Faizan " ," Faiza "},
};
    
   // for(int i = 0; i <  2; i++){
     //   cout << names[i][0] << names[i][1] << names[i][2] << names[i][3] << endl;
   // }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4 ; j++){
            cout << names[i][j] << " ";
        }
        cout << endl;
    }

*/
    vector<vector<string>> studentNames = {      { "Habiba" , "Fiza" ,"Ayesha" , "Mahnoor"},
                                                  {"Faiza" , "Haseeb" , "Habib"},
};


         studentNames[1].push_back("Hamna");
          for (size_t i = 0; i < studentNames.size(); i++) {
            cout << i + 1 << endl;
        for (size_t j = 0; j < studentNames[i].size(); j++) {
            cout << studentNames[i][j] << " " ;
            }
            cout << endl;
        }
    }