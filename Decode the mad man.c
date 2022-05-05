#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char kb[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main(){
	int i;
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c==32||c==10){
			printf("%c",c);
		}
		else{
			c=tolower(c);
			for(i=0;kb[i]!='\0';i++){
				if(c==kb[i]){
				printf("%c",kb[i-2]);
				break;
			}}
		}
	}
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	

