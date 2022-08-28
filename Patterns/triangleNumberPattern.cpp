#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = 1; i <= rows; i++){
        for(int s = 1; s <= rows - i; s++){
            cout<<"  ";
        }

        for(int j = 1; j <= i; j++){
            cout<<(j + i - 1)<<" ";
        }

        int num = 2*i-2;

        for(int j = 0; j < i-1; j++){
            cout<<num--<<" ";
        }
        cout<<endl;
    }

    return 0;
}