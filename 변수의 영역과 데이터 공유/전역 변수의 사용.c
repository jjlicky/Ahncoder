#include <stdio.h>

void assign10(void);
void assign20(void);

int a;

int main(void)
{
	printf("�Լ� ȣ�� �� a �� : %d\n", a);
	
	assign10();
	printf("�Լ� ȣ�� �� a �� : %d\n", a);		// �Լ��� �������� a�� ����Ͽ� 10�� ��µ�
	assign20();						
	printf("�Լ� ȣ�� �� a �� : %d\n", a);		// �Լ����� �μ��� ȣ���Ͽ����� �ٸ����̹Ƿ� ���������� ����Ͽ� �״�� 10 ���
	
	return 0;
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;
	a = 20;
}