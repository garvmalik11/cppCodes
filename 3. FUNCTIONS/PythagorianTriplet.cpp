#include<iostream>
using namespace std;

bool triplet(int x,int y, int z);


int main(){
    int x,y,z;
    cout<<"ENTER 3 Numbers: ";
    cin>>x>>y>>z;
    if(triplet(x,y,z)){
        cout<<"PYTHAGORAS TRIPLET";
    }
    else{
        cout<<"NOT A PYTHAGORAS TRIPLET";
    }
}

bool triplet(int x,int y, int z){
    int max;
    if(x>y && x>z){
        max=x;
    }
    else if(y>x && y>z){
        max=y;
    }
    else{
        max=z;
    }
    

    if(max==x){
        if(x*x==y*y+z*z){
            return true;
        }
    }
    else if(max==y){
        if(y*y==x*x+z*z){
            return true;
        }
    }
    else if(max==z){
        if(z*z==x*x+y*y){
            return true;
        }
    }
    else{
        return false;
    }
    return false;
}