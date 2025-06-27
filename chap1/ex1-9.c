#include <stdio.h>

int main (void){
    int no;
    printf("整数を入力して下さい。");
    scanf("%d",&no);

    // printf("%dから7をひくと",no);
    // printf("%dです。",no-7);
    printf("%dから7をひくと%dです。\n",no,no-7);
    return 0;
}