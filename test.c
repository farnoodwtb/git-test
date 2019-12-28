#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char A[1001][1001]={0};
	int max=0,b=0,a=0,v=0;
	while (gets(A[a]))
	{
		b=strlen(A[a]);
		if (max<b)max=b;
		a++;
	}
	for (int i=0;i<max+2;i++)
	putchar('*');
	putchar('\n');
	for(int i=0;i<a;i++)
	{
		b=strlen(A[i]);
		putchar('*')
		if ((max-b)%2==0)
		{
			for (int p=0;p<((max-b)/2);p++)
			putchar(' ');
			printf("%s",A[i]);
			for (int p=0;p<((max-b)/2);p++)
			putchar(' ');
		}
		else
		{
			if (v==0)
			{
				for (int p=0;p<(max-b)/2;p++)
				putchar(' ');
				printf("%s",A[i]);
				for (int p=0;p<((max-b)/2)+1;p++)
				putchar(' ');
				v=1;
			}
			else
			{
				for (int p=0;p<((max-b)/2)+1;p++)
				putchar(' ');
				printf("%s",A[i]);
				for (int p=0;p<((max-b)/2);p++)
				putchar(' ');
				v=0;
			}
		}
		putchar('*');
		putchar('\n');
 	} 
	for (int i=0;i<max+2;i++)
	putchar('*');
}
