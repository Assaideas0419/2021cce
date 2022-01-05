///week17-3 step01-3 剝皮 要配合while(迴圈)
#include <stdio.h>
int main()
{
    int n=123456789;///有個數字,每一位都拆出來

    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("%d\n",sum);
}
