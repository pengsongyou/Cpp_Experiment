//
//  CMatrix.cpp
//  Lab8
//
//  Created by Songyou Peng on 07/12/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include "CMatrix.h"
CMatrix::CMatrix()
{
    Matrix.clear();
}

CMatrix::CMatrix(int M)
{
    Matrix.clear();
    for (int i = 0; i < M; ++i)
    {
        //std::vector<int>::iterator ItCols = (*ItRow).begin();
        std::vector<int> ItCols;
        for (int j = 0; j < M; ++j)
        {
            if (i == j)
                ItCols.push_back(1);
            else
                ItCols.push_back(0);
        }
        Matrix.push_back(ItCols);;
    }
    
}

CMatrix::CMatrix(int M, int N)
{
    Matrix.clear();
//    std::vector<std::vector<int> >::iterator ItRow;

    for (int i = 0; i < M; ++i)
    {
        //std::vector<int>::iterator ItCols = (*ItRow).begin();
        std::vector<int> ItCols;
        for (int j = 0; j < N; ++j)
        {
            ItCols.push_back(rand()%100);
        }
        Matrix.push_back(ItCols);;
    }
}

std::vector<std::vector <int> >& CMatrix::GetMatrix()
{
    return Matrix;
}

void CMatrix::ShowMatrix()
{
    std::vector<std::vector<int> >::iterator rows_itr;
    for (rows_itr = Matrix.begin(); rows_itr != Matrix.end(); ++rows_itr)
    {
        std::vector<int>::iterator cols_itr = (*rows_itr).begin();
        for (; cols_itr != (*rows_itr).end(); ++cols_itr)
        {
            std::cout << *cols_itr << " ";
        }
        std::cout << std::endl;
    }
}

void CMatrix::CreateOwnMatrix()
{
    Matrix.clear();
    int M, N;
    std::cout << "What is the size of your matrix?\nheight = ";
    std::cin >> M;
    std::cout << "width = ";
    std::cin >> N;
    std::cout << std::endl;
    
    for (int i = 0; i < M; ++i)
    {
        std::cout << "Please input the elements of row " << i << std::endl;
        std::vector<int> EleRows;
        for (int j = 0; j < N; ++j)
        {
            int tmp;
            std::cin >> tmp;
            EleRows.push_back(tmp);
        }
        Matrix.push_back(EleRows);
    }
    
    std::cout<<"please enter the elements of matrix: \n";
    
}


CMatrix CMatrix::operator+ (const CMatrix& M)
{
    CMatrix C;
    //C.Matrix
    std::vector<std::vector<int> > B = M.Matrix;
    
    std::vector<std::vector<int> >::iterator it_row = B.begin();
    std::vector<std::vector<int> >::iterator it_row_this = this -> Matrix.begin();
    //Check dimension Matrix
    if (B.size() != this -> Matrix.size() || (*it_row_this).size() != (*it_row).size())
    {
        std::cout << "Dimension disagree" << std::endl;
        exit(0);
    }
    for (; it_row != B.end(); ++it_row, ++it_row_this)
    {
        std::vector<int> sum_row;//For sum
        std::vector<int>::iterator rowPt = (*it_row).begin();//For B traversing
        std::vector<int>::iterator rowPt_this = (*it_row_this).begin();//For B traversing
        
        
        for (; rowPt != (*it_row).end(); ++rowPt, ++rowPt_this)
        {
            sum_row.push_back(*rowPt + *rowPt_this);
        }
        C.Matrix.push_back(sum_row);
    }
    return C;
}


CMatrix CMatrix::operator- (const CMatrix& M)
{
    CMatrix C;
    //C.Matrix
    std::vector<std::vector<int> > B = M.Matrix;
    
    std::vector<std::vector<int> >::iterator it_row = B.begin();
    std::vector<std::vector<int> >::iterator it_row_this = this -> Matrix.begin();
    //Check dimension Matrix
    if (B.size() != this -> Matrix.size() || (*it_row_this).size() != (*it_row).size())
    {
        std::cout << "Dimension disagree" << std::endl;
        exit(0);
    }
    for (; it_row != B.end(); ++it_row, ++it_row_this)
    {
        std::vector<int> sum_row;//For sum
        std::vector<int>::iterator rowPt = (*it_row).begin();//For B traversing
        std::vector<int>::iterator rowPt_this = (*it_row_this).begin();//For B traversing
        
        
        for (; rowPt != (*it_row).end(); ++rowPt, ++rowPt_this)
        {
            sum_row.push_back(*rowPt_this - *rowPt);
        }
        C.Matrix.push_back(sum_row);
    }
    return C;
}

