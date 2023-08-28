/*Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.*/

// 1st solution

class Solution {
public:
int max(int a , int b){
    if(a > b) return a;
    return b;
}
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int ans = 0;
        if(s.size() == 1){
            return 1;
        }
        for(int j = 0; j < s.size(); j++){
        for(int i = j; i < s.size(); i++){
            if(st.find(s[i]) != st.end()){
                ans = max(ans , st.size());
                st.clear();
                break;
            }else{
                st.insert(s[i]);
            }
        }
        }

        return ans;

    }
};

//2nd solution
class Solution {
public:
int max(int a , int b){
    if(a > b) return a;
    return b;
}
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int>mp;
        int i = 0;
        int ans = 0;
        if(s.size() == 1) return 1;
        while(i < s.size()){
            if(mp.find(s[i]) != mp.end()){
                
                i = mp[s[i]] + 1;
                mp.clear();
            }else{
                mp[s[i]] = i;
                i++;
            }
            ans = max(ans , mp.size());
        }
        return ans;
    }
};

// 3rd solution 
