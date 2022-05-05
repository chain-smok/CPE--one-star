#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 40
int main() {
	long long n;
	int i,bit,count;
	char s[MAX];
	while(scanf("%lld",&n)!=EOF){
      if(n==0)break;
      i=MAX-1;
	  count=0;
	  s[i]='\0'; 
	do{
	  i--;
   	  bit=n%2;
	  count+=bit;
      s[i]='0'+bit;
	  n/=2;
	}while(n>0);
	 printf("The parity of %s is %d (mod 2)\n",&s[i],count);
	}
	return 0;
}
