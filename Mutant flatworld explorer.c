#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int m,n,x,y,x2,y2,dir,i;
  //�@�ɤj�p:m*n�A�짤��:(x,y)�A�s����:(x2,y2) 
  char c;
  char inst[102];
  char orient[5]="ESWN";
  int move[4][2]={{1,0},{0,-1},{-1,0},{0,1}};
  int scent[51][51]={0};
  scanf("%d%d",&m,&n);//��J�@�ɤj�p 
  while(scanf("%d %d %c",&x,&y,&c)!=EOF){
  	for(dir=0;dir<4;dir++)
  	   if(c==orient[dir])break;
  	scanf("%s",inst);//Ū�J�R�O�r�� 
  	for(i=0;i<strlen(inst);i++){ 
  	  if(inst[i]=='F'){
  	  //���ثe��V�e�i1�B,�p��s����x2,y2
	  x2=x+move[dir][0]; 
      y2=y+move[dir][1];
      if(x2<0||y2<0||x2>m||y2>n){
      	if(scent[x][y]==0){ 
      	//���B���e�S������,�h������,�קK�H��A���^�� 
      	scent[x][y]=1;
      	printf("%d%d%c LOST\n",x,y,orient[dir]);
      	break;
      }	
	  }
  	else{
  		//�b���`�d�򤧤�,�h�e�i��s��m
		x=x2,y=y2; 
	  }
}
  	else if(inst[i]=='R'){
  		dir=(dir+1)%4;
	  }
	else if(inst[i]=='L'){
		dir=(dir+3)%4;
	}
  	} 
  	if(i==strlen(inst))printf("%d%d%c\n",x,y,orient[dir]);
  } 	
	return 0;
}
