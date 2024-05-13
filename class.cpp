#include<iostream>
#include<string.h>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}     //this avoids the calling of default constructor.

    protected:
    Man(const string & name, const int & age)
    : _name(name) , _age(age){}

    void run(){puts("I can run");}

    public:
    void sayname() const;
};

void Man::sayname() const {
    cout <<"hey my name is "<< _name << " and age is "<< _age << endl;
}

//creating derived class superman
class Superman : public Man{
    bool flight;

    public:
    Superman(string name) : Man(name,25){}
    void run(){puts("I can run at light speed.");}
};

//creating another derived class called spiderman
class Spiderman : public Man{
    bool webbing = true;

    public:
   // bool webbing = true;      //just checking to improvise and learn.
    Spiderman(string name) : Man(name,19){}
    void run(){
        puts("I can run at normal speed.");
        }
};

int main(){

    Superman clark("kent");
    clark.sayname();

    Spiderman peter("peter");
    peter.run();

    // if(peter.webbing){cout<< "yes i acn web"<< endl }        // improvisation part.
    return 0;
}
