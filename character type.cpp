#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:";
    cin>>ch;
    if (ch>='A'  && ch<='Z'){
        cout<<"Character is uppercase!";
    }
    else if(ch>='a' and ch<='z'){
        cout<<"Character is lowercase!";
    }
    return 0;
}