#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;

    char ch = 'A';
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout<<(char)(ch + j - 1)<<" ";
        }

        for(int j = 2; j <= i; j++){
            cout<<(char)(ch + i - j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}