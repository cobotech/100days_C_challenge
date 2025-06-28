#include <stdio.h>
int main (void){
    int x,y;
    puts("2つの整数を入力してください。");
    printf("x="); scanf("%d",&x);
    printf("y="); scanf("%d",&y);

    printf("xの値はyの値の%d %% です。\n",100*x/y);
    return 0;
}