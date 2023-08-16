/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]] */
 //Solution
class Solution {
public:
 void reverserow(vector<int> &row){
     int i = 0; 
     int j = row.size()-1;
     while(i < j){
         swap(row[i], row[j]);
         i++ , j--;
     }

 }
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j  <= i; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            reverserow(matrix[i]);
        }
    }
};
