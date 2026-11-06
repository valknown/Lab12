#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1(void);
int task2(void);
int task3(void);
int task4(void);
int task5(void);

int main(void) {
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task3();
	task4();
	task5();
	return 0;
}

int task1(void) {
	int* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n\n", sizeof(pf));
	return 0;
}

int task2(void) {
	float PI = 3.14159, *p1, *p2;
	p1 = p2 = &PI;
	printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
	printf("По адресу p2=%p хранится *p2=%g\n\n", p2, *p2);
	return 0;
}

int task3(void) {
	int *pa, x = 5;
	pa = &x;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pa++;
	printf("По адресу %p хранится *ptr=%g\n", pa, *pa);
	pa--;
	printf("По адресу %p хранится *ptr=%g\n\n", pa, *pa);
	return 0;
}

int task4(void) {
	float array[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};
	float* ptr_a;
	ptr_a = array;
	printf("адрес начала массива: %p\n", ptr_a);
	for (int i = 0; i < 10; i++) {
		printf("адрес элемента: %p, значение: %g\n",ptr_a + i, *(ptr_a + i));
	}
	printf("\n");
	for (int i = 9; i >= 0; i--) {
		printf("адрес элемента: %p, значение: %g\n", ptr_a + i, *(ptr_a + i));
	}
	printf("\n");
	return 0;
}

int task5(void) {
	int x = 0x12345678; // поменять int и значение
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;
	prt = &x;
	a = (unsigned char*)prt;
	for (int i = sizeof(x) - 1; i >= 0; i--) {
		printf("%x\n", *(a + i));
	}
	return 0;
}