///選擇排序法 Selection Sort
///原則 舞台上,要留最小的!!
#include <stdio.h>
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++)printf("%d",a[i]);
    printf("\n");///印出陣列
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)printf("%d",a[i]);
    printf("\n");
}
