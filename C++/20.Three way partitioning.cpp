/*Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
1) All elements smaller than a come first.
2) All elements in range a to b come next.
3) All elements greater than b appear in the end.
The individual elements of three sets can appear in any order. You are required to return the modified array.

Note: The generated output is 1 if you modify the given array successfully.


Example 1:

Input: 
n = 5
A[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
Output: 1
Explanation: One possible arrangement is:
{1, 2, 3, 3, 4}. If you return a valid
arrangement, output will be 1.


Example 2:

Input: 
n = 3 
A[] = {1, 2, 3}
[a, b] = [1, 3]
Output: 1
Explanation: One possible arrangement 
is: {1, 2, 3}. If you return a valid
arrangement, output will be 1.


Your Task:
You don't need to read input or print anything. The task is to complete the function threeWayPartition() which takes the array[], a, and b as input parameters and modifies the array in-place according to the given conditions.*/
// 1st solution
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {   int n = array.size();
        vector<int> a1;
        vector<int>ab;
        vector<int> c;
        for(int i = 0; i < n; i++){
            if(array[i] < a){
                a1.push_back(array[i]);
            }
            else if(array[i] >= a && array[i] <= b){
                ab.push_back(array[i]);
            }else{
                c.push_back(array[i]);
            }
        }
        int j = 0;
        for(int i = 0; i < a1.size(); i++){
            array[j] = a1[i];
            j++;
        } 
        for(int i = 0; i < ab.size(); i++){
            array[j] = ab[i];
            j++;
        }
        for(int i = 0; i < c.size(); i++){
            array[j] = c[i];
            j++;
        }
        
        
    }

//2nd solution
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        
            int l = 0;
            int r = array.size()-1 ;
            for(int i = 0; i <=r; i++){
                if(array[i] < a){
                    swap(array[i], array[l]);
                    l++;
                }
                else if(array[i] > b)
                {
                    swap(array[i] , array[r]);
                    r--;
                    i--;
                }
            }
        
    }
};
