#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(void)
{
	int guess, input;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;
	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");

	while (scanf_s("%d", &input)) {
		if (input > guess)
			printf("�Է��� ������ �����ϴ�. �ٽ� �Է��ϼ���. : ");
		else if (input < guess)
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
		else
		{
			puts("�����Դϴ�.");
			break;
		}
	}
	return 0;
}