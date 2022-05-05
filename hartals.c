#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>





int main() {
	int T,N,P,i,w;
	int hartal,k;
	int count;
	int h[100];
    scanf("%d",&T);
    while(T--){
    	scanf("%d%d",&N,&P);
        for(k=0;k<P;k++){
        	scanf("%d",&h[k]);
		} 
		count=0;
		for(i=1;i<=N;i++){
		w=i%7;
		if(w>=1&&w<=5){
			hartal=0;
			for(k=0;k<P;k++){
				hartal=hartal||(i%h[k]==0);
			}
			count+=hartal;
		} 
		} 
		printf("%d\n",count);
}
	return 0;
}
