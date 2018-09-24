#include<stdio.h>
#include<math.h>
int main(void){
	int t, times=0, a, b, c, root_1, root_2; 

	while(scanf("%d %d %d", &a, &b, &c)!=EOF){
		if(b*b-4*a*c>0){
			root_1=(-b+sqrt(b*b-4*a*c))/(2*a);
			root_2=(-b-sqrt(b*b-4*a*c))/(2*a);
			printf("Two different roots x1=%d , x2=%d\n", root_1, root_2);
		}
		else if(b*b-4*a*c==0){
			root_1=(-b+sqrt(b*b-4*a*c))/(2*a);
			printf("Two same roots x=%d\n", root_1);
		}
		else if(b*b-4*a*c<0){
			printf("No real root\n");
		}
	return 0;
	} 

}

