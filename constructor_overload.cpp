// Constructor Overloading 
#include <iostream>
using namespace std;

class  student {
    int rollno;
    float marks;
public:
//default constructor
    student() {
        rollno = 0;
        marks = 0.0;
    }
    // constructor with one parameters
    student(int r) {
        rollno = r;
        marks =0;
    }
    // constructor with two parameters  
    student(int r, float m) {
        rollno = r;
        marks = m;
    }
    void display() {
        cout << "Roll No: " << rollno << ", Marks: " << marks << endl;
    }
};
int main() {
    student s1; // calls default constructor
    student s2(101); // calls constructor with one parameter
    student s3(102, 95.5f); // calls constructor with two parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}