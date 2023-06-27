//TicTacToe Recursion
#include <iostream>
#include <conio.h>
using namespace std;

#define VERTICAL_OFFSET		"\n\n\n\n\n"
#define HORIZONTAL_OFFSET	"\t\t\t\t\t"

void PrintField(char field[], const int n, char player);
void move(char field[], const int n, char player);
void check(char field[], const int n, char player);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n + 1] = "         ";
	PrintField(field, n, '0');
	cout << "Еще разочек?\nДа - Anykey\nНет - Escape" << endl;
	if (_getch() != 27)main();
}

void PrintField(char field[], const int n, char player)
{
	system("cls");
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if (i > 0)cout << "--- --- ---";
		cout << endl;
	}
	check(field, n, player);
}

void move(char field[], const int n, char player)
{
	cout << "Player " << player << endl;
	char key;
	do {
		key = _getch();
		if (key == 27)return;
		if (key < '1' || key > '9')cout << "Error: выход за пределы игрового поля!" << endl;
		else if (field[key - 49] != ' ')cout << "Error: клетка уже занята" << endl;
	} while (key < '1' || key > '9' || field[key - 49] != ' ');
	field[key - 49] = player;
	/*if (player == 'X')PrintField(field, n, '0');
	else PrintField(field, n, 'X');*/
	//PrintField(field, n, player == 'X' ? '0' : 'X');
	PrintField(field, n, player);
}

void check(char field[], const int n, char player)
{
	bool game_over = false;
	if (field[0] == field[4] && field[4] == field[8] && field[4] != ' ')game_over = true;
	if (field[2] == field[4] && field[4] == field[6] && field[4] != ' ')game_over = true;

	if (field[0] == field[1] && field[1] == field[2] && field[0] != ' ')game_over = true;
	if (field[3] == field[4] && field[4] == field[5] && field[3] != ' ')game_over = true;
	if (field[6] == field[7] && field[7] == field[8] && field[6] != ' ')game_over = true;

	if (field[0] == field[3] && field[3] == field[6] && field[0] != ' ')game_over = true;
	if (field[1] == field[4] && field[4] == field[7] && field[1] != ' ')game_over = true;
	if (field[2] == field[5] && field[5] == field[8] && field[2] != ' ')game_over = true;

	bool draw = true;
	for (int i = 0; i < n - 1; i++)
	{
		if (/*field[i] == field[i + 1] && */field[i] == ' ')
		{
			draw = false;
			break;
		}
	}

	if (draw)
	{
		cout << "Draw" << endl;
		return;
	}

	if (game_over)
	{
		cout << "Player " << player << " wins" << endl;
		return;
	}
	move(field, n, player == 'X' ? '0' : 'X');
}