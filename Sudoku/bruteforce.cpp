#include "sudoku.h"

void sudoku::bruteForceSolution(){
		int i, j, k;

		for(i=0; i<9; i++){
			for(j=0; j<9; ++j){
				if(gameBoard[i][j])	{
					solution[i][j] = gameBoard[i][j];
				}
			}
		}

		for(k=1; k<=9; k++){

			for(i=0; i<9; i++){
				for(j=0; j<9; j++){

					if(gameBoard[i][j]) continue;

					if(!checkBox(k,i,j) || !checkLow(k,i,j) || !checkCol(k,i,j)){
						if(i==8 && j==8 && k==9){
							isTrue = false;
							return;
						}
						continue;
					}else{
						solution[i][j] = k;
					}
				}
			}

		}
}