#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:4101)			//didn't use variable
using namespace std;


#ifndef __SUDOKU_H__
#define __SUDOKU_H__

enum solveType {BruteForce, BFDancingLink, Genetic};
enum exception {InputFileError};

static int num[11] = {0,1,2,3,4,5,6,7,8,9};

class sudoku {
private:
	bool isTrue;
	int mark[9][9];
	int solution[9][9];

	bool checkBox(int val, int a, int b);
	bool checkLow(int val, int a, int b);
	bool checkCol(int val, int a, int b);

public:
	int gameBoard[9][9];

	sudoku() {}
	sudoku(bool _isTrue, bool _mark, bool _solution) {
		int i, j;
		isTrue = _isTrue;

		if(_mark) for(i=0; i<9; i++) for(j=0; j<9; j++)
			mark[i][j] = NULL;
		if(_solution) for(i=0; i<9; i++) for(j=0; j<9; j++)
			solution[i][j] = NULL;

	}
	void printSolution();
	void solveSudoku(int solveType);

	//for brute force---------------------------------------------
	void bruteForceSolution();
	//------------------------------------------------------------
};

#endif

//for dancing link------------------------------------------------
//----------------------------------------------------------------

//for genetic-----------------------------------------------------
//----------------------------------------------------------------