#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>> answerFinal(vector<int>X){
    int len = X.size();
    vector<pair<int,int>>v1;
    int minCount=INT_MAX,maxCount= 0;
    for (int i = 0; i < len; i++) {
        int count = 1; 
        for (int j = 0; j < len; j++) {
            if (i != j && abs(X[j] - X[i]) <= 2) {
                count++;
            }
        }
        maxCount = max(maxCount, count); 
        minCount = min(minCount,count);
    }
    
    v1.push_back({minCount,maxCount});
    
    return v1;
    
}

int main() {
	vector<int> X;
    // int inputSize;
    // cin>>inputSize;


    
    int size;
    int x;
    cin >> size;

	for(int i=0;i<size;i++){
        int x;
	    cin>>x;
        X.push_back(x);
	}
	
	vector<pair<int,int>> ansPair = answerFinal(X);
    for(auto val:ansPair){
	    cout<<val.first<<" "<<val.second;
	}
    
    
}
