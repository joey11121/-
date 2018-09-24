#include<stdio.h>

int main(void){
	int t, times=0, a, b, c, d, e; 
	scanf("%d", &t);
	while(times<t){
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if((b-a)==(c-b)){
			e=d+(c-b);
			printf("%d %d %d %d %d\n", a, b, c, d, e);
		}
		else if((b/a)==(c/b)){
			e=d*(c/b);
			printf("%d %d %d %d %d\n", a, b, c, d, e);
		}
		times++; 
	}
	return 0;
} 
