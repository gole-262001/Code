class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    string str = S;
	    int i = 0 , j = S.size()-1;
	    while(i < j){
	        swap(S[i],S[j]);
	        i++;
	        j--;
	    }
	    	if(str == S) return 1;
	        
	        return 0;
	}
;

};
