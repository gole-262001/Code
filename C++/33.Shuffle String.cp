/*You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.

 

Example 1:


Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
Explanation: As shown, "codeleet" becomes "leetcode" after shuffling.*/

// 1st solution
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int , char> m;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            m[indices[i]] = s[i];
        }
        for(auto x : m){
            ans += x.second;

        }
        return ans;

    }

};

// 2nd solution
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string ans(n,'.');
        for (int i = 0; i < n; i++) {
            ans[indices[i]] = s[i];
        } 
        return ans;

    }

};
