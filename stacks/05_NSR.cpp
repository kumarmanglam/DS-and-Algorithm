#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
vector<int> v;
stack<int> s;
void nextsmaller(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        if (s.size() == 0)
            v.push_back(-1);
        else if (s.size() > 0 && s.top() < arr[i])
            v.push_back(s.top());
        else if (s.size() > 0 && s.top() >= arr[i])
        {
            while (s.size() > 0 && s.top() > arr[i])
                s.pop();
            if (s.size() == 0)
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }
}
int main()
{
    int arr[100] = {4, 5, 2, 10, 8};
    int size = 5;
    nextsmaller(arr, size);
    reverse(v.begin(), v.end());
    for (int i = 0; i < size; i++)
        cout << v[i] << " | ";
    return 0;
}