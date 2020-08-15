#include<stdio.h>
int factoriel(int f){
	if(f==0)
		return 1;
	else
		return f*factoriel(f-1);
}
int main(){
	int f=5;
	printf("factoriel(%d)=%d",f,factoriel(f));
	return 0;
}
