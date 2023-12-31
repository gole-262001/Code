/*Given an NxN matrix Mat. Sort all elements of the matrix.

Example 1:

Input:
N=4
Mat=[[10,20,30,40],
[15,25,35,45] 
[27,29,37,48] 
[32,33,39,50]]
Output:
10 15 20 25 
27 29 30 32
33 35 37 39
40 45 48 50
Explanation:
Sorting the matrix gives this result.*/

// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        
vector<int> vec;
int k = 0;
for(int i =0 ; i < N; i++)
{
    for(int j = 0; j < N; j++)
    {
        vec.push_back(Mat[i][j]);
    }
}
        
        sort(vec.begin() , vec.end());
         
       for(int i =0 ; i < N; i++)
{
    for(int j = 0; j < N; j++)
    {
        Mat[i][j] = vec[k];
        k++;
    }
}
        
        return Mat;
        
    }
};
