#include <stdio.h>
#define n 4


int matrix_multiply(int a[n][n], int b[n][n], int c[n][n])
{
	int i,j,k,val;      //局部变量用寄存器替换，提高速度
	for(i = 0; i < n; i++) 
	{ 
		for(j = 0; j < n; j++)
		{
			val = 0;
			for(k = 0; k < n; k++)
			{
				val += a[i][k]*b[k][j];
			}
		c[i][j] = val;
		} 
        
    }
}


int main(void)
{
	int a[n][n], b[n][n], mul[n][n], i, j;
	printf("Input the first %d*%d matrix:\n",n,n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Input the second %d*%d matrix:\n",n,n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	matrix_multiply(a, b, mul);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}

