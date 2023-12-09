#include <stdio.h>

int main() {
    char a[4][21];
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=3;i>-1;i--)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}