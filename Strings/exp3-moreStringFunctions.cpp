#include "iostream"
using namespace std;

int main() {

    string fName = "Raghav Raghav";
    string lName = "Khanna";

    // char ch[10];
    // // cout<<ch<<endl;
    // fName.copy(ch,5, 0);    //this will copy string from fName to ch array starting from position 0 till 5 length
    // // cout<<ch<<endl;


    // cout<<"first Name = "<<fName<<endl;
    // cout<<"last Name = "<<lName<<endl;

    // fName.swap(lName);  //this will swap the value of two strings

    // cout<<"first Name = "<<fName<<endl;
    // cout<<"last Name = "<<lName<<endl;

    //These return the indices of the occurences
    // cout<<"First Occurence of 'a' in fName = "<<fName.find('a')<<endl;
    // cout<<"Last Occurence of 'a' in fName = "<<fName.rfind('a')<<endl;

    // cout<<"First Occurence of 'a' in fName = "<<fName.find_first_of("ag")<<endl;
    // cout<<"Last Occurence of 'a' in fName = "<<fName.find_last_of("ag")<<endl;

    cout<<lName<<endl;
    lName.insert(0,"Raghav ");
    cout<<lName<<endl;

    lName.clear();
    cout<<lName.empty()<<endl;

    return 0;
}