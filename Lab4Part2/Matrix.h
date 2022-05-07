/** \file Matrix.h
* \brief Header file for small matrix library
* \details Headers of functions to a matrix library
* \author Andreas Neocleous
* \date 06/05/2022
*/


#ifndef MATRIX_H
#define MATRIX_H

//Global constants
const int MAX_COL = 2;

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);
void fillMatrix(double mat[][MAX_COL], const int maxRow);
double findMaxElement(const double mat[][MAX_COL], const int maxRow);


#endif // !MATRIX_H

