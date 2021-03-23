#include <stdio.h>
int main(){
    int golgremio, totgrem, vitgrem, golinter, totinter, vitinter, jogos, empates, f;
    golgremio = 0, totgrem=0, vitgrem=0, golinter=0, totinter=0, vitinter=0, jogos=0; empates=0;

    while(1){
        scanf("%d %d", &golinter, &golgremio);
        if(golinter>golgremio)vitinter++;
        if(golgremio>golinter)vitgrem++;
        if(golgremio==golinter)empates++;
        jogos++;
        totgrem+=golgremio;
        totinter+=golinter;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &f);
        if(f==1)
            continue;
         if(f==2)
            break;
    }

        printf("%d grenais\n", jogos);
        printf("Inter:%d\n", vitinter);
        printf("Gremio:%d\n", vitgrem);
        printf("Empates:%d\n", empates);
        if(vitgrem>vitinter)
            printf("Gremio venceu mais\n");
            if(vitinter>vitgrem)
            printf("Inter venceu mais\n");
            if(vitgrem==vitinter)
                printf("Nao houve vencedor\n");

                printf("%d gols o Inter marcou\n", totinter);
                printf("%d gols o Gremio marcou\n", totgrem);
       return 0;
    }
