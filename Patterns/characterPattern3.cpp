#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;
    char ch = 'A' + rows;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout<<(char)(ch - i + j - 1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}