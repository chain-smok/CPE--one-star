#include <stdio.h>
#include <stdlib.h>


int main() {
	long day,n;
	while(scanf("%ld%ld",&n,&day)!=EOF){
		 while(n<day){
		 	day-=n;
		 	n++;
		 }
	  printf("%ld",n);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
