#include <vector>
#include <iostream>
using namespace std;

// VECTOR IMPLEMENTED AS DYNAMIC ARRAY

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9}; // Creates a vector of size 5, initialized with 0
    vector<int>vec1(vec);
    for (int val : vec1) {
        cout << val << " "; // Print each element
    }
    cout << endl;

    vec.push_back(10); // Adds the value 1 to the end of the vector
    vec.pop_back();   // Removes the last element of the vector

    cout << vec.capacity(); // Prints the current capacity of the vector
    cout << endl;
    vec1.erase(vec1.begin());
    cout<<"Erase first value : ";
    for (int val : vec1) {
        cout << val << " "; // Print each element
    }
    cout<<endl;
    cout<<"Erase 2nd and 3rd value value : ";
    vec.erase(vec.begin()+1,vec.begin()+3);
    for (int val : vec) {
        cout << val << " "; // Print each element
    }

    // vec.clear();//removes vector value but capacity is gonna be same as before but size is 0.
    //vec.insert(pos,val);
    //          
    cout<<endl;
    cout<<"Vector value peint using iterator: ";
    
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }

    // IF WE DON'T WANT TO DEFINE ITERATOR THEN WE HAVE TO JUST WRITE AUTO IN FOR LOOP
    // MODERN C++ AUTOMATICALLY DETECT THAT WE WANT TO CREATE ITERATOR FOR PRINTING VALUE OR ANYTHING ELSE.
    // LIKE THIS
    cout<<endl<<"Vector value using iterator but not define it but using auto and reversly print rbegin and rend: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        std::cout << *it << " ";
    }


    return 0;
}
