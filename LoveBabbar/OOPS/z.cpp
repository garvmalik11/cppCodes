#include<iostream>
#include<string>
using namespace std;

class a{
    public:
    int age;
    void bark(){
        cout << "is barkking " << endl;
    }

};

class b{
    public:
    void bark(){
        cout << "speaking.."<<endl;
    }
};

class c : public a, public b{
    public:
    void hi(){
        cout << "hi" << endl;
    }
};




int main(){
    c obj1;

    obj1.a::bark();
    // obj1.b::bark();

   return 0;

}