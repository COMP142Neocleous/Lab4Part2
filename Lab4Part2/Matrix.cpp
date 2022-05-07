/** \file Matrix.h
* \brief Implementation file of a small matrix library
* \details Implementation of functions to a matrix library
* \author Andreas Neocleous
* \date 06/05/2022
*/

//Libraries to use 
#include <iostream>
#include <cassert>
using namespace std;

//Header file to use
#include "Matrix.h"

/**
* Function <code>sumOfRow</code> sums elements of a specific row element of a matrix
* 
* @param mat The matrix which elements will be summed
* @param row The row of the matrix to sum it's elements
* @param maxRow The maximum row index
* @return Returns the sum of the row elements
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow)
{
	assert(row >= 0 && row < maxRow);

	double sum = 0;

	for (int i = 0; i < MAX_COL; i++)
	{
		sum += mat[row][i];
	}

	return sum;
}

/**
* Function <code>sumOfCol</code> sums elements of a specific column element of a matrix
*
* @param mat The matrix which elements will be summed
* @param column The column of the matrix to sum it's elements
* @param maxRow The maximum row index
* @return Returns the sum of the column elements
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow)
{
	assert(column >= 0 && column < MAX_COL);

	double sum = 0;

	for (int i = 0; i < maxRow; i++)
	{
		sum += mat[i][column];
	}

	return sum;
}

/**
* Function <code>fillWithRandomNum</code> fills a matrix with random numbers in range of [0,100]
*
* @param mat The matrix to be filled
* @param maxRow The maximum row index
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			mat[i][j] = rand()%100;
		}
	}
}

/**
* Function <code>printMatrix</code> sums elements of a specific row element of a matrix
*
* @param mat The matrix to be printed
* @param maxRow The maximum row index
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow)
{
	for (int i = 0; i < maxRow; i++)
	{
		cout << "\n[";
		for (int j = 0; j < MAX_COL; j++)
		{
			if (j==MAX_COL-1)
				cout << mat[i][j];
			else
				cout << mat[i][j] << ",";
		}
		cout << "]\n";
	}
}

/**
* Function <code>fillMatrix</code> sums elements of a specific row element of a matrix
*
* @param mat The matrix to be filled
* @param maxRow The maximum row index
*/
void fillMatrix(double mat[][MAX_COL], const int maxRow)
{
	double filled;

	for (int i = 0; i < maxRow; i++)
	{
		for (int j = 0; j < MAX_COL; j++)
		{
			cout << "\nEnter element in position [" << i << "," << j << "]: ";
			cin >> filled;
			mat[i][j] = filled;
		}
	}
}
