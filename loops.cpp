#include<iostream>
#include<string>
using namespace std;

int main()
{
    int array[] = {4,5,9,0,2,3,7};
    int i=0;

    // while(i<7){
    //     if(i==2){
    //         i++;
    //         continue;  //skips 
    //     }
    //     cout<<array[i]<<endl;
    //     i++;
    // }

    do{
        cout<<array[i]<<endl;
        i++;
    }while(i<7);

    return 0;
}