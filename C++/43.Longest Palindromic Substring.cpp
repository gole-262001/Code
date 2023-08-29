/*Given a string s, return the longest 
palindromic
 
substring
 in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.*/

// 1st solution
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int max_len = 1;
        int start = 0;
        for(int i = 1; i < n; i++){
            int r = i;
            int l = i-1;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r-l+1 > max_len){
                    max_len = r-l+1;
                    start = l;
                }
                r = r +1;
                l = l-1;
            }

            l  = i-1;
            r = i+1;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r-l+1 > max_len){
                    max_len = r-l+1;
                    start = l;
                }
                r = r+1;
                l = l-1;
            } 
        }
        
        return s.substr(start , max_len);
        
    }
};
