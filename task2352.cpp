class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> map;
        vector<int> tmp = {};
        int size = grid[0].size();
        int res = 0;
        for( auto it = grid.begin(); it < grid.end(); it++){
            map[*it] += 1;
        }
        for( int i = 0; i < size; i++ ){
            tmp.clear();
            for( int j = 0; j < size; j++ ){
                tmp.push_back(grid[j][i]);
            }
            res += map[tmp];
        }
        return res;
    }
};
