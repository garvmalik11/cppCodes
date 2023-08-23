#include<iostream>
#include<string>
using namespace std;

class human{
    public:
    int height;
    int weight;
    // private:
    int age;

    int getage(){
        return this->age;
    }
    void setweight(int w){
        this->weight = w;
    }
};

class male : public human{
    public:
    string colour;
    
    void sleep(){
        cout << "Male is Sleeping "<< endl;
    }

};

int main(){

    male object1;

    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;

    cout << object1.colour << endl;
    
    object1.setweight(90);
    cout << object1.weight << endl;
    object1.sleep();
   return 0;

}