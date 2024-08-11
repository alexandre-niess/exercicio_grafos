#include "Matrix.h"

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols) {
    matrix.resize(rows, std::vector<int>(cols, 0));
}

void Matrix::set(int row, int col, int value) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        matrix[row][col] = value;
    }
}

bool Matrix::find(int value) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == value) {
                return true;
            }
        }
    }
    return false;
}

void Matrix::removeK(int k) {
    int removed = 0;
    for (int i = 0; i < rows && removed < k; ++i) {
        for (int j = 0; j < cols && removed < k; ++j) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = 0;
                ++removed;
            }
        }
    }
}
