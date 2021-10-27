///week07 step03-2 比較各種for迴圈
#include <stdio.h>
int main()
{
    ///最簡單的基礎型電腦
    for (int i=0;i<4;i++){
        printf ("i:%d\n",i);
    }///跑四次:0 1 2 3

    ///最簡單的基礎型 人數數字
    for (int i=1;i<=4;i++){
        printf ("人類i:%d\n",i);
    }///跑四次:1 2 3 4

    for(int i=0;i<=4;i++){
        printf ("怪怪的i:%d\n",i);
    }///怪怪的 可以從基礎型走過來
}
