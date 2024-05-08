#include<iostream>
using namespace std;

int main()
{
    float call_api = 5.8;
    //char call_api = 'd';
    try{
        cout<<"trying to use api value\n";
        cout<<"did some ttesting with the value.\n";
        throw call_api;
    }catch(int x){
        cout << "integer exception handled.\n";
    }catch(float f){
        cout << "float exception handled.\n";
    }catch(...){        //using three dot we set default message to the user in case of unknown error.
        cout<<"something went wrong..\n";
    }

    cout<<"keep moving with the rest of the code.\n";
    return 0;
}