/*Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]*/

// Solution
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0 , right = m-1;
        int top = 0 , bottom = n-1;
        vector<int> ans;
        while(top <= bottom && left <= right){

        
        //right
        for(int i = left ;i <= right; i++){
           ans.push_back(matrix[top][i]);

        }
        top++;
        //bottom
        for(int i = top; i <= bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        //left
        if(top <= bottom){
            for(int i = right; i >=  left; i--){
                ans.push_back(matrix[bottom][i]);
             }
            bottom--;
        }
        //top
        if(left <= right){
            for(int i = bottom; i >= top; i--){
               ans.push_back(matrix[i][left]);
             }
            left++;
        }
        }
        return ans;
    }
};