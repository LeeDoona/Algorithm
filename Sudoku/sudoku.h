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

	int checkBox(int val, int x, int y);
	int checkLow(int val, int x, int y);
	int checkCol(int val, int x, int y);

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
};

int sudoku::checkBox(int val, int x, int y){	int i, j;	for(i=y-2; i<=y+2; i++){		for(j=x-2; j<=x+2; j++){			if(y%3==i%3 && x%3==j%3 && gameBoard[i][j]==val)				return false;		}	}	return true;}int sudoku::checkLow(int val, int x, int y){	int i;

	for(i=0; i<9; i++){
		if(gameBoard[y][i] == val) return false;
	}
	return true;}int sudoku::checkCol(int val, int x, int y){	int i;

	for(i=0; i<9; i++){
		if(gameBoard[i][x] == val) return false;
	}
	return true;
}void sudoku::printSolution(){	int i, j;	for(i=0; i<9; i++){		for(j=0; j<9; j++){			printf("%d ", solution[i][j]);		}		printf("\n");	}}void sudoku::solveSudoku(int solveType){	printf("solve!");}