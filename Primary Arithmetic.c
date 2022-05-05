#include <stdio.h>
#include <stdlib.h>


int main() {
	long a,b;
	int count,carry,sum;
	scanf("%ld%ld",&a,&b);
	while(a||b){
		carry=count=0;
		while(a||b){
			sum=a%10+b%10+carry;
			carry=sum/10;
			count+=carry;
			a/=10;
			b/=10;
		}
     if(count==0)printf("No carry operation.\n");
     else if(count==1)
     printf("1 carry operation.\n");
	 else printf("%d carry operations\n",count);
	 scanf("%ld%ld",&a,&b); 
}
	return 0;
}
