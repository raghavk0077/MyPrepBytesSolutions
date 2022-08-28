#include "iostream"
using namespace std;


int main() {

    int num1, num2, op;
    char ch;

    do{
        cout<<"List of operations\n1. Add\n2. Subtract\n";
        cin>>op;
        cout<<"Enter the two numbers: ";
        cin>>num1>>num2;
        switch(op){
            case 1:
                cout<<"Addition = "<<num1 + num2<<endl;
                break;
            case 2:
                cout<<"Subtraction = "<<num1 - num2<<endl;
                break;
            default:
                cout<<"Invalid\n";
        }

        cout<<"Do you want to continue?\n";
        cin>>ch;
    }while(ch == 'y' || ch == 'Y');

    return 0;
}