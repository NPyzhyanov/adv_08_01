#ifndef TRIAGONAL_MATRIX_H
#define TRIAGONAL_MATRIX_H

class triagonal_matrix
{
public:
    triagonal_matrix(
        const std::vector<double>& down,
        const std::vector<double>& upper,
        const std::vector<double>& middle) :
        m_down { down }, m_upper { upper }, m_middle { middle }
    {}
    ~triagonal_matrix();

    void print();

    std::unique_ptr<triagonal_matrix> clone();

private:
    std::vector<double> m_down;
    std::vector<double> m_upper;
    std::vector<double> m_middle;

};

#endif // TRIAGONAL_MATRIX_H
