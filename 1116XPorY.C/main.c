#include <stdio.h>
int main(){

int N, i;
double X, Y, res;
scanf("%d", &N);

for(i = 0; i < N; i++){
    scanf("%lf %lf", &X, &Y);
    if(Y == 0){
        printf("divisao impossivel\n");
    }
    else {
        res = X / Y;
        printf("%.1lf\n", res);
    }
}
return 0;
}
