///week15-3.cpp step03-1 輾轉相除法
///持續 大A 除 中B 得到小C
///老大換人當 老二換人當 老三是他們的餘數
///持續做 直到C=0 則B是答案
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    printf("a大的%d b中的%d c小的%d\n",a,b,c);
    while(1){
        if(c==0) break;
        a=b;
        b=c;
        c=a%b;
        printf("a大的%d b中的%d c小的%d\n",a,b,c);
    }
    printf("因為c是0,離開迴圈,而且答案是中間的b\n");
    printf("%d",b);
}
