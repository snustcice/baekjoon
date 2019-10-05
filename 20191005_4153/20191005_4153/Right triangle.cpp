#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;

	while (1)
	{
		cin >> a;
		cin >> b;
		cin >> c;	//input value

		int largest;	//largest value
		int small1, small2;

		if (a == 0 && b == 0 && c == 0)
			break;
		else
		{
			for (int i = 0; i < 3; i++)	//find the largest value
			{
				largest = 0;
				if (a > largest)
				{
					largest = a;
					small1 = b;
					small2 = c;
				}
				if (b > largest)
				{
					largest = b;
					small1 = a;
					small2 = c;
				}
				if (c > largest)
				{
					largest = c;
					small1 = a;
					small2 = b;
				}
			}

			if ((small1*small1 + small2 * small2) == largest * largest)	//print output
				/*What's the difference between ^2 and *? ^2 isn't a square?*/
				cout << "right" << endl;
			else
				cout << "wrong" << endl
				;
		}
	}
	getchar();
	getchar();

	return 0;
}