#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isfib(int n)               
{
    int a=0, b=1, c=0, count=0;
    for (int i=0; i<(n+1); ++i)
    {
        if (c==n)
	{
	    count=count+1;
	}
        c=a+b;
        a=b;
        b=c;
    }
    if (count==0)
    {
        return(0);
    }
    else
    {
        return(1);
    }
}

void printfib(int num1, int num2)
{
    int a=0, b=1, c=0, j=0, k=0;
    for (int g=0; g<(num1+num2+1); ++g)
    {
        if (c>num2 && c<num1)
        {
            printf("%d ", c);
	    k++;
        }
        else if (c>num1 && c<num2)
        {
            printf("%d ", c);
	    k++;
        }
	else if (c>=num1 && c<=num2)
	{
	    j++;
	}
	else if (c>=num2 && c<=num1)
        {
            j++;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if (j>0 && k==0)
    {
	printf("no numbers");
    }
}


int main()
{
    int num1, num2;
    while (scanf("%d %d", &num1, &num2) != -1)
    {
	if (isfib(num1) && isfib(num2))
	{
	    printfib(num1, num2);
	    printf("\n");
        }
	else
	{
	    printf("no numbers");
	    printf("\n");
	}
    }
}
