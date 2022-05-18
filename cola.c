#include <stdio.h>
#include <stdlib.h>

int main() {
	int cola,count;
	while(scanf("%d",&cola)==1){
		count=0;
		while(cola>=3){
			count+=3;//increase 3 empty bottles
			cola-=2;//3 empty bottles exchange 1 new cola≡decrease 2 cola
		}
       if(cola==2)count+=3;//lend one empty bottle≡increase 3 empty bottles
	   else count+=cola;//cola=1
	   printf("%d\n",count);
	}
	return 0;
}
