#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int ans = 0;
    int x = 0;
    int binarynmber;
    cin>>binarynmber;
    while(binarynmber>0){
        int rem = binarynmber%10;
       
        if (rem == 1){
            ans = ans + pow(2,x);
        }
        x++;
        binarynmber = binarynmber/10; 
    }
    cout<<ans;
}