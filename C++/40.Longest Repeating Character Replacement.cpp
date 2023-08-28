/*You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achive this answer too.*/

// solution
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0 , max_count = 0 ,res  = 1 ;
        vector<int>count(26,0);
        for(int right = 0; right < n; right++){
            count[s[right]  - 'A']++;
            max_count = max(max_count , count[s[right]  - 'A']);
            while(left <= right && right-left+1-max_count > k){
                count[s[left] - 'A']--;
                left++;
            }
            res = max(res , right - left + 1);

        }
        return res;
    }
};
