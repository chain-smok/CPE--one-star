#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a,const void *b){
	return strcmp((char *)a,(char *)b);
}


int main() {
	int n,i,j,k;
	char dict[2000][80];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(dict[i]);
		for(j=0;dict[i][j]!=' ';j++);
		dict[i][j]='\0';
	}
	qsort(dict,n,80,comp);
	k=0;
	for(i=0;i<n;i++){ 
	  if(strcmp(dict[i],dict[k])!=0){
	  	printf("%s %d\n",dict[k],i-k);
	  	k=i;
	  } 
}
      printf("%s %d\n",dict[k],i-k);
	return 0;
}
