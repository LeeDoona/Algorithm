#include <iostream>
#include <stdio.h>
using namespace std;

enum solveType {BruteForce, BFDancingLink, Genetic};
enum exception {InputFileError};

int num[10] = {0,1,2,3,4,5,6,7,8,9};

class sudoku {
private:
	bool isTrue;
	int mark[9][9];
	int solution[9][9];

	int checkBox(int val);
	int checkLow(int val);
	int checkCol(int val);

public:
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
};

int sudoku::checkBox(int val){	return 0;}int sudoku::checkLow(int val){	return 0;}int sudoku::checkCol(int val){	return 0;}void sudoku::printSolution(){}void sudoku::solveSudoku(int solveType){	printf("solve!");}