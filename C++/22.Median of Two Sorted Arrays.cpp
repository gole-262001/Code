/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/

//1st solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> v;
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        
        while(i < n){
                v.push_back(nums1[i]);
                i++;
        }
        
        while(j < m){
            v.push_back(nums2[j]);
            j++;
        }
        
        int s = v.size();
        int low = 0 , high = s-1;
         int mid = (low + high)/2;
         double ans;
        if(s % 2 == 0){
           
           ans =  (double)(v[mid] + v[mid+1])/2;
            return ans;
        }
         ans = v[mid];
        return ans;

    }
};

// 2nd solution
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0 , j = 0;
        int n = (n1 + n2);
        int ind2 = n/2;
        int ind1 = ind2 -1;
        int cnt = 0;
        int ind1ele = -1 , ind2ele = -1;
        while(i  < n1 && j  < n2){
            if(nums1[i] < nums2[j]){
                if(ind1 == cnt) ind1ele = nums1[i];
                if(ind2 == cnt) ind2ele = nums1[i];
                i++;
                cnt++;
              ;
            }else{
                if(ind1 == cnt) ind1ele = nums2[j];
                if(ind2 == cnt) ind2ele = nums2[j];
                j++;
                cnt++;
                
            }
        }
        while(i < n1){
                if(ind1 == cnt) ind1ele = nums1[i];
                if(ind2 == cnt) ind2ele = nums1[i];
                i++;
                cnt++;
                
        }
        while(j < n2){
                if(ind1 == cnt) ind1ele = nums2[j];
                if(ind2 == cnt) ind2ele = nums2[j];
                j++;
                cnt++;
               
        }
        if(n % 2 == 0){
            return (double)(ind1ele +ind2ele)/2.0;
        }
    
        return (double)ind2ele;
    }
};
