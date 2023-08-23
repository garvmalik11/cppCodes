#include<iostream>
#include<string>
using namespace std;

class animal{
    public:
    int height;
    int weight;

    void bark(){
        cout << "is barkking " << endl;
    }

};
class animalbhai {
    public:
    int bond;

    void noise(){
        cout << "making  noise"<< endl;
    }
};


class dog : public animal, public animalbhai{
    public:
    string name;
};




int main(){

    dog rocky;

    rocky.noise();
    rocky.bark();


   return 0;

}