#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl<<endl;

    cout<<"Vectors with pair"<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({1,1});
    vec.push_back({2,2});

    for(pair<int,int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}