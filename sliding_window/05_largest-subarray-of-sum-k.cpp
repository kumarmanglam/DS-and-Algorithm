//1:35am
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
long largestsize(vector<int> &arr, const int &k) 
{
    int mx = INT_MIN;
    int i = 0, j = 0, sum = 0;
    int n = arr.size();
    while (j < n)
    {
        sum += arr[j];
        if (sum < k)
            j++;
        else if (sum == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else //move i
        {
            while (sum>k)
            {
            sum = sum - arr[i];
            i++;           
            }
            j++;
        }
    }
    return mx;
}
int main()
{
    vector<int> v = {13, 1, 3, 3, 4, 5, 4, 2, 1,2, 2, 1, 1, 4, 3, 2, 2};
    long mx;
    mx = largestsize(v, 7);
    cout << mx;
    return 0;
}

/** this usefull code  was found in comments 
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int solve(vector<int> &A, const int &k) {
	int n = A.size();
	int i = 0, j = 0, sum = 0;
	int mx = INT_MIN;
	while (j < n) {
		sum += A[j];
		if (sum < k) {
			j++;
		} else if (sum == k) {
			mx = max(mx, j - i + 1);
			j++;
		} else if (sum > k) {
			while (sum > k) {
				sum = sum - A[i];
				i++;
			}
			j++;
		}
	}
	return mx;
}
int main()
{
	vector<int> A{4, 1, 1, 1, 2, 3, 5};
	int k = 5;
	cout << solve(A, k);
	return 0;
}
*/