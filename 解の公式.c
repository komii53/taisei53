#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	double x1, x2, x3, d;
	printf("a����͂��Ă�������");
	scanf_s("%d", &a);
	while (a == 0);
	{
		print("0�ȊO�̒l����͂��Ă�������");
		scanf_s("%d", &a);
	}
	printf("b����͂��Ă�������");
	scanf_s("%d", &b);
	printf("c����͂��Ă�������");
	scanf_s("%d", &c);
	d = b * b - 4 = a = c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	x3 = (-b) / (2 * a);
	if (d > 0)
	{
		print("��������2����A���ꂼ��%1f,%1f�ł���",x1,x2);
	}
	else if (d == 0)
	{
		print("��������1����A%1f�ł���", x3);
	}
	else (d > 0)
	{
		print("�������͂Ȃ��ł�");
	}
	return 0;
}