/*Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.

In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.

Return an array containing the index of the row, and the number of ones in it.

 

Example 1:

Input: mat = [[0,1],[1,0]]
Output: [0,1]
Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1]. */

// 1 solution
class Solution {
public:
    int countOneINRow(vector<int> &row){
       int c = 0;
        for(int i = 0; i <row.size(); i++){
            if(row[i] == 1) c++;
        }
        return c;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int cnt = INT_MIN;
        vector<int> ans(2);
        for(int i = 0; i <mat.size(); i++){
            int countone = countOneINRow(mat[i]);
            if(cnt < countone){
                cnt = countone;
                ans[0] = i;
                ans[1] = cnt;

            }
            
        }
        return ans;
    }
};
// 2nd solution



