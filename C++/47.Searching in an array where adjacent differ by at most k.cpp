/*A step array is an array of integers where each element has a difference of at most k with its neighbor. Given a key x, we need to find the index value of x if multiple elements exist, and return the first occurrence of the key.

Example 1:

Input : arr[ ] = {4, 5, 6, 7, 6}, K = 1 
        and X = 6
Output : 2
Explanation:
In an array arr 6 is present at index 2.
So, return 2.

Example 2:

Input : arr[ ] = {20 40 50}, K = 20 
        and X = 70
Output :  -1 */

int search(int arr[], int n, int x, int k)
{
    int i = 0;
    if(n == 1){
        if(arr[i] == x) return 0;
    }
    	while(i  <n){
    	    if(i == 0){
    	        if(k == abs(arr[i] - arr[i-1])  && arr[i] == x){
    	            return i;
    	        }
    	    }else if(i > 0 && i < n-1 && (k == abs(arr[i] - arr[i-1]) || abs(arr[i] - arr[i+1])) && arr[i] == x){
    	        return i;
    	        
    	    }else{
    	        if(abs(arr[i] - arr[i-1]) &&  arr[i] == x){
    	            return i;
    	        }
    	    }
    	    i++;
    	}
    	return -1;
}    	
