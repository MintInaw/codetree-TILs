#include <stdio.h>
#include <string.h>
int main() {
    char a1[21],b1[21],c1[21];
    int a,b,c,max,min;
    scanf("%s %s %s",a1,b1,c1);
    a=strlen(a1);
    b=strlen(b1);
    c=strlen(c1);
    max=a;
    min=a;
    if(max<b)
    {
        max=b;
    }
    else
    {
        max=c;
    }
     if(min>b)
    {
        min=b;
    }
    else
    {
        min=c;
    }
    printf("%d",min-max+1);
    return 0;
}