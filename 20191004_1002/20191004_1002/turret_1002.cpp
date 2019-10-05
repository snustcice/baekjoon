#include <iostream>
using namespace std;
// 더 쉬운 방법 -- 배열 안 쓰고 그냥 각 케이스 마다 바로바로 결과 출력
int main(void)
{
	int test_num;
	cin >> test_num;

	long long int *x1 = new long long int[test_num];
	long long int *y1 = new long long int[test_num];
	long long int *r1 = new long long int[test_num];
	long long int *x2 = new long long int[test_num];
	long long int *y2 = new long long int[test_num];
	long long int *r2 = new long long int[test_num];	//the type long long -- is it necessary?
	int *result = new int[test_num];

	for (int i = 0; i < test_num; i++)
	{
		cin >> *x1;
		cin >> *y1;
		cin >> *r1;
		cin >> *x2;
		cin >> *y2;
		cin >> *r2;

		long long int distance_target = (*r1 + *r2) * (*r1 + *r2);
		long long int distance_between = (*x2 - *x1)*(*x2 - *x1) + (*y2 - *y1)*(*y2 - *y1);

		if (*x1 == *x2 && *y1 == *y2)	//Concentric circles
		{
			if (*r1 == *r2)
				result[i] = -1;
			else
				result[i] = 0;
		}
		else //NOT concentric circles
		{
			if (distance_target < distance_between)
				result[i] = 0;
			else if (distance_target == distance_between)
				result[i] = 1;
			else
			{
				if ((*r1 - *r2)*(*r1 - *r2) > distance_between)	/*spent most of time here
																HOW to set conditions of each case
																*/
					result[i] = 0;
				else if ((*r1 - *r2)*(*r1 - *r2) == distance_between)
					result[i] = 1;
				else
					result[i] = 2;
			}
		}
	}
	for (int i = 0; i < test_num; i++)
	{
		cout << result[i] << endl;
	}
	getchar();
	getchar();
	return 0;
}