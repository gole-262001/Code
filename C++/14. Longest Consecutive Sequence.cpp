/*
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
*/
// solution
// 1st solutiom better 
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int counter = 0;
        int last_smaller = INT_MIN;
        int longest = 1;
        sort(nums.begin() , nums.end());
        for(int i = 0; i <nums.size() ; i++){
            if(nums[i] == last_smaller + 1){
                counter++;
                last_smaller = nums[i];
            }
            else if(nums[i] != last_smaller){
                counter = 1;
                last_smaller = nums[i];
            }
            longest = max(longest , counter);
        }
        return longest;
    }
};

// 2nd solution

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i = 0; i <n; i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it -1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x += 1;
                    cnt++;
                }
                longest = max(longest , cnt);
            }
        }
        return longest;
    }
};
