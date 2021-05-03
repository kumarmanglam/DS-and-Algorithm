#include <iostream>
using namespace std;
class student{
    //private variables
    string name;
    //public variables
    public:
    int age;
    int gender;

    //setter fuction for private members. 
    //this function will insert a value in private member of class
    void setName(string s){
        name=s;
    }
    //getter function for private members
    //this function will print a value of a private member of class 
    void getName(){
        cout<<name<<endl;
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
    //array of objects
    student arr[3];
    for(int i=0;i<2;i++){
        //here we are going to use setName function to insert value in a private variable
        string s;
        cout<<"Name = ";
        cin>>s;
        arr[i].setName(s);
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    //using get name funtion here
    for(int i=0;i<2;i++){
        arr[i].getName();
    }
    return 0;
}