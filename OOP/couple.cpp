#include <bits/stdc++.h>
using namespace std;

class Couple{
    private:
        string name;
        int age;
    public:
        Couple(string name, int age){
            this->name = name;
            this->age = age;
        }
        void print(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){
    Couple c1("John", 20);
    Couple c2("Jane", 18);
    c1.print();
    c2.print();
    return 0;
}

// Name: John
// Age: 20
// Name: Jane
// Age: 18