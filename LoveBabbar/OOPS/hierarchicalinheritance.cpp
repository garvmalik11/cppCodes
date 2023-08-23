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

class b : public  a{
    public:
    void speak(){
        cout << "speaking.."<<endl;
    }
};
class c : public a{
    public:
    void scream(){
        cout << "chilllaaaa.."<<endl;
    }
};




int main(){
    b obj1;
     c hi;

    obj1.speak();
    obj1.bark();
    hi.scream();
    hi.bark();

   return 0;

}