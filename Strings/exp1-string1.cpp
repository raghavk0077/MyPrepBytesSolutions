#include "iostream"

using namespace std;


int main() {

    // string str1 = "Raghav";
    // cout<<str1<<endl;

    // string str2;
    // cin>>str2;
    // cout<<"str2 capacity = "<<str2.capacity()<<endl;
    // cout<<"str2 length = "<<str2.length()<<endl;
    // str2.resize(8);
    // cout<<str2<<endl;

    // str1.push_back('a');    //append character at end of the string str1
    // cout<<str1<<endl;

    // str1.pop_back();        //remove the last character from string str1
    // str1.pop_back();
    // cout<<str1<<endl;

    string name = "Raghav Khanna";
    string name1 = "Raghav Khanna";
    string str = "All is well";

    //these operators compare two strings lexicographically
    cout<<(name == name1)<<endl;
    cout<<(name > str)<<endl;
    cout<<(name < str)<<endl;

    //we can directly copy one string to another using = operator
    string str3 = name;
    cout<<str3<<endl;

    //we can concatenate strings using + operator
    str3 += str;    //str3 = str3 + str;
    cout<<str3<<endl;



    return 0;
}
