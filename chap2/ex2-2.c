#include <stdio.h>
 int main(void){
    int x;
    printf("整数を入力してください。"); 
    scanf("%d",&x);

    printf("5で割った商は%dです\n",x/5);
    printf("5で割った剰余は%dです\n",x%5);

    return 0;
 }