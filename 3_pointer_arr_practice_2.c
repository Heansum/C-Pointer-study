#include <stdio.h>

int main(void)
{
	int array[5] = {10, 20, 30, 40, 50};
	int *ptr = array;
	
	int num = 10;
	ptr = &num;

	printf("++*ptr = %d\n", ++*ptr);
	printf("*++ptr = %d\n", *++ptr);
	printf("--*ptr = %d\n", --*ptr);
	printf("*--ptr = %d\n", *--ptr);
	printf("*(ptr++) = %d\n", *(ptr++));
	printf("*(ptr--) = %d\n", *(ptr--));
	
	printf("%d\n", *ptr);



	char pstr1[] = "hello"; // 배열
	char* pstr2 = "hello"; // 문자열 상수
	char* ps;
	ps = pstr1;


	pstr1[2] = 'A';
	ps[2] = 'B';
	// 배열 형태가 아닌 포인터로 문자열 선언을 한다면
	// 상수 취급되며 변경 불가능 하다
	// pstr2[2] = 'A';

	printf("%s\n", pstr1);
	printf("%s\n", pstr2);

	// 배열 형태는 사이즈가 6이지만
	// 포인터 형태 선언은 사이즈가 고정이다
	// 포인터 변수의 크기는 변화가 없기 때문
	printf("%lu %lu\n", sizeof(pstr1), sizeof(pstr2));

	return 0;
}
