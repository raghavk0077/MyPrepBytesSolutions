#include "iostream"
using namespace std;

int main() {

    int rows;
    cin>>rows;

    for(int i = rows; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }

        //for printing star 
        for(int star = 2; star <= rows - i + 1; star++){
            cout<<"* *"<<" ";
        }

        for(int j = i; j > 0; j--){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}