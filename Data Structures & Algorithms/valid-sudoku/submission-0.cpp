class Solution {
public:

    bool solve(int i, int j,vector<vector<char>>& arr){
        if(arr[i][j]=='.'){
            return true;
        }
        for(int l=0;l<9;l++){
            if(l!=j && arr[i][l]==arr[i][j]){
                return false;
            }
            if(l!=i && arr[l][j]==arr[i][j]){
                return false;
            }

        }
        int row = (i/3)*3;
        int col = (j/3)*3;
        for(int m = row;m<row+3;m++){
            for(int n = col;n<col+3;n++){
                if((m!=i || n!=j) && arr[i][j] == arr[m][n]){
                    return false;
                }
            }
        }
        return true;
    }


    bool isValidSudoku(vector<vector<char>>& arr) {
        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                if(!solve(i,j,arr)){
                    return false;
                }

            }
        }
        return true;  
    }
};
