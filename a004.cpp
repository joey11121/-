#include<stdio.h>

int main(void){
	
	int year;
	while(scanf("%d", &year)!= EOF){
	if(year%4!=0)
	printf("平年\n");
	else if(year%4==0&&year%100==0&&year%400!=0)
	printf("平年\n");
	else if(year%4==0&&year%100!=0)
	printf("閏年\n");
	else if(year%400==0)
	printf("閏年\n");
	}
	return 0;
} 
