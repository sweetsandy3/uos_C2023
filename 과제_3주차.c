#include <stdio.h>

int main(void) {

	// ���� ����
	// ���ڿ� char �ڷ��� 2���� ���� int �ڷ��� 2�� ����
	// name�� class�� �ѱ��� ���� �����̹Ƿ� ���� 7����Ʈ(2*3 +1), 21����Ʈ(2*10 +1) ũ���� �迭�� ����
	char name[7];
	char class[21];
	int birth;
	int num;

	// �Է� �κ�
	printf("�̸� �Է� : ");
	scanf_s("%s", name, (int)sizeof(name));	// ���ڿ� ���Ĺ��� %s�� �̿�, ũ�� ���� �޴� �κп��� sizeof�� ����ϸ� ��� ���� ������ int�� ��ȯ

	printf("������� �Է� : ");
	scanf_s("%d", &birth);	// ���� ���Ĺ��� %d�� �̿�

	printf("�й� �Է� : ");
	scanf_s("%d", &num);		// ���� ���Ĺ��� %d�� �̿�

	printf("�а��� �Է� : ");
	scanf_s("%s", class, (int)sizeof(class));	// ���ڿ� ���Ĺ��� %s�� �̿�

	// ��� �κ�
	// ������ �����Ǵ� ���Ĺ��ڿ� �ٹٲ� \n�� �̿��� �ѹ��� ���
	printf("�̸� : %s\n������� : %d\n�й� : %d\n�а��� : %s", name, birth, num, class);

}