class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> pq;
       int n = nums.size();
       for(int i = 0; i < n; i++) pq.push(nums[i]);

       if(k == 1) return pq.top();
       else{
  while(pq.empty() == false)
       {
           pq.pop();
            k--;
           if(k == 1) break;
          
       }
       return pq.top();
       }

     
        
    }
};
