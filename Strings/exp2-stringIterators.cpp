#include "iostream"
using namespace std;

int main() {

    string name = "Raghav Khanna";
    
    string::iterator b;     //created the iterator that runs from beginning in forward direction

    for(b = name.begin(); b != name.end(); b++){
        cout<< *b;
    }

    cout<<endl;

    string::reverse_iterator r;     //created the iteraror that returns in reversed direction

    for(r = name.rbegin(); r != name.rend(); r++){
        cout<< *r;
    }

    return 0;
}