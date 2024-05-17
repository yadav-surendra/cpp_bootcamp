#include<iostream>
#include<string>
#include<vector> //an array list that can grow to any size

using namespace std;

struct Corners {
    float a,b,c,d;
};

ostream& operator<<(ostream& stream, const Corners& corner){
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d ;
    return stream;
}


int main(){

vector<int> inty;

inty.push_back(2);
inty.push_back(3);
inty.push_back(4);
inty.push_back(5);


    for(auto i=inty.begin(); i!= inty.end(); i++){
        cout << *i <<endl;
    }

 
vector<Corners> corner;

corner.push_back({1,2,3,4});
corner.push_back({5,6,7,8});

    for(int i=0; i< corner.size(); ++i){
        cout<< corner[i] << endl;
    }

    vector<string> fruits={"mango","apple","litchi","coconut"};
    cout<<fruits[2];

    return 0;

    
}

