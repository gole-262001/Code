/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

//1st solution
class Solution {
public:
    bool binarysearch(vector<int> arr , int t){
        int left = 0;
        int right = arr.size()-1;
        while(left <= right){
            int mid = (left + right)/2;
            if(arr[mid] == t){
                return 1;
            }
            else if(t > arr[mid]){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return 0;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool ans = 0;
        for(int i = 0; i <n; i++){
            if(matrix[i][0] <= target && target <= matrix[i][m-1]){
              ans = binarysearch(matrix[i] , target);
            }
            
        }
        return ans;
    }
};

// 2nd solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0 , j = m-1;
        while(i < n && j >=0){
            if(matrix[i][j] == target){
                return 1;
            }
            else if(target > matrix[i][j]){
                i++;
            }else{
                j--;
            }
        }
        return 0;
    }
};
