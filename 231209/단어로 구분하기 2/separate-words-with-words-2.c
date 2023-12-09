#include <stdio.h>
#include <string.h>
int main() {
    char a[10][21];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%s",a[i]);
        if(i%2!=0)
        {
            printf("%s\n",a[i-1]);
        }
    }
    return 0;
}