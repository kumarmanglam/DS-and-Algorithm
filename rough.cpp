#include<bits/stdc++.h>
using namespace std;

//Function to find out minimum steps Knight needs to reach target position.
// Minimum represents - BFS approach
int minStepToReachTarget(vector<int> &knightPos, vector<int> &targetPos, int n) {

    int x1 = knightPos[0];
    int y1 = knightPos[1];
    int x2 = targetPos[0];
    int y2 = targetPos[1];
    int mat[n][n] = {0}; // Array to store steps.

    // Check if Staring & Ending Points are Same.
    if(x1 == x2 && y1 == y2)
    return 0;

    queue<pair<int,int>> q; // to store already visited points.
    q.push(make_pair(x1 - 1, y1 - 1));
    while(!q.empty()) {
        auto curr = q.front();
        int i = curr.first;
        int j = curr.second;
        q.pop();

        // there are 8 direction in which knight can move.
        if(((i + 1) >= 0 && (i + 1) < n) && ((j + 2) >= 0 && (j + 2) < n) && (mat[i +1][j + 2] == 0)) {
            mat[i + 1][j + 2] = mat[i][j] + 1;
            q.push(make_pair(i + 1, j + 2));
        }

        if(((i - 1) >= 0 && (i - 1) < n) && ((j + 2) >= 0 && (j + 2) < n) && (mat[i - 1][j + 2] == 0)) {
            mat[i - 1][j + 2] = mat[i][j] + 1;
            q.push(make_pair(i - 1, j + 2));
        }

        if(((i - 2) >= 0 && (i - 2) < n) && ((j + 1) >= 0 && (j + 1) < n) && (mat[i - 2][j + 1] == 0)) {
            mat[i - 2][j + 1] = mat[i][j] + 1;
            q.push(make_pair(i - 2, j + 1));
        }

        if(((i + 2) >= 0 && (i + 2) < n) && ((j + 1) >= 0 && (j + 1) < n) && (mat[i + 2][j + 1] == 0)) {
            mat[i + 2][j + 1] = mat[i][j] + 1;
            q.push(make_pair(i + 2, j + 1));
        }

        if(((i - 2) >= 0 && (i - 2) < n) && ((j - 1) >= 0 && (j - 1) < n) && (mat[i - 2][j - 1] == 0)) {
            mat[i - 2][j - 1] = mat[i][j] + 1;
            q.push(make_pair(i - 2, j - 1));
        }

        if(((i - 1) >= 0 && (i - 1) < n) && ((j - 2) >= 0 && (j - 2) < n) && (mat[i - 1][j - 2] == 0)) {
            mat[i - 1][j - 2] = mat[i][j] + 1;
            q.push(make_pair(i - 1, j - 2));
        }

        if(((i + 1) >= 0 && (i + 1) < n) && ((j - 2) >= 0 && (j - 2) < n) && (mat[i +1][j - 2] == 0)) {
            mat[i + 1][j - 2] = mat[i][j] + 1;
            q.push(make_pair(i + 1, j - 2));
        }

        if(((i + 2) >= 0 && (i + 2) < n) && ((j - 1) >= 0 && (j - 1) < n) && (mat[i + 2][j - 1] == 0)) {
            mat[i + 2][j - 1] = mat[i][j] + 1;
            q.push(make_pair(i + 2, j - 1));
        }
    }
    return mat[x2 - 1][y2 - 1];
}

int main(){

    vector<int>knightPos(2);
    vector<int>targetPos(2);
    int N;
    cin >> N;
    cin >> knightPos[0] >> knightPos[1];
    cin >> targetPos[0] >> targetPos[1];
    cout << minStepToReachTarget(knightPos, targetPos, N);
}