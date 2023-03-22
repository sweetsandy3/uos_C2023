#include <stdio.h>

int main(void) {

	// 변수 생성
	// 문자열 char 자료형 2개와 정수 int 자료형 2개 생성
	// name과 class는 한글을 넣을 공간이므로 각각 7바이트(2*3 +1), 21바이트(2*10 +1) 크기의 배열로 선언
	char name[7];
	char class[21];
	int birth;
	int num;

	// 입력 부분
	printf("이름 입력 : ");
	scanf_s("%s", name, (int)sizeof(name));	// 문자열 서식문자 %s를 이용, 크기 인자 받는 부분에서 sizeof만 사용하면 경고가 떠서 정수형 int로 변환

	printf("생년월일 입력 : ");
	scanf_s("%d", &birth);	// 정수 서식문자 %d를 이용

	printf("학번 입력 : ");
	scanf_s("%d", &num);		// 정수 서식문자 %d를 이용

	printf("학과명 입력 : ");
	scanf_s("%s", class, (int)sizeof(class));	// 문자열 서식문자 %s를 이용

	// 출력 부분
	// 각각에 대응되는 서식문자와 줄바꿈 \n을 이용해 한번에 출력
	printf("이름 : %s\n생년월일 : %d\n학번 : %d\n학과명 : %s", name, birth, num, class);

}