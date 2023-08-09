/*Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:

Input:
5
4 2 -3 1 6

Output: 
Yes

Explanation: 
2, -3, 1 is the subarray 
with sum 0.*/

//Solution

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {   int store = 0;
        unordered_map<int , int> m;
        int f = 0;
        for(int i = 1; i <n; i++)
        {   store += arr[i];
            if(arr[i] == 0 || store == 0 || m[store]){
                f = 1;
                break;
            }else{
                m[store] = 1;
            }
        }
       if(f == 1) return "Yes";
       else return "No";
    }
};
