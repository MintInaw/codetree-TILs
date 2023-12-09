#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    char a[20][21];
    char b;
    int n,i,j,cnt=0;
    double sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %s",a[i]);
    }
    scanf("%c",&b);
    for(i=0;i<n;i++)
    {
        for(j=0;j<21;j++)
        {
            if(a[i][j]==b)
            {
                cnt++;
                sum+=strlen(a[i]);
                break;
            }
        }
    }
    printf("%d %.2lf",cnt,round(sum/cnt));
    return 0;
}