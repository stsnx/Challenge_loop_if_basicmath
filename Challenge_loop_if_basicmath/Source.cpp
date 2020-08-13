#include<stdio.h>
#include<math.h>
int a, b, t;
float s, sx, xb;
float xbar(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		s += i;
	}
	xb = s / (float)(y +1 - x);
	return s / (float)(y+1 - x);
}
float SD(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		sx += pow(i - xb, 2);
	}
	if (x != y)
	sx /= (float)(y - x);
	else sx = 0;
	return sqrt(sx);
}
int main()
{
	scanf_s("%d %d", &a, &b);
	if (a < b) for (int i = a; i <= b; i++) printf("%d ", i);
	else for (int i = a; i >= b; i--) printf("%d ", i);
	printf("\n");
	if (a > b) t = a, a = b, b = t;
	printf("Average = %.1f\n", xbar(a, b));
	printf("SD = %.2f\n", SD(a, b));
	return 0;
}