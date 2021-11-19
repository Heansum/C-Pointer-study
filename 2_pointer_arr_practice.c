#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int* pa;

	int num = 10;
	pa = arr;
	pa = &arr[0];
	
	for (int i = 0; i < 5; i++) {
		printf("%p\n", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\n", pa[i]);
	}

	int* pa1 = &arr[1];
	int* pa2 = &arr[3];
	
	printf("%ld\n", pa2 - pa1);



	printf("%d\n", *pa);
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(pa + i));
	}
	
	//  위 아래 for문은 동일한 값을 도출한다
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(arr + i));
	}

	
	// 이 for문을 보면 포인터를 이동시키지만,
	// 해당 포인터안에 들어있는 주소 값은 변경되지 않는다
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(pa + i));
	}

	// 값을 변경하기위해서는 대입 연산자를 사용해야한다
	printf("%d\n", num << 2);
	printf("%d\n", num);

	// 아래 처럼 작성을 하면 포인터 변수안의 값이 변경되어진다
	// 포인터 값이 한칸씩 배열에서 땡겨지게 되는 것
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(pa++));
	}

	// 증감 연산자를 보면 전위 후위연산자로 나뉘는데,
	// 그 기준은 statement 한 문장이 끝나는 ;을 기준으로 한다
	// 즉 pa++인 경우 1을 출력하고 그 다음 증가가 되는 반면
	// ++pa인 경우는 먼저 증가 시킨 후 출력하게 된다


}
