#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
vector<int> v;
stack<int> s;

void nextgreater(int arr[], int size)
{
  for (int i = 0; i <size; i++)
  {
    if (s.size() == 0)
      v.push_back(-1);
    else if (s.size() > 0 && s.top() > arr[i])
      v.push_back(s.top());
    else if (s.size() > 0 && s.top() <= arr[i])
    {
      while (s.size() > 0 && s.top() < arr[i])
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
  int arr[100] = {100, 31, 58, 32, 15, 24, 1, 3};
  nextgreater(arr, 8);
  for (int i = 0; i < 8; i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}