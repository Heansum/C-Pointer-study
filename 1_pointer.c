#include <stdio.h>

int main(void)
{
	int num = 10;
	int* ptr;
	char ch = 'A';
	double* dPtr;
	double dnum = 3.14;

	// 해당값의 주소값을 넣어야 한다
	dPtr = &dnum;
	ptr = &num;

	// 이런식으로 되지는 않는다, 왜냐하면 자료형이 다르기 때문!
	// ptr = &ch;

	// 여기서 쓰는 *와 위에서 선언하면서 사용한 *은 완전히 다른 의미이다
	// 위의 * 의미는 interger 포인터형을 선언하겠다는 의미이다
	// 아래의 의미(*ptr)는 이 포인터가 가리키는 값을 꺼내와라는 의미이다
	printf("%p %d %d %p\n", ptr, *ptr, num, &num);

	// 포인터의 크기는 선언형과 무관하며 같은 값을 가진다
	// 또한 포인터도 변수이므로 포인터도 주소 값을 가진다
	printf("%d %d %p %p\n", sizeof(ptr), sizeof(dPtr), &ptr, &dPtr);


	/*포인터 실습, 두 개의 정수, 실수를 각각 10, 10.0으로 선언하고 
	 이 두 변수를 가리키는 포인터 변수를 이용하여 1, 1.1 씩 증가해 보자*/
	dnum = 10.0;
	*ptr += 1;
	*dPtr += 1.1;

	printf("%p %g %g %p\n", dPtr, *dPtr, dnum, &dnum);

}
