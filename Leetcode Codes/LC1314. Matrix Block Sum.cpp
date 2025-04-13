class Solution {
    public:
        vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
            int m, n;
            m = mat.size();
            n = mat[0].size();
            vector<vector<int>> answer(m, vector<int>(n, 0));

            for(int i=1; i<n; i++)
                mat[0][i] += mat[0][i-1];

            for(int i=1; i<m; i++)
                mat[i][0] += mat[i-1][0];

            for(int i=1; i<m; i++)
                for(int j=1; j<n; j++)
                    mat[i][j] = mat[i][j-1]+mat[i-1][j]+mat[i][j]-mat[i-1][j-1];

            for(int i=0; i<m; i++) {
                for(int j=0; j<n; j++) {
                    bool row=1, col=1;
                    int x1, y1, x2, y2;
                    x1 = max(0, i-K-1);
                    y1 = max(0, j-K-1);
                    x2 = min(m-1, i+K);
                    y2 = min(n-1, j+K);

                    if(i-K-1 < 0)
                        row = 0;

                    if(j-K-1 < 0)
                        col = 0;

                    answer[i][j] = mat[x2][y2]-(row*mat[x1][y2])-(col*mat[x2][y1])+(row*col*mat[x1][y1]);
                }
            }

            return answer;
        }
};
