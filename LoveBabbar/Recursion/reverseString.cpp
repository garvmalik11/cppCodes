#include <iostream>
using namespace std;

void reverse(string& s, int i, int j){
    
    if(i > j)
    return ;
    

    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s, i, j);

    // cout << s << endl;
}


int main() {
    
    string s = "abcde";
    int i =0; 
    int j =4;

     reverse(s,i,j);

     cout << s;

    return 0;
}
