#include<bits/stdc++.h>
using namespace std;


int ansF(vector<pair<int,int>> vec,int testSize){
    for (int i = 0; i < testSize; i++)
    {
        int N = vec[i].first;
        int swap = vec[i].second;

        if(N <= 1){
            return 0;
        }

        vector<int> input;
        for (int i = 0; i < N; i++)
        {
            input.push_back(i+1);
        }

        return 2*N*swap - (2*swap*(swap+1) - swap);

        
    }
    
}


int main(){
    int testSize;
    cin>>testSize;

    vector<pair<int,int>> vec(testSize);
    vector<int> input;
    for(int i=0;i<testSize;i++){
        int N;
        cin>>N;
        int swap;
        cin>>swap;
        for(int j=1;j<=N;j++){
            input.push_back(j);
        }
        vec[i] = {N,swap};
    }



    for(auto val:vec){
        cout<<val.first<<" "<<val.second<<endl;
    }
    for(int i=0;i<testSize;i++){
        int ans = ansF(vec,testSize);

        input[i] = ans;
    }

    for(auto val:input){
        cout<<val<<endl;
    }
    

}