
/*
Q3. Write a Matrix class. Allocate memory dynamically in parameterized constructor. Also write
parameter-less constructor. Write accept() and print() functions.
Also provide add(), subtract(), multiply() and transpose() function.
*/

#include <iostream>
using namespace std;

class Matrix
{
private:
    int **mat;
    int row;
    int col;

public:
    Matrix()
    {
    }
    Matrix(int row, int col) : row(row), col(col)
    {
        this->row = row;
        this->col = col;
        mat = new int *[row]; // 1D allocation
        for (int i = 0; i < row; i++)
            mat[i] = new int[col]; // 2D allocation
    }
    void accept()
    {
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
            {
                cout << "Enter Matrix : \n";
                cout << "mat[" << i << "]"
                     << "[" << j << "] : \t";
                cin >> mat[i][j];
            }
        cout << endl;
        cout << "*****************************" << endl;
    }
    void print()
    {
        cout << "Matrix is :" << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "mat[" << i << "]"
                     << "[" << j << "] : ";
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
        cout << "*****************************" << endl;
    }
    void add(Matrix m)
    {
        Matrix tot(row, col);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
            {
                tot.mat[i][j] = this->mat[i][j] + m.mat[i][j];
            }
        cout << "Addition matrix : \n";
        tot.print();
    }
    void subtract(Matrix m)
    {
        Matrix tot(row, col);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
            {
                tot.mat[i][j] = this->mat[i][j] - m.mat[i][j];
            }
        cout << "Subtraction matrix : \n";
        tot.print();
    }
    void multiply(Matrix m)
    {
        Matrix tot(row, col);
        if (row == m.col)
        {
            for (int i = 0; i < row; i++)
                for (int j = 0; j < m.col; j++)
                {
                    tot.mat[i][j] = 0;
                    for (int k = 0; k < m.col; k++)
                        tot.mat[i][j] += mat[i][j] * m.mat[k][j];
                }
            cout << "Multiplication matrix : \n";
            tot.print();
        }
        else
        {
            cout << "Multiplication is not possible." << endl;
            cout << "*****************************" << endl;
        }
    }
    void transpose()
    {

        Matrix res(col, row);
        for (int i = 0; i < col; i++)
            for (int j = 0; j < row; j++)
            {
                res.mat[i][j] = this->mat[j][i];
            }
        cout << "Transpose matrix of second matrix is: \n";
        res.print();
    }
};

int main()
{
    int row, col;
    cout << "Enter Matrix dimensions rows and columns : \n";
    cin >> row >> col;
    Matrix m1(row, col);
    m1.accept();

    cout<<"Enter Matrix dimensions rows and columns : \n";
    cin>>row>>col;
    Matrix m2(row, col);
    m2.accept();
    m1.print();
    m2.print();
    m1.add(m2);
    m1.subtract(m2);
    m1.multiply(m2);
    m1.transpose();
    return 0;
    cout << "Thank you..." << endl;
    cout << "*****************************" << endl;
}