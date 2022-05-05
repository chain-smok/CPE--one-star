#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int isPrime(int n){
	int k;
	for(k=2;k<n;k++){
		if(n%k==0)break;
	}
    return k==n;
}


int main() {
  int n,n1,n2;
  while(scanf("%d",&n)!=EOF){
  	if(isPrime(n)){
  	  n1=n;	
  	  n2=0;
  	  while(n1){
    	  n2=n2*10+n1%10;
  	  n1/=10;
	  }
	  if(n2!=n&&isPrime(n2)){
	  	printf("%d is emirp.\n",n);
	  }else printf("%d is prime.\n",n);
	}
	else printf("%d is not prime.\n",n);	
  }	
	return 0;
}
