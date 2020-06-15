#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n, i=0, numero, cntsd, cntent;
    char lixo1[100000];
    char lixo;
    scanf("%d%c", &n, &lixo);
    while(i<n){
        char saida[30000]={0};
        char entrada[100000];
        char comandos[100000];
        int j, k, h;
        cntsd = 0;
        cntent= 0;
        gets(lixo1);
        gets(entrada);
        gets(comandos);
        numero = strlen(comandos);
        printf("Intancia %d\n", i+1);
        for(j=0; j<numero; j++){
            switch(comandos[j]){
                case '>':cntsd++;break;
                case '<':cntsd--;break;
                case '+':saida[cntsd]++;break;
                case '-':if(cntsd>=0) saida[cntsd]--;break;
                case '.':if(cntsd>=0) printf("%c", saida[cntsd]);break;
                case ',':if(cntsd>=0) saida[cntsd]=entrada[cntent]; cntent++; break;
                case '[':for(k=1; k<numero && saida[cntsd]!=0;){
                            if(comandos[j+k]!=']'){
                                while (comandos[j+k]!=']'){
                                    switch(comandos[j+k]){
                                        case '>':cntsd++;break;
                                        case '<':cntsd--;break;
                                        case '+':saida[cntsd]++;break;
                                        case '-':saida[cntsd]--;break;
                                        case '.':printf("%c", saida[cntsd]);break;
                                        case ',':saida[cntsd]=entrada[cntent]; cntent++; break;
                                        case '#':printf("%.10s", saida);break;
                                    }
                                    k++;
                                }
                            }
                            else {h=j+k; k=1;}
                        }j=h; break;
                case '#': printf("%.10s", saida);
                          break;

            }

        }
        if(i!=n-1) printf("\n\n");

        i++;
    }
    return 0;
}
