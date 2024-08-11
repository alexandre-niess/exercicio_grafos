#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
public:
    Matrix(int rows, int cols);
    void set(int row, int col, int value);
    bool find(int value);
    void removeK(int k);

private:
    int rows, cols;
    std::vector<std::vector<int>> matrix;
};

#endif // MATRIX_H
