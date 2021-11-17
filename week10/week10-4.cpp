#include <stdio.h>
int a[10000000]={};///沒寫會補0
int main()
{
    int ans=0;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){///第i個數字沒有被殺掉
            ans++;///找到一個王子i沒死
            ///找到國王i了把他的兄弟殺掉
            for(int k=i+i;k<10000000;k=k+i){
                a[k]=1;///殺掉
            }
        }
    }
    printf("Ans:%d\n",ans);
}
