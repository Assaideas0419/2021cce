///week17-2 step01-2 剝皮 要配合while(迴圈)
#include <stdio.h>
int main()
{
    int n=20030607;///有個數字,每一位都拆出來
    while(n>0){///還有皮?繼續剝
        printf("%d => %d %d\n",n,n/10,n%10);
        n=n/10;
    }
}
