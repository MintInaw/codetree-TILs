#include <stdio.h>
#include <string.h>
int main() {
    int c=0;
    char a[100],b[100];
    scanf("%s %s",a,b);
    c=strlen(a)+strlen(b);
    printf("%d",c);
    return 0;
}