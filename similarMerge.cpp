#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> mergedSum(const vector<vector<int>>& matrix1,
                              const vector<vector<int>>& matrix2) {
    vector<vector<int>> result;
    
    // Find the number of rows to merge safely
    int minRows = min(matrix1.size(), matrix2.size());

    for (int i = 0; i < minRows; ++i) {
        // Determine the smaller row size to avoid out-of-boundI. s
        int minCols = min(matrix1[i].size(), matrix2[i].size());
        vector<int> mergedRow;

        for (int j = 0; j < minCols; ++j) {
            mergedRow.push_back(matrix1[i][j] + matrix2[i][j]);
        }

        result.push_back(mergedRow);
    }

    return result;
}

int main() {
    vector<vector<int>> arr1 = {{1, 1, 2}, {4, 5, 6}, {3, 8, 9}};
    vector<vector<int>> arr2 = {{3, 1, 1}, {1, 5, 2}, {0, 0, 0}};

    vector<vector<int>> merged = mergedSum(arr1, arr2);

    for (const auto& row : merged) {
        cout << "[";
        for (int j = 0; j < row.size(); ++j) {
            cout << row[j];
            if (j < row.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
