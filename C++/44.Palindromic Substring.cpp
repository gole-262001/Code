/*Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".*/
// 1st solution

class Solution {
public:
    int countSubstrings(string s) {
        int c = 0;
        int n = s.size();
        for(int i = 1; i <n; i++){
            int l = i-1;
            int r = i;
            while(l >=0 && r < n && s[l] == s[r]){
                c++;
                l = l-1;
                r = r+1;
            }
            l = i-1;
            r = i+1;
             while(l >=0 && r < n && s[l] == s[r]){
                c++;
                l = l-1;
                r = r+1;
            }
        }
        return n + c;
    }
};
