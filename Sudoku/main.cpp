#include "sudoku.h"

int main()
{
	int i, j, k;
	int testNum;

	FILE *inFile = fopen("input.txt", "r");
	fscanf(inFile, "%d", &testNum);

	try
	{
		if(inFile == NULL) throw InputFileError;
	}catch(int InputFileError) {
		printf("input file error\n");
		return 0;
	}

	for(i=0; i<testNum; i++) {

		sudoku solver(true, true, true);

		for (j = 0; j < 9; j++){
			for (k = 0; k < 9; k++){
				fscanf(inFile, "%d ", &solver.gameBoard[j][k]);
			}
		}

		//solver.solveSudoku(BruteForce);
	}

	fclose(inFile);
	return 0;
}