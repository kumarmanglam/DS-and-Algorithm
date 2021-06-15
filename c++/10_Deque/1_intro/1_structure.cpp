#include <iostream>
using namespace std;

struct deque{
    int size,cap;
    int* arr;
    deque(int c){
        cap=c;
        size=0;
        arr=new int[cap];
    }    
}
