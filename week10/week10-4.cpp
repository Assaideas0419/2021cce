#include <stdio.h>
int a[10000000]={};///�S�g�|��0
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){///��i�ӼƦr�S���Q����
            ans++;///���@�Ӥ��li�S��
            ///�����i�F��L���S�̱���
            for(int k=i+i;k<10000000;k=k+i){
                a[k]=1;///����
            }
        }
    }
    printf("Ans:%d\n",ans);
}
