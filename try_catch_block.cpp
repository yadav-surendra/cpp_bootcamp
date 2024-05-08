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
    }catch(...){
        cout<<"something went wrong..\n";
    }

    return 0;
}