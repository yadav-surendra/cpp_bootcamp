#include<iostream>
#include<string>

using namespace std;

int main(){
// creaying lamdas 
[]{ cout << "hello there. welcome to thew orld of programming.\n";}();

auto sum = [] (auto a , auto b) {
    return a+b;
};

cout<< "sum of 2 nd 4 is "<< sum(2,4)<< endl;


    return 0;
}