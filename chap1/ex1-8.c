#include<stdio.h>
int main(void){
    int no; //noという変数を用意
    printf("整数を入力してください。");
    scanf("%d",&no); //scanf関数で数値を読み込み

    printf("%dに13を加えると",no);
    printf("%dです。\n",no+13);
    return 0;
}