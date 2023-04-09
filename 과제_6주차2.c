#include <stdio.h>

int LCM_1(int num1, int num2) { // �ּҰ����
	for (int i = 1; i <= num1 * num2; i++) { // 1���� num1*num2 (�ּҰ�����ν��� �ִ밪)���� �����ϸ� ���
		if (i % num1 == 0 && i % num2 == 0) { // �� ���� ���� ����������� ù ���� �ּҰ����
			printf("�ּҰ���� : %d\n", i);
			return i;
		}
	}
}

int LCM_2(void) {
	int num1, num2;

	printf("�ּҰ���� ��� ù��° �� �Է� : ");
	scanf_s("%d", &num1);
	printf("�ּҰ���� ��� �ι�° �� �Է� : ");
	scanf_s("%d", &num2);

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			printf("�ּҰ���� : %d\n", i);
			return i;
		}
	}
}

int GCD_1(int num1, int num2) { // �ִ�����
	for (int i = num1 > num2 ? num2 : num1; i > 0; i--) { // num1�� num2 �� ���� ��(�ִ������ν��� �ִ밪)���� 1���� �����ϸ� ���
		if (num1 % i == 0 && num2 % i == 0) { // �� ���� ������������ϴ� ù ���� �ִ�����
			printf("�ִ����� : %d\n", i);
			return i;
		}
		else continue;
	}
}

int GCD_2(void) {
	int num1, num2;

	printf("�ִ����� ��� ù��° �� �Է� : ");
	scanf_s("%d", &num1);
	printf("�ִ����� ��� �ι�° �� �Է� : ");
	scanf_s("%d", &num2);

	for (int i = num1 * num2; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("�ִ����� : %d\n", i);
			return i;
		}
		else continue;
	}
}

int PRIME_1(int num) {
	if (num == 1) { // �Է� ���� 1�� ��� �Ҽ� �ƴ�
		printf("1�� �Ҽ��� �ƴմϴ�\n");
		return 0;
	}

	for (int i = 2; i < num; i++) { // 1�� �ڱ� �ڽ��� ������ ���� ����
		if (num % i == 0) { // �� ���� ����������� �Ҽ� �ƴ�
			printf("%d �� ���� �Ҽ��� �ƴմϴ�\n", num);
			return 0;
		}
	}
	// �������� �Ҽ�
	printf("%d �� ���� �Ҽ��Դϴ�\n", num);
	return 1;
}

int PRIME_2(void) {
	int num;

 	printf("�Ҽ� �Ǻ��� �� �Է� : ");
 	scanf_s("%d", &num);

 	if (num == 1) {
 		printf("1�� �Ҽ��� �ƴմϴ�\n");
 		return 0;
 	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("%d �� ���� �Ҽ��� �ƴմϴ�\n", num);
			return 0;
		}
	}

 	printf("%d �� ���� �Ҽ��Դϴ�\n", num);
 	return 1;
}
