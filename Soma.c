#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 15
#define INT 1
#define STRING 2
#define SOMA 3


int main(){
	char *p = (char *) malloc(MAX*sizeof(char));
	char *pFim = p;
	char *q;
	char c = 0;
	int n=0,m=0;
	int soma=0;
	int tipo=0;
	
	while(2){
		scanf("%c",&c);
		if(isdigit(c)){
			*p=c;
			p++;
			n++;
			tipo=INT;			
		}else if(c=='+'){
			*p='\0';
			soma+=atoi(pFim+m);
			*p=c;
			p++;
			n++;
			m=n;
			tipo=SOMA;
		}else{
			if(c!='\n')tipo=STRING;
			break;
		}
	}
	//*p='\0';
	if(tipo==INT){
		soma+=atoi(pFim+m);	
		printf("%d\n",soma);
	}else{
		printf("ERROR\n");	
	}

}
