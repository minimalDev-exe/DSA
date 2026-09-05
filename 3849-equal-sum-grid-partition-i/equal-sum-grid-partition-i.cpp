class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<long long>sumRow(m);
        for(int i = 0; i < m; i++) {
            sumRow[i] = accumulate(grid[i].begin(), grid[i].end(), 0LL);
        }

        long long sum = accumulate(sumRow.begin(), sumRow.end(), 0LL);

        long long prefSum = 0;
        for(int i=0; i<sumRow.size()-1; i++){
            prefSum+=sumRow[i];
            if(prefSum == sum - prefSum) return true;
        }

        vector<long long>sumCol(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                sumCol[i] += grid[j][i];
            }
        }
        prefSum = 0;
        for(int i=0; i<sumCol.size()-1; i++){
            prefSum+=sumCol[i];
            if(prefSum == sum - prefSum) return true;
        }
        return false;
    }
};