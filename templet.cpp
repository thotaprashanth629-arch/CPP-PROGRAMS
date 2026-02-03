// Function Templates
#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b) {
    if(a > b)
        return a;
    else
        return b;
}
int main(){
    cout<<"Max of integers: "<<findMax(10, 20)<<endl;
    cout<<"Max of floats: "<<findMax(10.5f, 20.3f)<<endl;
    cout<<"Max of characters: "<<findMax('A', 'Z')<<endl;
    return 0;
}