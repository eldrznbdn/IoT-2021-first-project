#include <iostream>
using namespace std;

void cout_array(int numbers[]) {
    for (int i = 0; i < 8; i++)
    {
        cout << numbers[i] << " ";
    }
}
int extra_number(int  numbers[]) {
    for (int i = 1; i < 8; i++)
    {
        if (numbers[i - 1] + 1 != numbers[i])
        {
            return numbers[i];
        }
    }
}
int main()
{
    int numbers[8] = { 1,2,3,4,5,7,8,9 };
    cout_array(numbers);
    cout << endl << extra_number(numbers);
    return 0;
}
