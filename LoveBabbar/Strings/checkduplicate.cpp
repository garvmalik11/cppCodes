#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int M = 10;
    int mars[M] = {1,2,1,3,2,4,5,6,7,4};
    vector<int> earth;
    earth.push_back(6);
    earth.push_back(7);
    earth.push_back(5);

    sort(mars, mars + M);
    sort(earth.begin(),earth.end());


    vector<int> curr;
    for(int i=0;i<M; i++){
        if(mars[i]!=mars[i+1]){
            curr.push_back(mars[i]);
        }
    }
    
    int n = curr.size();
    for(int i=0;i<n;i++){
        cout << curr[i] <<" ";
    }

    vector<int> temp;

    for(int i=0;i<n;i++){
        if(find(earth.begin(),earth.end(),curr[i])==earth.end()){
            temp.push_back(curr[i]);
        }
    }

    curr = temp;

    cout <<endl;
     for(int i=0;i<curr.size();i++){
        cout << curr[i] <<" ";
    }


    int total_w =0;
    int selected =0;

    //find the number of stones he can bring
     for (int i = 0; i < curr.size(); i++) {
        if (total_w + curr[i] <= M) {
            total_w += curr[i];
            selected++;
        }
    }
    cout << endl;
    cout << total_w << endl;
    cout << selected;

}