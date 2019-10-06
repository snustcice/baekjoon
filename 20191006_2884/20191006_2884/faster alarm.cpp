#include <iostream>
using namespace std;

int main(void)
{
	int H_input, M_input;   //입력받는 시간, 분 값
	int H_output, M_output;   //출력하는 시간, 분 값

	cin >> H_input >> M_input;	//cin 두줄로 말고 한 줄로 적자.

	int total_minutes = (60 * H_input) + M_input;   //분으로 환산한 총 값

	if (total_minutes < 45)	//날짜가 변경되는 부분
	{
		H_output = 23;	//전날로 설정
		M_output = 60 - (-(M_input - 45));	//분 알맞게 조정
	}

	else
	{
		int result_minutes = total_minutes - 45;   //45분 일찍 맞춘 분 값 
		H_output = result_minutes / 60;
		M_output = result_minutes % 60;
	}

	cout << H_output << " " << M_output;	//결과 출력
	getchar();
	getchar();
	return 0;
}