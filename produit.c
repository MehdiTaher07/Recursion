#include<stdio.h>
int produit(int a,int b){
	if(b==0)
		return 0;
	else
		return a+produit(a,b-1);
}
int main(){
	int a=3,b=3;
	printf("pow(%d,%d)=%d",a,b,produit(a,b));
	return 0;
}
