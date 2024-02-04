#include <iostream>
#include <vector>
#include <climits>


int maxSumOfDiagonals(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    int maxSum = INT_MIN;

    // Calculate sum of diagonals from top left to bottom right
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i + j < n) {
                sum += matrix[i + j][j];
            }
        }
        maxSum = std::max(maxSum, sum);
    }

    // Calculate sum of diagonals from top right to bottom left
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i + j < n) {
                sum += matrix[j][n - 1 - (i + j)];
            }
        }
        maxSum = std::max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int maxSum = maxSumOfDiagonals(matrix);
    std::cout << maxSum << std::endl;

    return 0;
}
