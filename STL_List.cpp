#include<iostream>
#include<list>
using namespace std;

// LIST IS IMPLEMENTED AS DOUBLY LINKEDLIST WE CAN USE ALL VECTOR OPRATION HERE
// SO IN LIST WE CAN NOT PRINT LIKE LST[0] THIS BECAUSE INTERNALLY IT'S A DOUBLY LINKED LIST.

int main(){
    list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_front(3);
    lst.push_front(4);
    // 4 3 1 2
    lst.pop_back(); // delete back 2
    lst.pop_front(); // delete front 4
    for(int val:lst){
        cout<<val<<" ";
    }
}