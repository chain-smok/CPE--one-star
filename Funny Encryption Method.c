#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>





int main() {
   int n;	
   int m,m2;
   int b1,b2;
   int hex[16]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
   scanf("%d",&n); 
   while(n--){
   	 scanf("%d",&m); 
   	 m2=m;
   	 b1=0;
   	while(m>0){
   		b1+=m%2;
   		m/=2;
	}
	b2=0;
   	while(m2>0){
   	    b2+=hex[m2%10];   
   		m2/=10;
	}
   	printf("%d %d",b1,b2);
   }
	return 0;
}
