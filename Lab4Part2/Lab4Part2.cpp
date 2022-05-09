/** \file Lab4Part2.cpp
* \brief A small matrix library
* \details Implements the menu of a matrix library
* \author Andreas Neocleous
* \date 06/05/2022
*/

//Libraries to use 
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <ctime>
using namespace std;

//Header file to use
#include "Matrix.h"

/**
* This is the driver of the program that presents a menu
* 
* @return Returns <code>0</code>
*/
int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    const int MAX_ROWS = 3;

    double matrix[MAX_ROWS][MAX_COL] = { 0 };
    int choice, row_index, col_index;

    do {
        cout << "\n1. Sum of row"
            << "\n2. Sum of column"
            << "\n3. Fill with random numbers"
            << "\n4. Print the matrix"
            << "\n5. Fill matrix"
            << "\n6. Fill maximum element"
            << "\n7. Find minimum element"
            << "\n8. Is it a square matrix?"
            << "\n9. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            do {
                cout << "\nEnter row you want to sum: ";
                cin >> row_index;
                if (row_index < 0 || row_index >= MAX_ROWS)
                    cout << "Invalid input!!";
            } while (row_index < 0 || row_index >= MAX_ROWS);
            cout<<"\nSum of row "<< row_index<<" is: "<< sumOfRow(matrix, row_index, MAX_ROWS);
            break;
        case 2:
            do {
                cout << "\nEnter row you want to sum: ";
                cin >> col_index;
                if (col_index < 0 || col_index >= MAX_COL)
                    cout << "Invalid input!!";
            } while (col_index < 0 || col_index >= MAX_COL);
            cout << "\nSum of column " << col_index << " is: " << sumOfCol(matrix, col_index, MAX_ROWS);
            break;
        case 3:
            fillWithRandomNum(matrix, MAX_ROWS);
            cout << "\nMatrix elements are filled randomly in range of [0-100]!! ";
            break;
        case 4:
            printMatrix(matrix, MAX_ROWS);
            break;
        case 5:
            fillMatrix(matrix, MAX_ROWS);
            break;
        case 6:
            cout<< "\nMaximum element of the matrix is: "<<findMaxElement(matrix, MAX_ROWS);
            break;
        case 7:
            cout << "\nMinimum element of the matrix is: " << findMinElement(matrix, MAX_ROWS);
            break;
        case 8:
            cout << "\nIs it a square matrix?";
            if (isSquare(matrix, MAX_ROWS))
                cout << "\nYES!! It is a square matrix";
            else
                cout << "\nNo, it isn't a square matrix";
            break;
        case 9:
            cout << "\nHave a nice day!!";
            break;
        default:
            cerr << "\nWrong choice!!";
        }
    } while (choice != 9);
    

    return 0;
}
