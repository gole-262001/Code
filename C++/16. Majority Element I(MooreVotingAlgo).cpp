/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/

//solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        int ele = nums[0];
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
            else if(nums[i] == ele){
                cnt++;
            }else{
                cnt--;
            }
        }
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ele == nums[i]) c++;
        }
        if(c > n/2){
            return ele;
        }
        return -1;
        
    }
};
