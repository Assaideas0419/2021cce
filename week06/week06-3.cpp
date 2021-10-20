
#include <stdio.h>
int main()
{
	int a,b,c;
	int temp;
	scanf("%d%d%d",&a,&b,&c);
	printf ("Now a=%d,b=%d,c=%d\n",a,b,c);
	if (a>c){
		temp=a;
		a=c;
		c=temp;
	}
	printf ("Now a=%d,b=%d,c=%d\n",a,b,c);
	if (b>c){
		temp=b;
		b=c;
		c=temp;
	}
	printf ("Now a=%d,b=%d,c=%d",a,b,c);
}
