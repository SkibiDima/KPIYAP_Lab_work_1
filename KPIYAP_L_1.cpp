
#include <iostream>
#include <limits>


using namespace std;

void encryption(char* string)
{
	cout << "Encryption:" << endl;
	for (int i = 0; i < strlen(string); i++)
		cout << char(int(string[i]) + 1);
}

char* getString(char* string, const int MAX_STRING_LENGHT) {

	char c ;
	int i;

	cout << "Please, enter the string:" << endl;
	for (i = 0; i < MAX_STRING_LENGHT; i++)
	{
		cin.unsetf(ios::skipws);
		cin >> c;

		if (c == '\n')
			break;
		else
			string[i] = c;
		
	}
	string[i] = '\0';

	if (i == MAX_STRING_LENGHT && cin.peek() != '\n')
		cout << "Your string is too big! It will be cut off" << endl;

	return string;
}

int main()
{
	const int MAX_STRING_LENGHT = 80;

	char* string;

	string = (char*)malloc(MAX_STRING_LENGHT + 1 * sizeof(char));
	getString(string, MAX_STRING_LENGHT);
	encryption(string);

	return 0;
}

