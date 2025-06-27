#include <stdio.h>

int main(void){
    int x;
    printf("整数値を入力せよ");scanf("%d",&x);
    printf("7を足すと%dです\n",x+7);
    printf("7をひくと%dです\n",x-7);
    printf("7をかけると%dです\n",x*7);
    printf("7を割った商は%dです\n",x/7);
    printf("7を割った剰余は%dです\n",x%7);
    return 0;
}