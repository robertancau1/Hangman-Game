#include <iostream>
#include <string>
#include <ctime>

using namespace std;

string words[20] = { "academy" ,"bedroom","diamond","drawing","extreme","helping","morning","poverty","quality","special","success","website","weekend","writing","anxiety","protect","install","healthy","destroy","musical" };
char one1 = '-', two1 = '-', three1 = '-', four1 = '-', five1 = '-', six1 = '-', seven1 = '-';

void table()
{
	cout << "   H A N G M A N " << endl;
	cout << "-------------------" << endl;
	cout << "|  *************  |" << endl;
	cout << "|  + + + + + + +  |" << endl;
	cout << "|  #############  |" << endl;
	cout << "|  -------------  |" << endl;
	cout << "|  " << one1 << " " << two1 << " " << three1 << " " << four1 << " " << five1 << " " << six1 << " " << seven1 << "  |" << endl;
	cout << "|  #############  |" << endl;
	cout << "|  ^^^^^^^^^^^^^  |" << endl;
	cout << "|  |||||||||||||  |" << endl;
	cout << "-------------------" << endl;
	return;
}
void mainalg()
{
	srand((unsigned)time(0));
	int random = rand() % 10;
	string word = words[random], finalword;
	two1 = word[1];
	five1 = word[4];
	table();
	char input;
	int lives = 10;
	while (lives != 0)
	{
		cout << "If you know the word press 1 and type it,else enter your letter pick: ";
		cin >> input;
		if (input == '1')
		{
			cout << "Enter the word: ";
			cin >> finalword;
			if (finalword == word)
			{
				system("cls");
				cout << "   H A N G M A N " << endl;
				cout << "-------------------" << endl;
				cout << "|  *************  |" << endl;
				cout << "|  + + + + + + +  |" << endl;
				cout << "|  #############  |" << endl;
				cout << "|  -------------  |" << endl;
				cout << "|  " << word[0] << " " << word[1] << " " << word[2] << " " << word[3] << " " << word[4] << " " << word[5] << " " << word[6] << "  |" << endl;
				cout << "|  #############  |" << endl;
				cout << "|  ^^^^^^^^^^^^^  |" << endl;
				cout << "|  |||||||||||||  |" << endl;
				cout << "-------------------" << endl;
				cout << "                              " << endl;
				cout << "You Won!" << endl;
				break;
			}
			else
			{
				system("cls");
				cout << "   H A N G M A N " << endl;
				cout << "-------------------" << endl;
				cout << "|  *************  |" << endl;
				cout << "|  + + + + + + +  |" << endl;
				cout << "|  #############  |" << endl;
				cout << "|  -------------  |" << endl;
				cout << "|  " << word[0] << " " << word[1] << " " << word[2] << " " << word[3] << " " << word[4] << " " << word[5] << " " << word[6] << "  |" << endl;
				cout << "|  #############  |" << endl;
				cout << "|  ^^^^^^^^^^^^^  |" << endl;
				cout << "|  |||||||||||||  |" << endl;
				cout << "-------------------" << endl;
				cout << "                              " << endl;
				cout << "You lost";
				break;
			}
		}
		if (word[0] == input)
		{
			one1 = word[0];
			system("cls");
			table();
		}
		if (word[1] == input)
		{
			two1 = word[1];
			system("cls");
			table();
		}
		if (word[2] == input)
		{
			three1 = word[2];
			system("cls");
			table();
		}
		if (word[3] == input)
		{
			four1 = word[3];
			system("cls");
			table();
		}
		if (word[4] == input)
		{
			five1 = word[4];
			system("cls");
			table();
		}
		if (word[5] == input)
		{
			six1 = word[5];
			system("cls");
			table();
		}
		if (word[6] == input)
		{
			seven1 = word[6];
			system("cls");
			table();
		}
		if (input != word[0] && input != word[1] && input != word[2] && input != word[3] && input != word[4] && input != word[5] && input != word[6])
		{
			cout << "Wrong Pick!" << endl;
			lives--;
		}
		if (one1 == word[0] && two1 == word[1] && three1 == word[2] && four1 == word[3] && five1 == word[4] && six1 == word[5] && seven1 == word[6])
		{
			system("cls");
			table();
			cout << "You Won!" << endl;
			break;
		}
		if (lives == 0)
		{
			system("cls");
			cout << "   H A N G M A N " << endl;
			cout << "-------------------" << endl;
			cout << "|  *************  |" << endl;
			cout << "|  + + + + + + +  |" << endl;
			cout << "|  #############  |" << endl;
			cout << "|  -------------  |" << endl;
			cout << "|  " << word[0] << " " << word[1] << " " << word[2] << " " << word[3] << " " << word[4] << " " << word[5] << " " << word[6] << "  |" << endl;
			cout << "|  #############  |" << endl;
			cout << "|  ^^^^^^^^^^^^^  |" << endl;
			cout << "|  |||||||||||||  |" << endl;
			cout << "-------------------" << endl;
			cout << "                              " << endl;
			cout << "You lost";
		}
	}
	return;
}
int main()
{
	cout << "----------------------------" << endl;
	cout << "Welcome to the Hangman game!" << endl;
	cout << "----------------------------" << endl;
	cout << "                            " << endl;
	mainalg();
}

