#include<iostream>
#include<string>
using namespace std;

class a{
public:
    int a;
    int b;

    void operator+(int a, int b){
        cout <<"Unary plus is applied to " << a+b << endl;
    }
};

int main(){
    a obj1;

    obj1.a = 5;
    obj2.b = 10;

    obj1+obj2; // This will call the overloaded unary '+' operator function

    return 0;
}
