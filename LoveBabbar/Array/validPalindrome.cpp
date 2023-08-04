class Solution {
public:

bool valid(char ch){
        if((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z') ||( ch>='0' && ch<='9')){
            return 1;
        }
    return 0;
}

char toLowercase(char ch){
        if((ch>= 'a' && ch <= 'z' )|| (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a'; 
            return temp;
        }
}


bool checkpalindrome(string a){
    int s=0;
    int e = a.length()-1;

    while(s<=e){
        if(toLowercase(a[s]) !=  toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


    bool isPalindrome(string s) {
        //falto hatado
        string temp = "";

    for(int i=0; i<s.length();i++){
        if( valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    //convert to lowercase
    for(int i=0; i<temp.length(); i++){
        temp[i] = toLowercase(temp[i]);
    }
        return checkpalindrome(temp);
    }







};