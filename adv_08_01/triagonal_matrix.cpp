#include <vector>
#include <memory>
#include <iostream>

#include "triagonal_matrix.h"

triagonal_matrix::~triagonal_matrix()
{
    std::cout << "destructor called\n";
}

void triagonal_matrix::print()
{
    int length = m_middle.size();

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j)
            {
                std::cout << m_middle.at(i);
            }
            else if (i == j - 1)
            {
                std::cout << m_upper.at(i);
            }
            else if (i == j + 1)
            {
                std::cout << m_down.at(j);
            }
            else
            {
                std::cout << "0";
            }
            std::cout << "\t";
        }
        std::cout << std::endl;
    }
}

std::unique_ptr<triagonal_matrix> triagonal_matrix::clone()
{
    auto matrix_clone = std::make_unique<triagonal_matrix> (m_down, m_upper, m_middle);
    return matrix_clone;
}

