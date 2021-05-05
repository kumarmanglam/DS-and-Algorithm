#include <iostream>
using namespace std;
class A{
    public:
        void Afunc(){
            cout<<"Inherited A\n";
        }
};
class B: public A{
    public:
        void Bfunc(){
            cout<<"Inherited B\n";
        }
};

class C: public B{
    public:
};

int main(){
    C b;
    b.Afunc();
    b.Bfunc();
}