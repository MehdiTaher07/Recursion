#include<stdio.h>
int palindrome(char ch[],int d,int f){
	if(d>=f){
		return 1;
	}
	else{
		if(ch[d] != ch[f])
			return 0;
		else
			return palindrome(ch,d+1,f-1);
	}
}
int main(){
	char ch[100];
	int i,plindrome=1,n;
	puts("donner une chaine:");
	gets(ch);
	n=strlen(ch)-1;
	printf("%d",palindrome(ch,0,n));
	return 0;
}
