#include <iostream>
using namespace std;

int main(void)
{
	int H_input, M_input;   //�Է¹޴� �ð�, �� ��
	int H_output, M_output;   //����ϴ� �ð�, �� ��

	cin >> H_input >> M_input;	//cin ���ٷ� ���� �� �ٷ� ����.

	int total_minutes = (60 * H_input) + M_input;   //������ ȯ���� �� ��

	if (total_minutes < 45)	//��¥�� ����Ǵ� �κ�
	{
		H_output = 23;	//������ ����
		M_output = 60 - (-(M_input - 45));	//�� �˸°� ����
	}

	else
	{
		int result_minutes = total_minutes - 45;   //45�� ���� ���� �� �� 
		H_output = result_minutes / 60;
		M_output = result_minutes % 60;
	}

	cout << H_output << " " << M_output;	//��� ���
	getchar();
	getchar();
	return 0;
}