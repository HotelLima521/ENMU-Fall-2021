// Lab1A
#include <iostream>

using namespace std;

/* Syntax errors were the following:
 *
 * Line 2 `include <stream>
 * Line 4 `using namespace std`
 * Line 24 `integer result = 5;`
 * Line 29 `cout < "This code has multiple syntax errors \n"`
 * Line 30 `cout << All the codes have been checked\n;`
 * Line 31 `cout < "Codes have been recompiled\n";
 * Line 32 `cout << "Final result has been calculated correctly.\n'`
 * Line 33 `cout << result= << result+ 3 << end;
 * Line 34 `count >> "Completed by [ENTER YOUR FULL NAME HERE.\n"
 * Line 36 return0;
 *
 * Basically the entire program has syntax errors. Below will be the corrections.
*/


int main()
{
	int result = 5;
/*
 * The program will produce 6lines of output on the screen as shown below on the sample output. If your output is different from sample output, then there may be logical error. Fix the logical error as well.In the line number 5, you need to make result=15according to sample output.So, recompile and run the program. You should name this project as Lab1A.
 */
	cout << "This code has multiple syntax errors.\n";
	cout << "All the codes have been checked.\n";
	cout << "Codes have been recompiled.\n";
	cout << "Final result has been calculated correctly.\n";
	cout << "Result= " << result * 3 << endl;
	cout << "Completed by Derek White.\n";
	
	return 0;
}
