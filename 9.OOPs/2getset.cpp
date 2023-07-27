#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[20];
    int age;
    bool gender;
    void printdetails(){
        cout<<"NAme is"<<" "<<name<<endl;
        cout<<"Age is"<<" "<<age<<endl;
        cout<<"Gender is"<<" "<<gender<<endl;
    }
};

int main(){
    int n;
    cin >> n;
    Student arr[n];
    for(int i=0;i<n;i++){
        cout<<"Name=";
        cin>>arr[i].name;
        cout<<"Agw=";
        cin>>arr[i].age;
        cout<<"Gender=";
        cin>>arr[i].gender;
    }
    
    for(int i=0;i<n;i++){
        arr[i].printdetails();
    }
}