#include <stdio.h>
#include <stdlib.h>


int main() {
	long long a;
	while(scanf("%ld",&a)){
         if(a==0)break;
		 else if(a%11==0){
			printf("%ld is a multiple of 11.",a);
		}else printf("%ld is not a multiple of 11.",a);
	}
	
}
