#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char x;
	int inside=0;
	while((x=getchar())!=EOF){
		if(x=='"'){ 
		  if(inside){
		  	putchar('\'');
		  	putchar('\'');} 
		  else {putchar('`');
		        putchar('`');} 
		  inside=!inside;
		} 
		else putchar(x);
	}
	return 0;
}
