#include <stdio.h>
#include <string.h>
int main() {
    char a[10][21];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s",a[i]);
        printf("%s\n",a[i]);
    }
    return 0;
}