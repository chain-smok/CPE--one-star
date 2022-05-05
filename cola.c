#include <stdio.h>
#include <stdlib.h>


int main() {
	int cola,count;
	while(scanf("%d",&cola)==1){
		count=0;
		while(cola>=3){
			count+=3;
			cola-=2;
		}
       if(cola==2)count+=3;	
	   else count+=cola;
	   printf("%d\n",count);
	}
	return 0;
}
