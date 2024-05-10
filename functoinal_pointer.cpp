#include<iostream>
using namespace std;

int func(int a){
    //cout<<"hey you are intersting!";
    return a+1;
}

int main(){

    int (*pointer_function)(int);   //declaring functional pointer.
    pointer_function = func;        //assigning pointer to point to the function func.

   cout<<pointer_function(2)<<endl;     //calling the functional pointer by passing value.

    return 0;
}