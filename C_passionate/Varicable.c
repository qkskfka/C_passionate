#include <stdio.h>

int main(void)
{
	printf("홍길동\n홍 길 동\n홍  길  동\n");
	printf("이종찬\n");
	printf("서울\n");
	printf("000-000-000\n");
	printf("제 이름은 홍길동입니다.\n");
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
	printf("제 나이는 %d살이고요\n", 20);
	printf("%d * %d = d% \n", 4, 5, 20);
	printf("%d * %d = d% \n", 7, 9, 7 * 9);
	//변수와 연산자

	//변수의 선언 및 초기화 방법

	int num1, num2;
	int num3 = 30, num4 = 40;

	printf("num1: %d, num2: %d \n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
}
//덧셈 프로그램의 완성

int math1(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, result);
}

// 대입 연산자와 산술연산자

int math2(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d- %d=%d \n", num1, num2, num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	printf("%d / %d의 몫=%d \n", num1, num2, num1 / num2);
	printf("%d / %d의 나머지=%d \n", num1, num2, num1 % num2);
}

// 복합 대입 연산자

int math3(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; // num1 = num1 +3;
	num2 *= 4; // num2 = num2 *4;
	num3 %= 5; // num3 = num3 %5;
	printf("Result: %d, %d, %d \n", num1, num2, num3);
}

// 부호연산의 의미를 갖는 +연산자와 -연산자


int math4(void)
{
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);
	num2 = -num2;
	printf("num2: %d \n", num2);
}

// 증가, 감소 연산자


int math5(void)
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); // 후위증가
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // 전위증가
	printf("num2: %d \n", num2);
}


int math6(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //후위증가

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
}

//관계 연산자


int math7(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
}

// 논리연산자


int math8(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
}

// 콤마연산자


int math9(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World! \n");
	num1++, num2++;
	printf("%d", num1), printf("%d", num2), printf("\n");
}

// Scanf 함수의 호출


int math10(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf("%d", &num1); // 첫번째 정수 입력
	printf("정수 two: ");
	scanf("%d", &num2); // 두번째 정수 입력

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
}

// 입력의 형태를 다양하게 지정할 수 있다.


int math11(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
}

//scanf의 활용
// 1. 프로그램 사용자로부터 두 개의 정수를 입력 받아서 
//두 수의 뺄셈과 곱셈의 결과를 출력하는 프로그램을 작성해보자


int math12(void)
{
	int num1, num2;
	printf(" 두개의 정수의 입력 \n");
	scanf(" %d %d", &num1, &num2);
	printf(" %d - %d = %d", num1, num2, num1 - num2);
	printf(" %d * %d = %d", num1, num2, num1 * num2);
}

//2. 프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 순서대로 입력 받은 후에,
//다음 연산의 결과를 출력하는 프로그램을 작성해보자. 
// num1 * num2 +num3
// 단, 입력 받은 세 개의 정수가 2, 4, 6이라면 다음의 형태로 출력을 해야 한다.
// 2*4+6=14


int math13(void)
{
	int num1, num2, num3;
	int result;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d * %d +%d = %d \n", num1, num2, num3, result);
}

// 3. 하나의 정수를 입력 받아서, 그 수가 제곱의 결과를 출력하는 프로그램을 작성해보자. 
// 예를 들어서 5가 입력되면 25가 출력되어야 한다.


int math14(void)
{
	int num;
	printf(" 정수를 입력하시오:");
	scanf("%d", num);
	printf(" %d", num ^ 2);
}