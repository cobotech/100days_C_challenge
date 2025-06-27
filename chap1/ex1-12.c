//読み込んだ3つの整数値の和を表示するプログラムを作成せよ。
#include <stdio.h>

int main(void){
    int x,y,z;
    puts("3つの整数を入力してください");
    printf("xの値");scanf("%d",&x);
    printf("yの値");scanf("%d",&y);
    printf("zの値");scanf("%d",&z);
    printf("3つの整数和は%dです。\n",x+y+z);

    return 0;
}