#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int i = 0;
    int j = nums.size() - 1;
    while (i < j) {
        if (nums[i] > 0 && nums[j] < 0) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        } else if (nums[i] > 0 && nums[j] > 0) {
            j--;
        } else if (nums[i] < 0 && nums[j] < 0) {
            i++;
        } else {
            i++;
            j--;
        }
    }
    return nums;
}
