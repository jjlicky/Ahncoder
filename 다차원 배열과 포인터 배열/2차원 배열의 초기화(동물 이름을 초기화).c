#include <stdio.h>


int main(void)
{
	char animal[5][10] = {
		{'d','o','g','\0'},
		{'t','i','g','e','r','\0'},
		{'r','a','b','b','i','t','\0'},
		{'h','o','r','s','e','\0'},
		{'c','a','t','\0'}				// �ι��� �߰��� �Է½�����ߵ�
	};

	char animal2[][10] = { "dog","tiger","rabbit","horse","cat" }; // ""�� ���ڿ��� ���� �Է�(�ι��� ����)
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal[i]);
	}
	printf("\n");
	strcpy(animal2[0], "cat");			//dog�� cat���� �ٲ���
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}

	return 0;
}