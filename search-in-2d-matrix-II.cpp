#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        int r = 0, c = n - 1;
        while(r < m && c >= 0) {
            if(target == mat[r][c]) {
                return true;
            } else if(target < mat[r][c]) {
                c--;
            } else {
                r++;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 4, 7, 11},
                                  {2, 5, 8, 12},
                                  {3, 6, 9, 16},
                                  {10, 13, 14, 17},
                                  {18, 21, 23, 26}};
    int target = 5;
    Solution sol = Solution();
    sol.searchMatrix(matrix, target) ? cout << "Found" : cout << "Not Found";
    return 0;
}