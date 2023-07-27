#include<bits/stdc++.h>
using namespace std;

string decimalToTexa(int n)
{
    int x=1;
    string ans= "";

    while (x<=n)
    x=x*16;
    x=x/16;

    while(x>0)
    {
        int lastdg= n/x;
        n=n-lastdg*x;
        x=x/16;
        if(lastdg<=9)
        {
            ans += to_string(lastdg);
        }
        else
        {
            char c = 'A' + lastdg - 10 ;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalToTexa(n)<<endl;
}
