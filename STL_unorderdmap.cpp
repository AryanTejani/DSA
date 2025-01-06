#include <unordered_map>
#include <iostream>
using namespace std;

// MAP BYDEFAULTLY STORE SORTED BASED ON KEYS.

int main(){
    unordered_map<string,int>m;
    m["tv"] = 100;
    m["laptop"] = 200;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"count : "<<m.count("laptop");
    cout<<"Val : "<<m["laptop"];
    m.erase(m.find("tv"));
    if(m.find("tv")!=m.end()){
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    
}