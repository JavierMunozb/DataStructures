#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int arrayOfInts[] = { 1, 2, 3, 5, 4, 6, 7, 8};
	float arrayOfFloats[] = {12.4, 445.06, 32.4, 5555.55, 6666.66, 98.01};
	char arrayOfChars[] = {'a','b','c','d','e','f'};
	cout << arrayOfInts[4]; //<< ", " << arrayOfFloats[4] << ", " << arrayOfChars[3] << endl;
	return 0;
}
