#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

/******************************************************************************
				Constants
******************************************************************************/
const int MAX_ROWS = 15;
const int MAX_COLS = 15;
const string INPUT_FILE_NAME = "squares.txt";

/******************************************************************************
				Function Prototypes
******************************************************************************/
void openFile (ifstream &inStream);
void closeFile (ifstream &inStream);
void closeFile (ifstream &inStream);
void readSquare (ifstream &inStream, int square[][MAX_COLS], int squareSize);
void printSquare (int square[][MAX_COLS], int squareSize);
bool isMagicSquare (int square[][MAX_COLS], int squareSize);
bool testHorizontal (int square[][MAX_COLS], int squareSize, int sum);
bool testVertical (int square[][MAX_COLS], int squareSize, int sum);
bool testDiagonal (int square[][MAX_COLS], int squareSize, int sum);

/******************************************************************************
 Function:     main

 Description:  Determines whether a square 2D array is a magic square

 Parameters:   None

 Returned:     Exit Status
******************************************************************************/
int main () {
	int square[MAX_ROWS][MAX_COLS];
	ifstream inStream;
	int numSquares;
	int squareSize;

	cout << "*** Magic Squares ***" << endl << endl;

	openFile (inStream);

	//inStream >> numSquares;

	//for (int i = 1; i <= numSquares; i++) {
	//	inStream >> squareSize;
	//	cout << "Square " << i << ":" << endl << endl;
	//	readSquare (inStream, square, squareSize);
	//	printSquare (square, squareSize);
	//	if (isMagicSquare (square, squareSize)) {
	//		cout << endl << "Magic Square" << endl << endl;
	//	}
	//	else {
	//		cout << endl << "Not a Magic Square" << endl << endl;
	//	}
	//}

	closeFile (inStream);

	return EXIT_SUCCESS;
}

/******************************************************************************
 Function:     openFile

 Description:  Open the file and make sure that it opened currectly. If it did
							 not open correctly, then quit the program.

 Parameters:   inputFile - input file stream

 Returned:     None
******************************************************************************/
void openFile (ifstream &inStream) {
	inStream.open (INPUT_FILE_NAME);
	if (inStream.fail ()) {
		cout << "Could not open file";
		exit (EXIT_FAILURE);
	}
}

/******************************************************************************
 Function:     closeFile

 Description:  Close the file.

 Parameters:   inputFile - input file stream

 Returned:     None
******************************************************************************/
void closeFile (ifstream &inStream) {
	inStream.close ();
}


/******************************************************************************
 Function:     readSquare

 Description:  Read the contents of the square from the file and place them
							 into the 2D array

 Parameters:   inputFile  - input file stream
							 square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square

 Returned:     None
******************************************************************************/
void readSquare (ifstream &inStream, int square[][MAX_COLS], int squareSize) {

}

/******************************************************************************
 Function:     printSquare

 Description:  Display the contents of the array to the screen. Each number
							 must be output in a width of 4.

 Parameters:   square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square

 Returned:     None
******************************************************************************/
void printSquare (int square[][MAX_COLS], int squareSize) {

}

/******************************************************************************
 Function:     isMagicSquare

 Description:  Calculates the sum of the first row, then uses this target sum
							 to call the functions testHorizontal, testDiagonal, and
							 testVertical. All rows, columns, and diagonals must add up to
							 the target sum

 Parameters:   square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square

 Returned:     true if all the sums are the same, false otherwise
******************************************************************************/
bool isMagicSquare (int square[][MAX_COLS], int squareSize) {
	bool bIsSquare = true;

	return bIsSquare;
}

/******************************************************************************
 Function:     testHorizontal

 Description:  Tests to see if all rows sum up to the target sum

 Parameters:   square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square
							 targetSum  - the sum of the first row

 Returned:     true if all the sum of all the rows are the same as the target
							 sum, false otherwise
******************************************************************************/
bool testHorizontal (int square[][MAX_COLS], int squareSize, int targetSum) {
	bool bIsEqual = true;

	return bIsEqual;
}

/******************************************************************************
 Function:     testVertical

 Description:  Tests to see if all columns sum up to the target sum

 Parameters:   square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square
							 targetSum  - the sum of the first row

 Returned:     true if all the sum of all the columns are the same as the
							 target sum, false otherwise
******************************************************************************/
bool testVertical (int square[][MAX_COLS], int squareSize, int targetSum) {
	bool bIsEqual = true;

	return bIsEqual;
}

/******************************************************************************
 Function:     testDiagonal

 Description:  Tests to see if the diagonal line sums up to the target sum

 Parameters:   square     - 2D array that will hold the contents of the sqauare
							 squareSize - the size of the square
							 targetSum  - the sum of the first row

 Returned:     true if all the sum of the diagonal is the same as the target
							 sum, false otherwise
******************************************************************************/
bool testDiagonal (int square[][MAX_COLS], int squareSize, int targetSum) {
	bool bIsEqual = true;

	return bIsEqual;
}