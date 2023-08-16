/*Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives 
us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. */

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
int median(vector<vector<int>> &matrix, int m, int n) {
    
    int low = 1;
    int high = 1e9;
    while(low <= high){
        int mid = (low + high) >> 1;
        int cnt = 0;
        for(int i = 0; i <n; i++){
            cnt += countSmallerThenMid(matrix[i] , mid);
        }
        if(cnt <= (m*n)/2){
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}
