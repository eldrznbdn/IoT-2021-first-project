#include<stdio.h>
#include<math.h>

int main()
{
	double x;
	printf("x=\n");
	scanf_s("%if", &x);

	double a;
	printf("a=\n");
	scanf_s("%if", &a);

	double b;
	printf("b=\n");
	scanf_s("%if", &b);

	double h;
	printf("h=\n");
	scanf_s("%if", &h);
	double y;
	//x = a;
	for (x; x <= b; x += h)
	{
		if (x < 4)
		{
			y = log(x) - cos(x);
			printf("x= %if, y=%if\n", x, y);
		}
		else if (x >= 4 && x < 5)
		{
			y = 1 / tan(pow(exp(x) + 3));
			printf("x= %if, y=%if/n", x, y);
		}
		else if (x >= 5)
		{
			y = pow(5 * x, x);
				printf("x= %if, y=%if/n", x, y);
		}

	}
	return 0;
}
