#include <stdio.h>
#include <math.h>

#include "logic_tools.h"
#include "comp_tools.h"
#include "convert_tools.h"
#include "arithmetic_tools.h"

#define INPUT_VARIABLE_COUNT 3
#define OUTPUT_VARIABLE_COUNT 1

int TRUTH_TABLE_ROW_COUNT = (int)pow(2, INPUT_VARIABLE_COUNT);

void build_left_side(int truth_table[][INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT]){
	//build the left side of truth table for the different possibilities of the input variables
		for(int i = 0; i < TRUTH_TABLE_ROW_COUNT - 1; i = i + 1){

			int row[INPUT_VARIABLE_COUNT] = {0};
			int result[INPUT_VARIABLE_COUNT] = {0};

			//accessing the element of i-th row
			for(int j = 0; j < INPUT_VARIABLE_COUNT; j = j + 1){
				row[j] = truth_table[i][j];
			}

			//increment
			func_increment(row, result);

			//put into the next row: (i+1)-th row
			for(int j = 0; j < INPUT_VARIABLE_COUNT; j = j + 1){
				truth_table[i + 1][j] = result[j];
			}
		}
}

void build_right_side(int truth_table[][INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT]){
	//build the right side of truth table for the output variables
		for(int i = 0; i < TRUTH_TABLE_ROW_COUNT; i = i + 1){

			//for each output variable F1, F2, ...
			for(int j = 0; j < OUTPUT_VARIABLE_COUNT; j = j + 1){
				printf("output value for row# %d of F%d output variable:", i, j+1);
				//...
			}
		}
}

void to_minterm(int truth_table[][INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT]){
	for(int j = 0; j < OUTPUT_VARIABLE_COUNT; j = j + 1){
		printf("output variable F%d = ", j+1);
		for(int i = 0; i < TRUTH_TABLE_ROW_COUNT; i = i + 1){
			//to be completed!
		}
		printf("\n");
	}
}

int main(void) {

	setbuf(stdout, NULL);

	//Wrong! ^ operator in C/C++ is the bitwise XOR logic operator.
	//int TRUTH_TABLE_ROW_COUNT = 2^INPUT_VARIABLE_COUNT;

	int truth_table[TRUTH_TABLE_ROW_COUNT][INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT] = {0};

	const char variables[INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT] =  {'Z', 'Y', 'X', 'F'};

	build_left_side(truth_table);

	build_right_side(truth_table);

	///////////////////////////////////////////////////////////////////////////////
	//printing the header of truth table with variable names for inputs and outputs

	//printing the header for input variables
	for(int i = 0; i < INPUT_VARIABLE_COUNT; i = i + 1){
		printf("%c, ", variables[i]);
	}
	printf(" : ");

	//printing the header for output variables
	for(int i = INPUT_VARIABLE_COUNT; i < INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT; i = i + 1){
		printf("%c", variables[i]);
	}
	printf("\n");

	//printing the content of each row
    for(int i = 0; i < TRUTH_TABLE_ROW_COUNT; i = i + 1){

    	//printing the content of each row regarding the input variables
    	for(int j = 0; j < INPUT_VARIABLE_COUNT; j = j + 1){
			printf("%d, ", truth_table[i][j]);
		}
		printf(" : ");

		//printing the content of each row regarding the output variables
		for(int j = INPUT_VARIABLE_COUNT; j < INPUT_VARIABLE_COUNT + OUTPUT_VARIABLE_COUNT; j = j + 1){
			printf("%d", truth_table[i][j]);
		}
		printf("\n");
    }

    //for each output variable F1, F2, ...
    to_minterm();
	return 0;
}


