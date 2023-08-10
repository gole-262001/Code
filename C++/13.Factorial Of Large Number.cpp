/*
    Time Complexity: O(N*M)
    Space Complexity: O(M)
 
    Where N is the given integer and M is the size of the result array.
*/

void helper(vector<int> &result, int x)
{
   
    int carryOver = 0;

    for (int i = 0; i < result.size(); i++)
    {
        int value = result[i] * x + carryOver;

        result[i] = value % 10;

     
        carryOver = value / 10;
    }

 
    while (carryOver != 0)
    {
        
        result.push_back(carryOver % 10);

       
        carryOver = carryOver / 10;
    }
}

string calculateFactorial(int n)
{
    vector<int> result;


    result.push_back(1);


    for (int x = 2; x <= n; x++)
    {
       
        helper(result, x);
    }

    
    string ans = "";

    for (int i = result.size() - 1; i >= 0; i--)
    {
        ans.push_back((char)(result[i] + '0'));
    }

    return ans;
}
