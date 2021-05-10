#include<utility>
vector<int> ngr(vector<int> arr){
    vector<int> v;
    stack<pair<int,int>> s;
    for(int i=arr.size()-1;i>=0;i--){
        if(s.size()==0)
        v.push_back(0);
        else if(s.size()>0 && s.top().first>arr[i])
        v.push_back(s.top().second+1);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i])
            s.pop();
            if(s.size()==0) v.push_back(0);
            else v.push_back(s.top().second+1);
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}
vector<int> ngl(vector<int> arr){
    vector<int> v;
    stack<pair<int,int>> s;
    for(int i=0;i<arr.size();i++){
        if(s.size()==0)
        v.push_back(0);
        else if(s.size()>0 && s.top().first>arr[i])
        v.push_back(s.top().second+1);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i])
            s.pop();
            if(s.size()==0) v.push_back(0);
            else v.push_back(s.top().second+1);
        }
        s.push({arr[i],i});
    }
    return v;
}
int solve(vector<int> arr) {
    vector<int> right=ngr(arr);
    vector<int> left=ngl(arr);
    for(int i=0;i<arr.size();i++)
        arr[i]=right[i]*left[i];
    return *max_element(arr.begin(),arr.end());
}
