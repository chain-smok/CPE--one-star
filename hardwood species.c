#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000000
#define MAX_LEN 32
char Species[MAX_SIZE][MAX_LEN]={};  
int comp(const void*a,const void*b){
	return strcmp((char*)a,(char*)b);
}

int main() {
    int count=0,cs,i,t,k;
	scanf("%d",&cs);
	if(cs==0)exit(0);
	scanf("\n\n");
	for(t=1;t<=cs;t++){
		for(i=0;i<count;i++){
			Species[i][0]='\0';
		}
		count=0;
		gets(Species[count]);
		while(strlen(Species[count])!=0){
			count++;
			gets(Species[count]);
		}		
		qsort(Species,count,MAX_LEN,comp);
		k=0;
		for(i=0;i<count;i++){
			if(strcmp(Species[i],Species[k])!=0){
			printf("%s %.4lf\n",Species[k],100.0*(i-k)/count);
			k=i;
		}
		}
	}
		    printf("%s %.4lf\n",Species[k],100.0*(i-k)/count);
		    if(t<cs)printf("\n");	
	return 0;
}
