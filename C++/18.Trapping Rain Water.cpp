/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.*/

//Solution

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> right_max_arr(n);
        right_max_arr[n-1] = height[n-1];
        vector<int> left_max_arr(n);
        left_max_arr[0] = height[0];
        int water = 0;
        for(int i = 1; i < n; i++)
        {
            left_max_arr[i] = max(left_max_arr[i-1] , height[i]);
        }
        for(int j = n-2; j >=0; j--){
            right_max_arr[j] = max(right_max_arr[j+1] , height[j]);
        }
        for(int i = 0; i < n; i++){
            water += min(left_max_arr[i] , right_max_arr[i]) - height[i];
        }
        return water;
        
    }
};
