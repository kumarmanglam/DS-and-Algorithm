#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> v;
    for (int i=0;i<4;i++)
    {
        vector<int>temp;
        for(int j=0;j<4;j++)
        {
            int h;
            cin>>h;
            temp.push_back(h);
        }
        v.push_back(temp);
    }
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<v[i][j];
        }
    }
    return 0;
}


/**
0
1
1
0
1
1
1
1
1
1
1
1
1
1
0
0
*/