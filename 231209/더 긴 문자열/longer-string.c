#include <stdio.h>
#include <string.h>
int main() {
    int a,b;
    char a1[21],b1[21];
    scanf("%s %s",a1,b1);
    a=strlen(a1);
    b=strlen(b1);
    if(a==b)
    {
        printf("same");
    }
    else if(a>b)
    {
        printf("%s %d",a1,a);
    }
    else
    {
        printf("%s %d",b1,b);
    }
    return 0;
}