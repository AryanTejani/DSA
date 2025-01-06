#include <set>
#include <iostream>
using namespace std;

// set are like map and we can use all methods of map.

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);

    for(int val:s){ 
        cout<<val<<" ";
    }
    cout<<endl<<"size"<<s.size();
    cout<<endl<<"LowerBound: "<<*s.lower_bound(1);//-->shouldn't be less than key
    cout<<endl<<"UpperBound:"<<*s.upper_bound(5);// should be greater than key
}