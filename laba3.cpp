#include <iostream>
using namespace std;
int main()
{
	int numbers[8] = { 1,2,3,4,5,7,8,9 };
	for (int i = 0; i < 8; i++)
	{
		cout << numbers[i] << " ";
	}
	for (int i = 1; i < 8; i++)
	{
		if (numbers[i - 1] + 1 != numbers[i])
		{
			cout << endl << numbers[i];
			return numbers[i];
		}
	}
	return 0;

}
