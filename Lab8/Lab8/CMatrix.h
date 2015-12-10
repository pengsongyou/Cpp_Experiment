//
//  CMatrix.h
//  Lab8
//
//  Created by Songyou Peng on 07/12/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//
#include <iostream>
#include <vector>

#ifndef CMatrix_h
#define CMatrix_h

class CMatrix
{
private:
    std::vector<std::vector <int> > Matrix;
public:
    CMatrix();
    CMatrix(int, int);
    CMatrix(int);
    std::vector<std::vector <int> >& GetMatrix();
    void ShowMatrix();
    void CreateOwnMatrix();
    void Transpose();
    int trace();
    CMatrix operator+ (const CMatrix& );
    CMatrix operator- (const CMatrix& );
    CMatrix operator* (const CMatrix& );
    friend std::ostream &operator << (std::ostream &, const CMatrix&);//Overload output << operator
    friend std::istream &operator << (std::istream &, const CMatrix&);//Overload input >> operator
};

#endif /* CMatrix_h */
