#include<iostream>
#include<string>
using namespace std;

int main()
{
    string colour;
    cout<<"what's your favourite colour?\n";
    getline(cin,colour);
    cout<<"Hey "<< colour<<" is my favourite colour too."<<endl;
    return 0;
}