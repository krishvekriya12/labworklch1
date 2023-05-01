#include<stdio.h>
#include<conio.h>
main()
{
	clrscr();
	int x=50,y=40,xy;
	xy =(x*x*x)+(3*x*y)*(x+y)+(y*y*y);
	printf("(x+y)3=%d",xy);
	getch();
}