#include<stdio.h>
#include<time.h>
typedef struct
{
	int year;
	int month;
	int day;
}Time; 
int timediff(Time T1,Time T2)
{
	int year=0,month=0,day=0;
	if(T1.year<T2.year)
	{
		while(T1.month<=12)
		{
			int judge=0;
			if(T1.day!=0&&(T1.month==1||T1.month==3||T1.month==7||T1.month==8||T1.month==10||T1.month==12))
			{
				day=day+31-T1.day+1;
				T1.day=0;
				judge=1; 
			}
			else if(T1.day!=0&&(T1.month==4||T1.month==5||T1.month==6||T1.month==9||T1.month==11))
			{
				day=day+30-T1.day+1; 
				T1.day=0;
				judge=1;
			}
			else if(T1.day!=0&&(T1.year%4==0&&T1.month==2))
			{
				day=day+29-T1.day+1;
				T1.day=0;
				judge=1;
			}
			else if(T1.day!=0&&T1.year%4!=0&&T1.month!=2)
			{
				day=day+28-T1.day+1;
				T1.day=0;
				judge=1;
			}
			if(judge==0&&T1.day==0)
			{
				if(T1.day==0&&(T1.month==1||T1.month==3||T1.month==5||T1.month==7||T1.month==8||T1.month==10||T1.month==12))
				{
					day=day+31;
				}
				else if(T1.day==0&&(T1.month==4||T1.month==6||T1.month==9||T1.month==11))
				{
					day=day+30; 
				}
				else if(T1.day==0&&(T1.year%4==0&&T1.month==2))
				{
					day=day+29;
				}
				else if(T1.day==0&&(T1.year%4!=0&&T1.month==2))
				{
					day=day+28;
				}
			}
			T1.month++;
		}
	}
	while(T1.year<T2.year-1)
	{
		if(T1.year%4==0)
			day=day+366;
		else 
			day=day+365;
		T1.year++;
	}
	if(T1.year==T2.year)
	{
		if(T1.month!=T2.month){
		while(T1.month<T2.month)
		{
			int judge=0;
			if(T1.day!=0&&(T1.month==1||T1.month==3||T1.month==7||T1.month==8||T1.month==10||T1.month==12))
			{
				day=day+31-T1.day+1;
				T1.day=0;
				judge=1; 
			}
			else if(T1.day!=0&&(T1.month==4||T1.month==5||T1.month==6||T1.month==9||T1.month==11))
			{
				day=day+30-T1.day+1; 
				T1.day=0;
				judge=1;
			}
			if(T1.day!=0&&T1.year%4==0&&T1.month==2)
			{
				day=day+29-T1.day+1;
				T1.day=0;
				judge=1;
			}
			if(T1.day!=0&&T1.year%4!=0&&T1.month==2)
			{
				day=day+28-T1.day+1;
				T1.day=0;
				judge=1;
			}
			if(judge==0&&T1.day==0)
			{
				if(T1.month==1||T1.month==3||T1.month==7||T1.month==8||T1.month==10||T1.month==12)
				{
					day=day+31;
				}
				else if(T1.month==4||T1.month==5||T1.month==6||T1.month==9||T1.month==11)
				{
					day=day+30; 
				}
				else if(T1.year%4==0&&T1.month==2)
					day=day+29;
				else
					day=day+28; 
			}
			T1.month++;
		}
		day=day+T2.day;
		}
		else 
		{
			day=T2.day-T1.day+1; 
		}
	}
	return day;
}
int main()
{
	Time T1,T2;
	printf("Enter first year: ");
	scanf("%d",&T1.year);
	printf("Enter first month: ");
	scanf("%d",&T1.month);
	printf("Enter first day: ");
	scanf("%d",&T1.day); 
	printf("Enter the second year: ");
	scanf("%d",&T2.year);
	printf("Enter the second month: ");
	scanf("%d",&T2.month);
	printf("Enter the second day: ");
	scanf("%d",&T2.day); 
	int a=timediff(T1,T2);
	printf("%d",a);
}
