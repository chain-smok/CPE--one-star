#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main() {
	int n,m,i,base,cs,x,k,min,total;
	int cost[36];
	int cheapeastlist[36],cheapeastcount;
	scanf("%d",&n);
	for(cs=1;cs<=n;cs++){
		printf("Case %d:\n",cs);
		for(i=0;i<36;i++){
		scanf("%d",&cost[i]);}
	    scanf("%d",&m);
		while(m--){
			scanf("%d",&x);
			min=2135678907;
			cheapeastcount=0;
			for(base=2;base<37;base++){
				total=0;
				k=x;
				while(k>0){
				 total+=cost[k%base];
				 k/=base;
				}
				if(total<min){
					min=total;
					cheapeastlist[0]=base;
					cheapeastcount=1;
				}
				else if(total==min){
					cheapeastlist[cheapeastcount++]=base;
				}
			}
		printf("Cheapeast base(s) for number %d:",x);
		for(base=0;base<cheapeastcount;base++)
			printf(" %d",cheapeastlist[base]);
		printf("\n");
		}
		if(cs<n)printf("\n");
}
	return 0;
}
