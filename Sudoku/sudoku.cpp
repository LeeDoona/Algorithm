#include "sudoku.h"

bool sudoku::checkBox(int val, int a, int b){
	int i, j;

	for(i=3*(a/3); i<=3*(a/3)+2; i++){
		for(j=3*(b/3); j<=3*(b/3)+2; j++){
			if(solution[i][j]==val)	return false;
		}
	}
	return true;
}

bool sudoku::checkLow(int val, int a, int b){
	int i;

	for(i=0; i<9; i++){
		if(solution[a][i] == val) return false;
	}
	return true;
}

bool sudoku::checkCol(int val, int a, int b){
	int i;

	for(i=0; i<9; i++){
		if(solution[i][b] == val) return false;
	}
	return true;

}

void sudoku::printSolution(){
	int i, j;

	if(isTrue){
		for(i=0; i<9; i++){
			for(j=0; j<9; j++){
				printf("%d ", solution[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}else{
		printf("We don't have no solution!!\n");
	}
}

void sudoku::solveSudoku(int solveType){
	switch(solveType){

	case BruteForce:
		bruteForceSolution();
		break;

	case BFDancingLink:
		break;

	case Genetic:
		break;

	}
}