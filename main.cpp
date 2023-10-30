#include <iostream>

using namespace std;

void DrawMap(char Text1, char Text2);

int main()
{
	
	DrawMap('1', '0');
	

}

void DrawMap(char Text1, char Text2)
{
	char in_Text1;
	char in_Text2;
		in_Text1 = Text1;
		in_Text2 = Text2;

	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (X == 0 || Y == 0 || X == 9 || Y == 9 || X == 4 || Y == 4)
			{
				cout << in_Text1;
			}
			else
			{
				cout << in_Text2;
			}

		}
		cout << endl;

	}
}
