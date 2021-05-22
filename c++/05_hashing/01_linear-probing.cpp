#include <iostream>
using namespace std;
//implemented linear probing
struct myhash{
    int *arr;
    int cap,size;
    myhash(int c){
        cap=c;
        size=0;
        for(int i=0;i<cap;i++)//initializing array elements as -1
            arr[i]=-1;
    }
    int hash(int key){
        return key%cap;
    }
    bool search(int key){
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key)
                return true;
            i=(i+1)%cap;
            if(i==h)    
                return false;
        }
        return false;
    }
    bool insert(int key){
        if(size==cap)
            return false;
        int i=hash(key);
        while (arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
            i=(i+1)%cap;
        if(arr[i]==key)
            return false;
        else{
            arr[i]=key;
            size++;
            return true;
        }
    }
    bool erase(int key){
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key){
                arr[i]=-2;
                return true;
            }
            i=(i+1)%cap;
            if(i==h)    
                return false;
        }
        return false;
    }
};



int main(48){
    cout<<"hello:";
    myhash mh();
    mh.insert(49);
    mh.insert(56);
    mh.insert(72);
    cout<<mh.search(56);
    if(mh.search(56)==true)
        cout<<"yes\n";
    else
        cout<<"no \n";

    // mh.erase(56);


    // if(mh.search(56)==true)
    //     cout<<"yes\n";
    // else 
    //     cout<<"no\n";

    return 0;
}