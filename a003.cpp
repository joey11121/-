#include<stdio.h>

int main(void){
	
	int S, M, D;
	while(scanf("%d %d\n", &M, &D)!= EOF){
	S=(M*2+D)%3;
	if(S==0)
	printf("´¶³q\n" );
	else if(S==1)
	printf("¦N\n");
	else if(S==2)
	printf("¤j¦N\n");
	}
	return 0;
} 
