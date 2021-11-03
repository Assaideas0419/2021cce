#include <stdio.h>

int main( void )
{
   int i,j;
   int n;

   printf("請輸入大小:\n");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
   	for(int j=1;j<=i;j++){
   		printf(" ");
   	}
   	for(int j=1;j<=n;j++){
   		printf("*");
   	}
   	printf("\n");
   }
   return 0;
}
