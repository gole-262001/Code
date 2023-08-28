/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.*/

// 1st solution
#include<bits/stdc++.h>
class Solution {
public:
    int min(int a , int b){
        if(a > b){
            return b;
        }
        return a;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int min_lstr = INT_MAX;
        string ans = "";
        for(int i = 0; i < n; i++){
            min_lstr = min(min_lstr , strs[i].size());
        }
        int  j = 0;
        int a = 0;
        while(j < min_lstr){
            char ch = strs[0][j];
            int count = 0;
            for(int i = 0; i < n; i++){
                if(ch == strs[i][j]){
                    count++;
                }else{
                    a = 1;
                    break;
                }
                
            }
            if(a == 1) break;
            if(count == n){
                ans += ch;
            }
            
            j++;
        }
        return ans;

    }
};

// 2nd solution
