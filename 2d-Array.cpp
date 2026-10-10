#include<iostream>
#include<utility>
#include<string>
#include<vector>
using namespace std;

pair<int,int> linearSearch(int mat[][3], int rows, int cols, int key) {
    pair<int, int> result;
    for(int i = 0;i < rows;i++) {
        for(int j = 0;j < cols;j++) {
            if(mat[i][j] == key) {
                result.first = i;
                result.second = j;
                return result;
            }
        }
    }
    result.first = -1;
    result.second = -1;
    return result;
}

int maxRowSum(int mat[][3], int rows, int cols) {
    int maxRowSum = INT8_MIN;
    for(int i=0; i<rows; i++) {
        int rowSum = 0;
        for(int j=0; j<cols; j++) {
            rowSum += mat[i][j];
        }
        maxRowSum = max(rowSum, maxRowSum);
    }

    return maxRowSum;
}

int maxColSum(int mat[3][3], int rows, int cols) {
    int maxColSum = INT8_MIN;
    for(int j=0; j<cols; j++) {
        int colSum = 0;
        for(int i=0; i<rows; i++) {
            colSum += mat[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int diagonalSum(int mat[][4], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += mat[i][i];
        if(i != n-i-1) {
            sum += mat[i][n-i-1];
        }
    }

    return sum;
}

int main() {

    int matrix[4][4] = {{1,2,3,4},{5,6,7,8}, {9,10,11,12}, {13, 14, 15, 16}};
    int n = 4;
    cout << diagonalSum(matrix, n);
    // int matrix[3][3] = {{1,2,3},{4,5,6}, {7, 8, 9}};
    // int rows = 3;
    // int cols = 3;
    
    // cout << maxRowSum(matrix, rows, cols)<< endl;

    // cout << maxColSum(matrix, rows, cols);

    // pair<int, int> result = linearSearch(matrix, rows, cols, 34);
    // cout << result.first << " " << result.second;
    return 0;
}