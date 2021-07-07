#include <stdio.h>
int main()
{
	int get;
	printf("Enter the length of the array:- ");
	scanf("%d", &get);
    printf("get = %d\n", get);
    int a[150];
	int e=0;
	for(int f=1;f<=get;f++)
	{
		a[e];
		printf("Enter Number %d:-> ", f);
		int g=0;
		scanf("%d", &g);
		a[e] = g;
		e++;
	}
	for(int b = 0; b < get; b++)
	{
		for(int c = b+1; c<get;c++)
		{
			int temp;
			if (a[c] > a[b])
			{
				temp = a[b];
				a[b] = a[c];
				a[c] = temp;
			}
		}
	}
	for(int d =0; d<get;d++)
	{
		printf("%d\n",a[d]);
	}
    getchar();
    getchar();
}
