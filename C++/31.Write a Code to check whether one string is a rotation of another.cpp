/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false*/

class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        int check_point = 0;
        for(int i = 0; i <  n; i++){
            char ch = s[0];
            for(int j = 0; j < n-1; j++){
                s[j] = s[j+1];
            }
            s[n-1] = ch;
            cout<<s<<endl;
            if(s == goal){
                check_point = 1;
                break;

            }
        }
        if(check_point == 0){
            return false;
        }
        return true;

        
    }
};
