#include<stdio.h>
#include<conio.h>
int main()
{
 	int b,c,d;
  printf("enter the three values");
	scanf("%d%d%d",&b,&c,&d);
  	if (b>c && b>d)
    	{
		printf("%d\n",b);
	}
	if (c>b && c>d)
	{
		printf("%d\n", c);
	}
	if(d>b && d>c)
  {
		printf("%d\n", d);
	}
  getch();
  return 0;
  }
