#include <map>
#include <iostream>
using namespace std;

// MAP BYDEFAULTLY STORE SORTED BASED ON KEYS.

int main(){
    multimap<string,int>m;
    // WE CANNOT USE [] SQUARE BRACKET HERE. WE WILL GET 4 VALUE FOR TV BECAUSE IT'S MULTIMAP.
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("laptop",100);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"count : "<<m.count("laptop");
    m.erase(m.find("tv"));
    if(m.find("tv")!=m.end()){
        cout<<"found";
    }
    else{
        cout<<"Not found";
    }
    
}