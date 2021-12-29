///week16-5 step2-2 想分析字串 裡面有幾個1
#include <stdio.h>
char line[300]="10101001010101010101011010001001010100";
int main()
{
    int ans=0;
    for(int i=0;line[i]!='\0';i++){
        if(line[i]=='1')ans++;
    }
    printf("%d有個1\n",ans);
}
