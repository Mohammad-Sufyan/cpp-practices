#include<stdio.h>
#include<windows.h>
int main()
{
	int h,m,s;
	int d=1000;
	printf("set time: \n");
	scanf("%d%d%d",&h,&m,&s);
	if(h>12||m>60||s>60)
	{
		printf("error ! \n");
		exit(0);
	}
	while(1)
	{
		
		s++;
		if(s>59)
		{
			m++;
			s=0;
		}
		if(m>59)
		{
			h++;
			m=0;
		}
		if(h>60)
		{
			h=1;
		}
		printf("\n  clock:");
		printf("\n  %02d:%02d:%02d",h,m,s);
		sleep(d);
		system("cls");
}
}
