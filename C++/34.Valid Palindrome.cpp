/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.*/
// 1st solution
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(s.empty()) return true;
        string ans = "";
        for(int i = 0; i < n; i++){
            if((s[i] >= '0' && s[i] <= '9')){
                ans.push_back(s[i]);
            }
            else if( (s[i] >= 'a' && s[i] <= 'z')){
                ans.push_back(s[i]);
            }
            else if((s[i] >= 'A' && s[i] <= 'Z')){
                ans.push_back(tolower(s[i]));
            }
        }
        cout<<ans<<endl;
        int i = 0 , j = ans.size()-1;
        while(i < j){
            if(ans[i] != ans[j]){
                return false;
            }
            i++ , j--;
        }
        return true;
    }
};
