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

class Solution{
public:
int countSmallerThenMid(vector<int> &row , int ele){
    int low  =0 ;
    int high = row.size()-1;
    while(low <= high){
        int mid = (low + high) >> 1;
        if(row[mid] <= ele){
            low = mid +1;

        }else{
            high = mid-1;
        }
    }
    return low;
}
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
        
        int cnt = INT_MIN;
        vector<int> ans(2);
        for(int i = 0; i < n; i++){
            int countone = m - countSmallerThenMid(arr[i] , 0);
            if(cnt < countone){
                cnt = countone;
                ans[0] = i;
                ans[1] = cnt;

            }
            
        }
        if(ans[1] == 0){
            return -1;
        }
        return ans[0];
	}

