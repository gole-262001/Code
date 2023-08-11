/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]*/
// 1st solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int ,int> m;
        int n = nums.size();
        for(int i = 0; i <n; i++){
                m[nums[i]]++;
            }
        
        for(auto x : m){
            if(x.second > n/3){
                ans.push_back(x.first);
            }
        }


        return ans;
    }
};

//2nd solution
