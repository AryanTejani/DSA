#include<iostream>
#include<stack>
using namespace std;

// LIFO
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<"Top: "<<s.top()<<endl;
    cout<<"size: "<<s.size()<<endl;
    cout<<"All Vals: "<<endl;
    
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    
}