#include <stdio.h>
#include <string.h>
int main() {
    char a[10][21];
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%s",a[i]);
        sum+=strlen(a[i]);
    }
    printf("%d",sum);
    return 0;
}