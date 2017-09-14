// Anti-clockwise Matrix Rotation 90 degress in place 
// Author - JayaPrakash
// September 13, Wednesday, Time : 12:42 am;
// Please go through the ReadMe file attached.


#include <stdio.h>
#define matrixsize 4

void display_Matrix(int matrix[matrixsize][matrixsize]);

// function to rotate a N x N matrix by 90 degrees in anti-clockwise direction

void rotate_Matrix(int matrix[][matrixsize])
{
    
	for (int first_Matrix = 0; first_Matrix < matrixsize / 2; first_Matrix++)
	{
		for (int second_Matrix = first_Matrix; second_Matrix < matrixsize-first_Matrix-1; second_Matrix++)
		{
			int temp_Virable = matrix[first_Matrix][second_Matrix];

			matrix[first_Matrix][second_Matrix] = matrix[second_Matrix][matrixsize-1-first_Matrix];

			matrix[second_Matrix][matrixsize-1-first_Matrix] = matrix[matrixsize-1-first_Matrix][matrixsize-1-second_Matrix];

			matrix[matrixsize-1-first_Matrix][matrixsize-1-second_Matrix] = matrix[matrixsize-1-second_Matrix][first_Matrix];

			matrix[matrixsize-1-second_Matrix][first_Matrix] = temp_Virable;
		}
	}
}

// Function to display the result of the Matrix Rotation

void display_Matrix(int matrix[matrixsize][matrixsize])
{
	for (int first_Index = 0; first_Index < matrixsize; first_Index++)
	{
		for (int second_Index = 0; second_Index < matrixsize; second_Index++)
			
			printf("%d ", matrix[first_Index][second_Index]);

		printf("\n");
	}
	printf("\n");
}

// Program Execution Starts from Main
// Where all the function calling is doing from main

int main()
{
	int matrix[matrixsize][matrixsize] =
	{
		{12, 13, 14, 15},
		{16, 17, 18, 19},
		{23, 22, 21, 20},
		{24, 25, 26, 27}
	};
	
	printf("Printing matrix >>>\n");
        display_Matrix(matrix); 
	rotate_Matrix(matrix);
	printf("Printing matrix in Anti-clockwise>>>\n");
	display_Matrix(matrix);

	return 0;
}


