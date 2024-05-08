#include<iostream>
using namespace std;

int main(){

    int i=5 , j;
//     j= i++;          //post increment assigns the initial value first and then increments.
//    cout<< i <<" "<< j<<endl;

     j= ++i;            //increments the initial value and then assigns the value.
    cout<< i <<" "<< j<<endl;

    return 0;

}