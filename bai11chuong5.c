#include<stdio.h>
#include<conio.h>

void PhuongAn()
{
	long dem=0;
	for(long a=1;a<=40;a++)
	{
		for(long b=1;b<=100;b++)
		{
			for(long c=1;c<=200;c++)
			{
				if(c*1000+b*2000+a*5000==200000)
				{
					dem++;
					printf("\nSo to 1000d:%d,so to 2000d:%d,so to 5000d:%d",c,b,a);
				}
			}
		}
	}
	printf("\nTong cong ta co:%d phuong an",dem);
}

void main()
{
	PhuongAn();
}