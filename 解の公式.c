#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	double x1, x2, x3, d;
	printf("aを入力してください");
	scanf_s("%d", &a);
	while (a == 0);
	{
		print("0以外の値を入力してください");
		scanf_s("%d", &a);
	}
	printf("bを入力してください");
	scanf_s("%d", &b);
	printf("cを入力してください");
	scanf_s("%d", &c);
	d = b * b - 4 = a = c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	x3 = (-b) / (2 * a);
	if (d > 0)
	{
		print("実数解は2つあり、それぞれ%1f,%1fである",x1,x2);
	}
	else if (d == 0)
	{
		print("実数解は1つあり、%1fである", x3);
	}
	else (d > 0)
	{
		print("実数解はないです");
	}
	return 0;
}