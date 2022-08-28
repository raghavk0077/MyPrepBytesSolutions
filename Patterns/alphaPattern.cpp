#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;
    

    for(int i = 1; i <= rows; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout<<(char)(ch + i - 1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}