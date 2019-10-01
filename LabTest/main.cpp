#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	char character;
	float numberFloat;
	int numberInt;
	bool booleanT = true;
	bool booleanF = false;
	int * numberIntptr = &numberInt;
	cout << "Please type in an integer" << endl;
	cin >> numberInt;
	cout << "Now, type a character" << endl;
	cin >> character;
	cout << "Next, type in a floating point number" << endl;
	cin >> numberFloat;
	cout << "You typed in the following items: " << numberInt << ", " << character << ", "  << numberFloat  << endl;
	cout << "The position of the integer you entered is " << numberIntptr << endl;
	cout << "The position of the pointer to that integer you entered is " << &numberIntptr << endl;
	cout << "This is the dereference operation over a pointer: " << *numberIntptr << endl;
	cout << "A boolean looks like this " << booleanT << " or like " << booleanF << endl;
	return 0;
}
