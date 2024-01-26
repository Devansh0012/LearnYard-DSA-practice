#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int age, rollno;
    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.rollno = 1;
    s1.printInfo();
    return 0;
}
/*
In the above code, we have a class named `Student` with data members `name`,
`age`, and `rollno`. We have a member function `printInfo()` which prints the
information of the student. In the `main()` function, we have created an object
of the class `Student` and assigned values to its data members. Then we have
called the member function `printInfo()` to print the information of the student.
*/
