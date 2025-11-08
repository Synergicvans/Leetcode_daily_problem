class Solution {
public:

    void transpose(vector<vector<int>>& matrix){
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void reverseRows(vector<vector<int>>& matrix){
    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);  
    reverseRows(matrix);
    }
};


// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33 

// 30 20 10 00
// 31 21 11 01
// 32 22 12 02
// 33 23 13 03