CMatrix CMatrix::operator* (const CMatrix& M)
{
    std::vector<std::vector<int> > B = M.Matrix;

    //Check dimension Matrix
    if ((*(this -> Matrix).begin()).size() != B.size()) // width of Matrix A should be equal to the height of Matrix B
    {
        std::cout << "Dimension disagree" << std::endl;
        exit(0);
    }
    
    //Rearrange B, store each column of B in a new matrix
    std::vector<std::vector<int> > B_new;

    for (int i = 0; i < (*B.begin()).size(); ++i)
    {
        std::vector<int> B_new_col;
        std::vector<std::vector<int> >::iterator it_num_row = B.begin();
        for (; it_num_row != B.end(); ++it_num_row)//traverse every elements in a column
        {
            std::vector<int>::iterator pointer_row = (*it_num_row).begin();//iterator of this row in B
            B_new_col.push_back(*(pointer_row + i));
        }
        B_new.push_back(B_new_col);
    }

    //New B creating finish. Now do the multiplication
    CMatrix C;//Matrix after multiplication
    std::vector<std::vector<int> >::iterator itA_num_row = this -> Matrix.begin();
    for (;itA_num_row != this->Matrix.end(); ++itA_num_row)
    {
        std::vector<int> C_row;//For the row of Matrix C
        std::vector<std::vector<int> >::iterator itB_num_col = B_new.begin();
        
        for (; itB_num_col != B_new.end(); ++itB_num_col)
        {
            std::vector<int>::iterator pointerA_row = (*itA_num_row).begin();//element in this row of A
            std::vector<int>::iterator pointerB_col = (*itB_num_col).begin();//element in the colomn of current new B
            
            int sum = 0;
            for (; pointerA_row != (*itA_num_row).end(); ++pointerA_row, ++pointerB_col)
            {
                sum += (*pointerA_row) * (* pointerB_col);
            }
            C_row.push_back(sum);
        }
        C.Matrix.push_back(C_row);
    }
    
    return C;
}

std::ostream &operator << (std::ostream & out, const CMatrix& Mat)
{
    
    std::vector<std::vector<int> >::iterator rows_itr;
    std::vector<std::vector<int> > M;
    M = Mat.Matrix;
    for (rows_itr = M.begin(); rows_itr != M.end(); ++rows_itr)
    {
        std::vector<int>::iterator cols_itr = (*rows_itr).begin();
        for (; cols_itr != (*rows_itr).end(); ++cols_itr)
        {
            out << *cols_itr << " ";
        }
        out << std::endl;
    }
    return out;
}

std::istream &operator >> (std::istream &in, CMatrix& Mat)
{

    int m, n;
    std::cout << "What is the size of your matrix?\nheight = ";
    std::cin >> m;
    std::cout << "width = ";
    std::cin >> n;
    std::cout << std::endl;
    
    //std::vector<std::vector<int> > M;
    std::vector<std::vector<int> > M = Mat.GetMatrix();
    for (int i = 0; i < m; ++i)
    {
        std::cout << "Please input the elements of row " << i << std::endl;
        std::vector<int> EleRows;
        for (int j = 0; j < n; ++j)
        {
            int tmp;
            in >> tmp;
            EleRows.push_back(tmp);
        }
        M.push_back(EleRows);
    }
    
    std::cout<<"please enter the elements of matrix: \n";
    return in;
}

void CMatrix::Transpose()
{
    std::vector<std::vector<int> > Mat;
    Mat = this -> Matrix; // Keep the original matrix first
    int M = Mat.size(); // height
    int N = (*Mat.begin()).size();

    this -> Matrix.clear();//Clear all the information of original matrix
    for (int i = 0; i < N; ++i)
    {
        std::vector<int> new_cols;
        std::vector<std::vector<int> >::iterator it_num_row = Mat.begin();
        for (int j = 0; j < M; ++j, ++it_num_row)
        {
            std::vector<int>::iterator pointer_row = (*it_num_row).begin();//iterator of this row in B
            new_cols.push_back(*(pointer_row + i));
        }
        this -> Matrix.push_back(new_cols);
    }


}

int CMatrix::trace()
{
    int tr = 0;
    
    std::vector<std::vector<int> >::iterator it_row = Matrix.begin();
    for (int i = 0; i < this -> Matrix.size(); ++i, ++it_row)
    {
        std::vector<int>::iterator it_col = (*it_row).begin();
        for (int j = 0; j < (*it_row).size(); ++j, ++it_col)
        {
            if (i == j) tr += *it_col;
        }
    }
    return tr;
}
