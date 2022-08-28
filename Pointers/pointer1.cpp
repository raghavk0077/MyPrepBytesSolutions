#include "iostream"
using namespace std;

int main() {

    int a = 100;
    int *iptr = &a;

    char c = 'c';
    char *cptr = &c;

    double d = 123.45;
    double *dptr = &d;

    cout<<*iptr<<endl;
    *iptr = 99;
    cout<<*iptr<<endl;
    // cout<<*cptr<<endl;
    // cout<<*dptr<<endl;

    return 0;
}