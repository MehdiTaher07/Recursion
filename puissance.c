#include<stdio.h>
int puissance(int a,int b){
	if(b==0)
		return 1;
	else
		return a*puissance(a,b-1);
}
int main(){
	int a=3,b=2;
	printf("pow(%d,%d)=%d",a,b,puissance(a,b));
	return 0;
}
