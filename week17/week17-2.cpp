///week17-2 step01-2 ��� �n�t�Xwhile(�j��)
#include <stdio.h>
int main()
{
    int n=20030607;///���ӼƦr,�C�@�쳣��X��
    while(n>0){///�٦���?�~���
        printf("%d => %d %d\n",n,n/10,n%10);
        n=n/10;
    }
}
