#include <stdio.h>
#include <string.h>
int main() {
    char a[21],c,*p;
    int i,st=0;
    scanf("%s",a);
    scanf(" %c",&c);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==c)
        {
            st=i;
            break;
        }
    }
    if(st>=0)
    {
    	printf("%d",st);
	}
	else
	{
		printf("No");
	}
    return 0;
}