#include <iostream>

using namespace std;

void DrawMap(const char Text1,const char Text2);
void Solution();
void Change();
void Solution_Teacher();

//배열
int Number[9][10] = {
	{1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,1},
	{1,0,0,0,1,0,0,0,1},
	{1,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,1},
	{1,0,0,0,1,0,0,0,1},
	{1,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1}
};

int main(int argc, char* argv[])
{
	
	DrawMap('1', '0');
	cout << endl;
	Solution();
	cout << endl;
	Change();
	cout << endl;
	Solution();

	
	

}

void DrawMap(const char Text1,const char Text2)
{
	char in_Text1{};
	char in_Text2{};
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

void Solution()
{
	
	
	//반복문 새로운 문법, function;
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 9; X++)
		{
			cout << Number[X][Y];

		}
		cout << endl;

	}

}

void Change()
{

	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 9; i++)
		{//삼항 연산자
			Number[j][i] = (Number[j][i] == 0) ? 1 : 0;

		}
	}
}

void Solution_Teacher()
{
	nt Numbers[9][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
	};

	void Print()
	{
		for (int j = 0; j < 9; ++j)
		{
			for (int i = 0; i < 10; ++i)
			{
				cout << Numbers[j][i] << " ";
			}
			cout << endl;
		}
	}

	void ChangeNumber()
	{
		for (int j = 0; j < 9; ++j)
		{
			for (int i = 0; i < 10; ++i)
			{
				Numbers[j][i] = (Numbers[j][i] == 0) ? 1 : 0;
				//if (Numbers[j][i] == 0)
				//{
				//	Numbers[j][i] = 1;
				//}
				//else if (Numbers[j][i] == 1)
				//{
				//	Numbers[j][i] = 0;
				//}
			}
		}
	}

	int main()
	{
		Print();
		ChangeNumber();
		Print();

		return 0;
	}
}



