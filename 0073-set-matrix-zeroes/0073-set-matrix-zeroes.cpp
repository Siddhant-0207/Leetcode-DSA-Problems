class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();         // number of rows
        int n = matrix[0].size();      // number of columns

        vector<int> row(m, 0);         // initialize with 0
        vector<int> column(n, 0);

        // First pass: mark the rows and columns that should be zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    column[j] = 1;
                }
            }
        }

        // Second pass: set elements to zero based on markers
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] || column[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
