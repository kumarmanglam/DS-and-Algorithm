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

    //print fuction 
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }

    //operator overloading 
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main(){

    //using parameterised constructor
    student a("urvi",20,1);
    student b("Rahul",22,1);


    //using operator overloading 
    if(b==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}
