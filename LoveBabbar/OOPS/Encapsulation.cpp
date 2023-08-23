#include<iostream>
#include<string>
using namespace std;

class car{
    private:
    int milege;
    string company;
    string name;

    public:
    int getmilege(){
        return milege;
    }
    string getcompany(){
        return company;
    }
    string getname(){
        return name;
    }
    void setmilege(int m){
        milege = m;
    }
    void setcompany(string cmp){
        company = cmp;
    }
    void setname(string nm){
        name = nm;
    }
};

int main(){
   car c1;
    c1.setmilege(20);
    c1.setcompany("maruti");
    c1.setname("swift");

   cout << c1.getmilege() << endl;
   cout << c1.getname() << endl;
   cout << c1.getcompany() << endl;

   return 0;

}