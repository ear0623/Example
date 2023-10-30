#include <iostream>

using namespace std;

void DrawMap(char Text1, char Text2);

int main()
{
	
	DrawMap('1', '0');
	DrawMap('1', '1');

}

void DrawMap(char Text1, char Text2)
{
	Text1 = '1';
	Text2 = '2';

	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (X == 0 || Y == 0 || X == 9 || Y == 9 || X == 4 || Y == 4)
			{
				cout << Text1;
			}
			else
			{
				cout << Text2;
			}

		}
		cout << endl;

	}
}
