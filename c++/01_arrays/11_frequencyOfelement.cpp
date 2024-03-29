# include <bits/stdc++.h>
using namespace std;


class solution{
    public:
    //usinglinear search O(n)
    int freq(int arr[],int n,int x){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                count++;
            }
        }
        return count;
    }

    //binary search 
    int binarySearch(int arr[], int l, int r, int x)
    {
        if (r < l)
            return -1;
        int mid = l + (r - l) / 2;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    //using binary search
    int countOccurrences(int arr[], int n, int x)
    {
        int ind = binarySearch(arr, 0, n - 1, x);
        if (ind == -1)
            return 0;
        // Count elements on left side.
        int count = 1;
        int left = ind - 1;
        while (left >= 0 && arr[left] == x)
            count++, left--;
        // Count elements on right side.
        int right = ind + 1;
        while (right < n && arr[right] == x)
            count++, right++;
        return count;
    }

};
int main(){
    int arr[]={1,2,3,4,4};
    solution obj;
    int ans=obj.count(arr,5,4);
    cout<<ans<<endl;
  return 0;
}