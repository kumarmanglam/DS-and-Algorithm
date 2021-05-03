#include <iostream>
using namespace std;
class A{
    //public variables
    public:
    int a;
    void funcA(){
    cout<<"func a\n";
    }
    //private variables
    private: 
    int b;
    void funcB(){
    cout<<"func b\n";
    }

    //protected
    protected:
    int c;
    void funcC(){
    cout<<"func C\n";
    }
};
int main(){
    A obj;
    obj.funcA();

}
