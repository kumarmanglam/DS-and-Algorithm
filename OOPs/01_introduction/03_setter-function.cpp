#include <iostream>
using namespace std;
class student{
    //private variables
    string name;
    //public variables
    public:
    int age;
    int gender;
    //setter fuction for private variables
    //this function will insert a value in private member of class
    void setName(string s){
        name=s;
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
    for(int i=0;i<3;i++){
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
    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
    return 0;
}