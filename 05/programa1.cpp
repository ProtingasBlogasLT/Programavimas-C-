#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Lithuanian");

	int pinigai = 20, lsp = 0;	// lsp = 1 (turi), 0 (neturi)

	if (pinigai >= 1 || lsp == 1)
		cout << "Autobusu važiuoti gali\n";
	else
		cout << "Autobusu važiuoti negali\n";

	return 0;
}