/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.

 

Example 1:

Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
Example 2:

Input: s = "azxxzy"
Output: "ay"*/
// 1st solution
class Solution {
public:
void reverse(string &s){
    int i = 0 , j = s.size()-1;
    while(i < j){
        swap(s[i] , s[j]);
        i++ , j--;
    }
}
    string removeDuplicates(string s) {
        stack<char> st;
        string ans = "";
        for(auto c : s){
            if(st.empty() || st.top() != c){
                st.push(c);
            } else {
                st.pop();
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans);
        return ans;
        
    }
};
