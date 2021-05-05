#include <iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"I am a function with no arguments\n";
    }
    void fun(int x){
        cout<<"I am a function with int argument\n";
    }
    void fun(double c){
        cout<<"I am a function with double argument\n";
    }
};

int main(){
    A obj;
    obj.fun();
    obj.fun(34);
    obj.fun(23.30);

  return 0;
}