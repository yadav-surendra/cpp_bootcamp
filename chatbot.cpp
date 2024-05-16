#include<windows.h>
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    char inp;
    string name ;
    string getkey ;
    int age;

cout << "\t\t\t WELCOME TO CHATBOT ! \n" ;
cout << "Press Y to continue the Program and N to exit the program.\n";

cin >> inp;


//condition 
if(inp == 'y' || inp == 'Y'){
cout<<"Hello there..";
}else{
cout << "Thanks for coming.";
}

system("cls");  //clean out the terminal.

if(getkey != "bye"){

        cout << "HELLO USER ";
        cin >> getkey;
    cout << "what is your name? \n ";
    getline(cin,name);

        cout << name << " what is your age ? \n";
        getline(cin,getkey);


        switch(age){
        case 18:
        cout<<"you are too young.";
        break;

        case 20:
        cout<<"you are a man.";
        break;

        case 30:
        cout<<"you are a matured man.";
        break;
        case 60:
        cout<<"you are an old man";
        break;

        default:
        cout<<"you seem younger than your age.";
        }

        cout << "bye bye " << name << endl;
        getline(cin,getkey);
        system("cls");
    }

cout << "PROGRAM ENDED HERE.\n";
    return 0;
}
