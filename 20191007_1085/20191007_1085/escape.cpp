#include <iostream>
using namespace std;

int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int df_x = w - x;
	int df_y = h - y;	//총 4가지의 경우가 있음

	int answer = 1000;	//최솟값을 구하기 위한 변수

	if (x <= answer)
		answer = x;

	if (df_x <= answer)
		answer = df_x;

	if (y <= answer)
		answer = y;

	if (df_y <= answer)
		answer = df_y;

	cout << answer;

	getchar();
	getchar();
	return 0;
}