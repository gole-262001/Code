/*Given an m x n matrix, find all common elements present in all rows in O(mn) time and one traversal of matrix.

Example: 

Input:
mat[4][5] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };

Output: 
1 8 or 8 1
8 and 1 are present in all rows.*/

// solution
#include <unordered_map>
vector<int> findCommonElements(vector<vector<int>> &mat)
{   int n = mat.size();
    int m = mat[0].size();
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int i = 0; i <m; i++){
        mp[mat[0][i]] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i == mp[mat[i][j]]){
                mp[mat[i][j]]++;

            }
        }

    }
    for(auto x : mp){
        if(x.second == n){
            ans.push_back(x.first);
        }
    }
    return ans;

  
}
