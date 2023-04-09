#include <stdio.h>

int LCM_1(int num1, int num2) { // 최소공배수
	for (int i = 1; i <= num1 * num2; i++) { // 1부터 num1*num2 (최소공배수로써의 최대값)까지 가산하며 계산
		if (i % num1 == 0 && i % num2 == 0) { // 두 수로 전부 나누어떨어지는 첫 수가 최소공배수
			printf("최소공배수 : %d\n", i);
			return i;
		}
	}
}

int LCM_2(void) {
	int num1, num2;

	printf("최소공배수 계산 첫번째 수 입력 : ");
	scanf_s("%d", &num1);
	printf("최소공배수 계산 두번째 수 입력 : ");
	scanf_s("%d", &num2);

	for (int i = 1; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			printf("최소공배수 : %d\n", i);
			return i;
		}
	}
}

int GCD_1(int num1, int num2) { // 최대공약수
	for (int i = num1 > num2 ? num2 : num1; i > 0; i--) { // num1과 num2 중 작은 수(최대공약수로써의 최대값)부터 1까지 차감하며 계산
		if (num1 % i == 0 && num2 % i == 0) { // 두 수를 나누어떨어지게하는 첫 수가 최대공약수
			printf("최대공약수 : %d\n", i);
			return i;
		}
		else continue;
	}
}

int GCD_2(void) {
	int num1, num2;

	printf("최대공약수 계산 첫번째 수 입력 : ");
	scanf_s("%d", &num1);
	printf("최대공약수 계산 두번째 수 입력 : ");
	scanf_s("%d", &num2);

	for (int i = num1 * num2; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("최대공약수 : %d\n", i);
			return i;
		}
		else continue;
	}
}

int PRIME_1(int num) {
	if (num == 1) { // 입력 수가 1일 경우 소수 아님
		printf("1은 소수가 아닙니다\n");
		return 0;
	}

	for (int i = 2; i < num; i++) { // 1과 자기 자신을 제외한 수에 대해
		if (num % i == 0) { // 그 수로 나누어떨어지면 소수 아님
			printf("%d 이 수는 소수가 아닙니다\n", num);
			return 0;
		}
	}
	// 나머지는 소수
	printf("%d 이 수는 소수입니다\n", num);
	return 1;
}

int PRIME_2(void) {
	int num;

 	printf("소수 판별할 수 입력 : ");
 	scanf_s("%d", &num);

 	if (num == 1) {
 		printf("1은 소수가 아닙니다\n");
 		return 0;
 	}

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			printf("%d 이 수는 소수가 아닙니다\n", num);
			return 0;
		}
	}

 	printf("%d 이 수는 소수입니다\n", num);
 	return 1;
}
