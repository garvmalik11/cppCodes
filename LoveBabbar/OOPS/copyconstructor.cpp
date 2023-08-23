#include<iostream>
using namespace std;

class hero{
    // public:
    private:
    int health;
    char level;


    //parameterized constructoe
public:
    hero (int health, char level){
        // cout << this << " " << endl;
        this->health = health;
        this -> level = level;
        //object........func value
    }

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char ch){
        level = ch;
    }
    void print(){
        cout << health <<endl;
        cout << level;
    }

};

int main(){
   hero old(10,'a');

   hero n(old);


    cout << old.gethealth()<< " ";
    cout << old.getlevel() << endl;

    cout << n.gethealth()<<" ";
    cout << n.getlevel()<<endl;
}