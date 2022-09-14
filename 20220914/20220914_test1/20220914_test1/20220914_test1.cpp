// 20220914_test1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

int main()
{
	int num1, num2, num3; // 정수 변수 선언
	num1 = num2 = num3 = 0;
	double result = 0.0;

	printf("num1 = %d \n", num1); //decimal
	printf("num2 = %d num3 = %d \n", num2, num3);  //decimal

	printf("num1 숫자를 입력하세요.   ");
	scanf("%d", &num1); //번지(주소) 연산자 &를 써야함
	printf("num1 = %d \n", num1); //decimal

	printf("num2 숫자를 입력하세요.   ");
	scanf("%d", &num2); //번지(주소) 연산자 &를 써야함
	
	printf("num2 = %d \n", num2); //decimal
	printf("num3 숫자를 입력하세요.   ");


	num3 = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, num3); //decimal
	
	num3 = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, num3); //decimal

	num3 = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, num3); //decimal

	num3 = num1 / num2;
	printf("%d / %d = %d \n", num1, num2, num3); //decimal
	
	result = (double)num1 / (double)num2;
	printf("%d / %d = %lf \n", num1, num2, result); //double

												 /*
	scanf("%d", &num3); //번지(주소) 연산자 &를 써야함
	printf("num3 = %d \n", num3); //decimal
	*/
	return 0;
}
