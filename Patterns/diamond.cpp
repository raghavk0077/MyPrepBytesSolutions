#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;
    rows = (rows/2) + 1;

    for(int i = 1; i <= rows; i++){
        for(int s = 1; s <= rows - i; s++){
            cout<<" ";
        }

        for(int j = 1; j <= i; j++){
            cout<<"*";
        }

        for(int j = 1; j <= i - 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i <= rows - 1; i++){
        for(int s = 1; s <= i; s++){
            cout<<" ";
        }

        for(int j = 1; j <= rows - i; j++){
            cout<<"*";
        }

        for(int j = 1; j <= rows - i - 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}