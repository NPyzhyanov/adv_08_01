#include <iostream>
#include <vector>
#include <memory>

#include "triagonal_matrix.h"

int main()
{
    auto down = std::vector<double> { -4.0, 5.0 };
    auto upper = std::vector<double> { 14.0, 8.0 };
    auto middle = std::vector<double> { 3.0, 1.0, 7.0 };

    auto matrix = std::make_unique<triagonal_matrix>(down, upper, middle);

    std::cout << "matrix:\n";
    matrix->print();
    std::cout << std::endl;

    auto matrix_clone = matrix->clone();

    std::cout << "matrix_clone:\n";
    matrix_clone->print();
    std::cout << std::endl;

    return 0;
}
