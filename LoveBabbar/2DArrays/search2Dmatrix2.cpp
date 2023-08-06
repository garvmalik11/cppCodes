class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;

        int element = matrix[rowIndex][colIndex];

        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];

            if(element == target){
                return 1;
            }
            else if(target < element){
                colIndex--;
            }
            else{
                rowIndex++;
            }
        } 
        return 0;
    }
};