#include <stdio.h>

int main(void)
{
	printf("ȫ�浿\nȫ �� ��\nȫ  ��  ��\n");
	printf("������\n");
	printf("����\n");
	printf("000-000-000\n");
	printf("�� �̸��� ȫ�浿�Դϴ�.\n");
	printf("���� ��� ���� �������� %d-%d�Դϴ�.\n", 123, 456);
	printf("�� ���̴� %d���̰��\n", 20);
	printf("%d * %d = d% \n", 4, 5, 20);
	printf("%d * %d = d% \n", 7, 9, 7 * 9);
	//������ ������

	//������ ���� �� �ʱ�ȭ ���

	int num1, num2;
	int num3 = 30, num4 = 40;

	printf("num1: %d, num2: %d \n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);
}
//���� ���α׷��� �ϼ�

int math1(void)
{
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("���� ���: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d�� %d�� ���� %d�Դϴ�.\n", num1, num2, result);
}

// ���� �����ڿ� ���������

int math2(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d- %d=%d \n", num1, num2, num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	printf("%d / %d�� ��=%d \n", num1, num2, num1 / num2);
	printf("%d / %d�� ������=%d \n", num1, num2, num1 % num2);
}

// ���� ���� ������

int math3(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; // num1 = num1 +3;
	num2 *= 4; // num2 = num2 *4;
	num3 %= 5; // num3 = num3 %5;
	printf("Result: %d, %d, %d \n", num1, num2, num3);
}

// ��ȣ������ �ǹ̸� ���� +�����ڿ� -������


int math4(void)
{
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);
	num2 = -num2;
	printf("num2: %d \n", num2);
}

// ����, ���� ������


int math5(void)
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); // ��������
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // ��������
	printf("num2: %d \n", num2);
}


int math6(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //��������

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
}

//���� ������


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

// ��������


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

// �޸�������


int math9(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World! \n");
	num1++, num2++;
	printf("%d", num1), printf("%d", num2), printf("\n");
}

// Scanf �Լ��� ȣ��


int math10(void)
{
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf("%d", &num1); // ù��° ���� �Է�
	printf("���� two: ");
	scanf("%d", &num2); // �ι�° ���� �Է�

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
}

// �Է��� ���¸� �پ��ϰ� ������ �� �ִ�.


int math11(void)
{
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
}

//scanf�� Ȱ��
// 1. ���α׷� ����ڷκ��� �� ���� ������ �Է� �޾Ƽ� 
//�� ���� ������ ������ ����� ����ϴ� ���α׷��� �ۼ��غ���


int math12(void)
{
	int num1, num2;
	printf(" �ΰ��� ������ �Է� \n");
	scanf(" %d %d", &num1, &num2);
	printf(" %d - %d = %d", num1, num2, num1 - num2);
	printf(" %d * %d = %d", num1, num2, num1 * num2);
}

//2. ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� ������� �Է� ���� �Ŀ�,
//���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���. 
// num1 * num2 +num3
// ��, �Է� ���� �� ���� ������ 2, 4, 6�̶�� ������ ���·� ����� �ؾ� �Ѵ�.
// 2*4+6=14


int math13(void)
{
	int num1, num2, num3;
	int result;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%d * %d +%d = %d \n", num1, num2, num3, result);
}

// 3. �ϳ��� ������ �Է� �޾Ƽ�, �� ���� ������ ����� ����ϴ� ���α׷��� �ۼ��غ���. 
// ���� �� 5�� �ԷµǸ� 25�� ��µǾ�� �Ѵ�.


int math14(void)
{
	int num;
	printf(" ������ �Է��Ͻÿ�:");
	scanf("%d", num);
	printf(" %d", num ^ 2);
}