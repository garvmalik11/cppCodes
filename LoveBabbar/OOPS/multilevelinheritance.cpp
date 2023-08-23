#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    int height;
    int weight;

    void speak(){
        cout << "is speeking " << endl;
    }

};

class dog : public animal{
    public:
    string name;
};

class origindog : public dog{
    public:
    int bachhe;
};


int main(){
   
    dog rocky;

    rocky.name = "ROXTR";
    cout << rocky.height<<endl;
    cout << rocky.name<<endl;
    rocky.speak(); 


    origindog hehe;
    
    hehe.bachhe = 6;
    cout << hehe.bachhe << endl;

   return 0;

}