#include "struct.h"

void printStruct(Person *p) {
	printf("%d %s %s\n", p->age, p->name, p->address);
}

int main()
{
	//struct person lee;
	Person lee;
	lee.age = 30;
	strcpy(lee.name, "LEE");
	strcpy(lee.address, "Seoul Korea");

	printStruct(&lee);
	printf("%d %s %s\n", lee.age, lee.name, lee.address);

	//struct person* leePtr;
	Person* leePtr = NULL;

	// malloc의 직관적인 의미, 메모리를 이 만큼 줘!
	// 포인터 타입으로 메모리를 줘, 받고 싶은 type으로 캐스팅
	leePtr = (Person*)malloc(sizeof(Person));
	leePtr->age = 25;
	strcpy(leePtr->name, "이순신");
	strcpy(leePtr->address, "광화문");
	
	printStruct(leePtr);
	printf("%d %s %s\n", leePtr->age, leePtr->name, leePtr->address);
	free(leePtr);
	// free의 위치는 메모리 allocation 이후에 핸들링 해줘야 한다
	
	// printf("%lu %lu\n", sizeof(lee), sizeof(leePtr));

	// INT num = 10;

	// int arr[10];
	// 포인터 형태로도 배열선언이 가능하다
	// 아래처럼 담고자하는 변수형을 선언하고
	// 그만큼 메모리를 할당한다
	int* arr;
	arr = (int*)malloc(sizeof(int) * 10);
	int* temp = arr;
	// temp 형태로 해당 메모리 주소를 기억하게 해서 
	// free 시 사용하도록 한다
	for (int i = 0; i < 10; i++) {
		arr[i] = (i + 1);
		printf("%d ", arr[i]);
	}

	// free(arr); allocation 이후 heap 메모리 상에서 free 해준다
	// 자바의 경우는 지울 필요가 없다	
	
	// 아래 처럼 한 칸씩 이동을 시켜본다
	for (int i = 0; i < 10; i++) {
		*arr = (i + 1);
		printf("%d ", *arr);
		arr++;
	}

	// 끝에서 free 를 시키면 죽게 된다
	// free(arr);

	// 그래서 temp 포인터를 선언해야하고
	// free 해줘서 해당 배열을 heap에서 지운다
	// temp 포인터가 해당 배열의 시작을 가리키고 있기 때문
	free(temp);
}
