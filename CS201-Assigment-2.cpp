#include <iostream>

using namespace std;

showMatrix()
{
	int matrix[2][2] = {{8, -4} , {-6, 2}};
	cout << "The matrix is:\n";
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		cout << matrix[i][j];
	}
}

showTranspose()
{
	int transpose[2][2], row=2, column=2, i, j;
	int matrix[2][2] = {{8, -4} , {-6, 2}};
	
	cout << "\n";
	for(i=0; i<row; i++)
	for(j=0; j<row; j++)
	{
		transpose[j][i] = matrix[i][j];
	}
	cout << "Transpose of the matrix is:\n";
	for(i=0; i<column; i++)
	{
		for(j=0; j<row; j++)
		cout << transpose[i][j]<<" ";
	}
}

showAdjoint()
{
	int ch,A2[2][2] = {{8, -4}, {-6, 2}},AD2[2][2],C2[2][2];
	
	// Calculating the cofactors of a matrix of order 2x2
	C2[0][0] = A2[1][1]; C2[0][1]=-A2[1][0]; C2[1][0]=-A2[0][1]; C2[1][1]=A2[0][0];
	//Calculating adjoint of the matrix of order 2x2
	AD2[0][0]=C2[0][0]; AD2[0][1]=C2[1][0]; AD2[1][0]=C2[0][1]; AD2[1][1]=C2[1][1];
	cout << "Adjoint of A is:\n";
	cout <<"|\t" << AD2[0][0] << AD2[0][1] << "\t|\n|\t" << AD2[1][0] << "\t" << AD2[1][1] << "\t|\n";
}

showDeterminant()
{
	int determinantMatrix[2][2], determinant;
	int matrix[2][2] = {{8, -4} , {-6, 2}};
	
	determinant = ((matrix[0][0]*matrix[1][1]) - (matrix[0][1]*matrix[1][0]));
	
	cout << "\nThe determinant of 2*2 Matrix = " << determinant;
}

int main()
{
	 int choice = 0;
	 cout << "Please press 1 to display matrix and its transpose\n";
	 cout << "Please press 2 to get adjoint and determinant of matrix\n";
	 cout << "Press any other key to exit.";
	 cin >> choice;
	 
	 if(choice == 1)
	 {
	 	showMatrix();
	 	showTranspose();
	 }
	 else if(choice == 2)
	 {
	 	showAdjoint();
	 	showDeterminant();
	 }
	 else
	 
	 system("pause");
}
