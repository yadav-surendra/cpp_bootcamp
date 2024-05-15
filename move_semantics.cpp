#include<iostream>
using namespace std;

// move is used for better memory allocation. here temp variable not occupies new memory
 //but remains in the place of a variable.
 
void swap(int &a, int &b){
    int temp = move(a);
     a = move(b);
     b= move(temp);
}

string print(){
    cout<<"i am print."<<endl;
}

int main(){
    int a = 4, b = 7;
    swap(a,b);
    cout<<a << endl;

    string s = print(); //this methid is less optimized since it first calls the functiona nd then assigns the value to s varibale.
    //using move sementics
    string&& st = print();  // more optimized cuz it directly reference to the function.
}