///weel07 step03-1
///了解 for(迴圈),你要把註解也打字
#include <stdio.h>
int main()
{
    int i;///1973年的c發明者的寫法,1989 ANSI C
    for(i=0;i<=3;i++){
        printf ("有幾次呢?\n");
    }///課本寫法 不好!

    ///1998/1999新版的c++/c寫法
    for (int i=0;i<3;i++){
        printf ("老師推薦的寫法,有幾次呢?\n");
    }///會跑三次
}
