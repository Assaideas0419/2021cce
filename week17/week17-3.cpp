///week17-3 step01-3 ��� �n�t�Xwhile(�j��)
#include <stdio.h>
int main()
{
    int n=123456789;///���ӼƦr,�C�@�쳣��X��

    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("%d\n",sum);
}
