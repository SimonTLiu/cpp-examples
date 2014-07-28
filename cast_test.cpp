// const_cast
#include <iostream>
using namespace std;

void print (char * str)
{
	cout << str << '\n';
}

int main () {
	const char * c = "sample text";
	print ( const_cast<char *> (c) );
	print ( c ); // error: invalid conversion from 'const char*' to 'char*' [-fpermissive] 
	return 0;
}