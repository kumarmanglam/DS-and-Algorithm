
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    int n = 4, m = 4;
    vector<int> v;
    for (int j = 0; j < m; j++)
        v.push_back(arr[0][j]);
    int mx = MAH(v, m);
    cout << endl
         << mx << " mx intially " << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                v[j] = 0;
            else if(arr[i][j]!=0)
                v[j] = v[j] + arr[i][j];
        }
        cout << endl
             << "******* STEP ********    " << i << endl;
        for (int k = 0; k < m; k++)
        {
            cout << v[k] << " ";
        }
        mx = max(mx, MAH(v, m+1));
        //check in for mistakes and debugging

        //vector at this point
        cout<<"mah is "<<MAH(v,m);
        cout << endl
             << mx << " mx intermin at i equal to ->  " << i << "   and the mah here is " << MAH(v, m) << endl;
    }
    cout << endl
         << mx << "  mx when code ended " << endl;


    cout<<endl<<"if vector is  | 2,3,3,3";
    vector <int> vv;
    vv={2,3,3,3};
    int size=v.size();
    int jj=MAH(vv,size);
    cout <<endl<<jj<<endl;
    return 0;
}