//NOTE
//constructor by default call ho jata h
//shallow copy
#include <iostream>
using namespace std;
class student{
    //private variables
    string name;
    //public variables
    public:
    int age;
    int gender;

    //constructor or parameterised constructor
    student (string s,int a,int g){
        cout<<"parameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
    
    //no value constructor or we can say by default constructor
    student(){
        cout<<"default constructor"<<endl;
    }

    //copy constructor
    student (student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    //print fuction 
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};

int main(){

    //using parameterised constructor
    student a("urvi",20,1);
    //a.printInfo();

    //using bydefault no value constructor
    student b;

    //by default copying constructor gets activated when we haven't made any copying constuctor!!!!
    student c=a;
    
    //coder made copying constructor like stucdent c object m hame object a ki saari values daalne h 
    student d=a;
    return 0;
}

