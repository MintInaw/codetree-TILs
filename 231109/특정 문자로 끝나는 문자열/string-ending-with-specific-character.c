#include <stdio.h>
#include <string.h>
int main() {
    char a[10][21],c;
    int len,i,sw=0;
    for(i=0;i<10;i++)
    {
        scanf("%s",a[i]);
    }
    scanf(" %c",&c);
    for(i=0;i<10;i++)
    {
        len=strlen(a[i]);
        if(c==a[i][len-1])
        {
            printf("%s\n",a[i]);
            sw=1;
        }
        
    }
    if(sw==0)
    {
        printf("None");
    }
    return 0;
}