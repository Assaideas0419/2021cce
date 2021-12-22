///除法,餘數,輾轉
///大 除 中 得到餘數 小
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    printf("%d",b);
}
