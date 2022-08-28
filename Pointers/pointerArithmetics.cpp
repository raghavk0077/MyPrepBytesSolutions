#include "iostream"
using namespace std;

int main() {

    int a = 100;
    int b = 20;
    int *iptr2 = &b;
    int *iptr = &a;

    char c = 'c';
    char *cptr = &c;

    double d = 123.45;
    double *dptr = &d;

    cout<<*--iptr<<"\n"<<iptr2;

    // cout<<"Addres of iptr = "<<iptr<<endl;
    // iptr++;
    // cout<<"Addres of incremented iptr = "<<iptr<<endl;
    // cout<<"Addres of cptr = "<<cptr<<endl;
    // *cptr++;
    // cout<<"Addres of incremented cptr = "<<cptr<<endl;
    // cout<<"Addres of dptr = "<<dptr<<endl;
    // dptr++;
    // cout<<"Addres of incremented dptr = "<<dptr<<endl;



    return 0;
}