#include <stdio.h>
#include <string.h>
int main() {
    char a[100],temp;
    int i,j,c,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}