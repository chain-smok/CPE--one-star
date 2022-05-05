#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define maxn 1001
int comp(const void*a,const void *b){
  char *pa=(char *)a;
  char *pb=(char *)b;
  return *pa-*pb;
}

int main() {
    int i,j;
    char a[maxn];
    char b[maxn];
	while(gets(a)!=NULL&&gets(b)!=NULL)
	{
	  qsort(a,strlen(a),sizeof(char),comp);
	  qsort(b,strlen(b),sizeof(char),comp);	
	  for(i=0,j=0;i<strlen(a)&&j<strlen(b);)
	  {
	  	if(a[i]==b[j]&&a[i]!=32&&b[j]!=32){
	  		printf("%c",a[i]);
	  		i++;j++;
		  }
	    if(a[i]>b[j])
		  j++;	
	  	else i++; 	
	  }
	    printf("\n");
	}
	return 0;
}
