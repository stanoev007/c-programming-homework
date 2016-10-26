#include <stdio.h>
int main()
{
	int n,sum = 0,a;
	float avg;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	avg = (float)sum/n;
	printf("sum = %d\n", sum);
	printf("avg = %.2f", avg); 
	return 0;
}
