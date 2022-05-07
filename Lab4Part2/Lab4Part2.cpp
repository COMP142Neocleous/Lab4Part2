/** \file Lab4Part2.cpp
* \brief A small programm that uses a matrix library
* \details Implements the use of a matrix library
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
    int choice;

    do {
        cout << "\n1. Sum of row"
            << "\n2. Sum of column"
            << "\n3. Fill with random numbers"
            << "\n4. Print the matrix"
            << "\n5. Fill matrix"
            << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n1 called";
            break;
        case 2:
            cout << "\n2 called";
            break;
        case 3:
            cout << "\n3 called";
            break;
        case 4:
            printMatrix(matrix, MAX_ROWS);
            break;
        case 5:
            fillMatrix(matrix, MAX_ROWS);
            break;
        case 6:
            cout << "\nHave a nice day!!";
            break;
        default:
            cerr << "\nWrong choice!!";
        }



    } while (choice != 6);
    



    return 0;
}
