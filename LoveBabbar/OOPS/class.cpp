#include<iostream>
using namespace std;

class hero{
    // public:
    private:
    int health;
    char level;

public:
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

};

int main(){
    hero h1;
    //setting
    h1.sethealth(80);
    h1.setlevel('c');

    //printiong
    cout << h1.gethealth()<<" "<<h1.getlevel() << endl;

    //dynamic hero
    hero *h2 = new hero;
    (*h2).sethealth(79);
    (*h2).setlevel('b');
    cout << (*h2).gethealth() <<" "<<(*h2).getlevel() << endl;

    cout << h2-> gethealth() <<" "<<h2-> getlevel();




}