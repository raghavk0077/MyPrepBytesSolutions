#include "iostream"
using namespace std;


int main() {

    int rows;
    cin>>rows;

    for(int i = 1; i <= rows; i++){
        for(int s1 = 1; s1 <= i - 1; s1++){
            cout<<" ";
        }



cout<<"*";

        

        for(int s2 = 1; s2 < (rows -i)*2; s2++){
            cout<<" ";
        }

        
        if(i!=rows){
            cout<<"*";
        }


        cout<<endl;
    }


    return 0;
 }