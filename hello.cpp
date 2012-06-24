#include <iostream>  //for std, cout, cerr, <<
#include <cstdlib>   //for EXIT_SUCCESS, system

//This is a one-line comment.

/*
This is a multi-line comment.  It can go on and on.
Don't forget the closing asterisk slash.
*/

int main()
{
	std::cout << "Hello, world!\n";
	std::cerr << "This is an error message.\n";

    std::system("pause");
	return EXIT_SUCCESS;
}
