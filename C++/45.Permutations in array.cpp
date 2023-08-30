/*Given two arrays of equal size N and an integer K. The task is to check if after permuting both arrays, we get sum of their corresponding element greater than or equal to k i.e Ai + Bi >= K for all i (from 0 to N-1). Return true if possible, else false.
 

Example 1:

Input : 
a[] = {2, 1, 3}, 
b[] = { 7, 8, 9 }, 
k = 10. 
Output : 
True
Explanation:
Permutation  a[] = { 1, 2, 3 } 
and b[] = { 9, 8, 7 } */

class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a , a + n);
        sort(b , b +n);
        int i = 0 , j = n-1;
        while(i < n && j >= 0){
            if(a[i] + b[j] < k){
                return false;
            }
            i++ , j--;
        }
        return true;
    }
};
