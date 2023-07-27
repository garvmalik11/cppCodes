#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        //sorting
        for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){
            if(a[j]<a[i]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
        
        int pair = 0;
        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3]){
            pair = 0;
        }
        else if(a[0]==a[1]&&a[1]==a[2] || a[1]==a[2] && a[2]==a[3]){
            pair = 1;
        }
        else{
            pair = 2;
        }
        
        
        
        cout << pair << endl;
    }
    return 0;
}