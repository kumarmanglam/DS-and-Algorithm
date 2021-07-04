class Solution {
public:

float distance(int x2,int y2)
{
    float value= sqrt(pow((x2),2)+pow((y2),2));
    
    return value;
}
vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
    
    priority_queue<pair<float,int>>maxh;
    for(int i=0;i<points.size();i++)
    {
        maxh.push({distance(points[i][0],points[i][1]),i});
        
        if(maxh.size()>K) maxh.pop();
        
    }
    
    vector<vector<int>>ans;
    while(maxh.size()!=0)
    {
        ans.push_back(points[maxh.top().second]);
        maxh.pop();
    }
    
    return ans;
}
};
