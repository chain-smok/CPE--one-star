#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int compare(const void *a,const void *b){
	   return *(int*)a-*(int*)b;
}
//提供qsort函式
int main() {
	int b[101];
	int s[5000];
	int n,c=0;
	int i,j;
	int ok;
	int m;
	while(scanf("%d",&n)!=EOF){
		ok=1;
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		if(b[0]<1)ok=0;
	    for(i=0;ok&&i<n;i++){
	    	if(!(b[i-1]<b[i]))ok=0;
		}
	//if(s[i]+s[j])有重複,就!=B2-Sequence
	if(ok==1){
	m=0; 
	for(i=0;i<n;i++)	
	  for(j=i;j<n;j++){
	  	s[m]=b[i]+b[j];
	  	m++;
     }
 }
     qsort(s,m,sizeof(int),compare);
     for(i=1;ok&&i<m;i++){
     	if(s[i-1]==s[i])ok=0;
	 }
	 if(ok)printf("Case #%d: It is a B2-Sequence.\n\n",++c);
	 else printf("Case #%d: It is not a B2-Sequence.\n\n",++c);
	}
	return 0;
}
