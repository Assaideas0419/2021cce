///week16-4 step2-2 想分析字串,裡面有幾個0幾個1
#include <stdio.h>
char line[300]="101010010101010101011010001001010100";
int main()
{
    int ans=0;
    int i=0;
    while(line[i]!='\0'){
        if(line[i]=='1')ans++;

        i++;
    }
    printf("有%d個1\n",ans);
}
