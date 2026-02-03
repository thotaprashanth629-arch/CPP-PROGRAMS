//Function Overloading 
#include <iostream>
using namespace std;

class math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main()
{
    math m;
    cout << "Sum of 2 integers: " << m.add(5, 10) << endl;
    cout << "Sum of 2 floats: " << m.add(5.5f, 10.3f) << endl;
    cout << "Sum of 3 integers: " << m.add(5, 10, 15) << endl;
    return 0;
}