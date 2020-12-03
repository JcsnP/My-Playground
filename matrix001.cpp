#include <bits/stdc++.h>

int main() {
    int row, col;
    int m1[100][100], m2[100][100];
    
    std::cout << "Please input row (m): ";
    std::cin >> row;
    
    std::cout << "Please input column (n): ";
    std::cin >> col;
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << "Matrix 1 [" << i+1 << "][" << j+1 << "]: ";
            std::cin >> m1[i][j];
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << "Matrix 2 [" << i+1 << "][" << j+1 << "]: ";
            std::cin >> m2[i][j];
        }
    }
    
    std::cout << "Matrix Addition" << std::endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << m1[i][j] + m2[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    
    std::cout << "Matrix Subtraction" << std::endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << m1[i][j] - m2[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}
