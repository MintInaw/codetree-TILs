#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,*p,i,sum=0;
    char sum1[100],tmp;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    sprintf(sum1, "%d", sum);
    printf("%s%c",sum1+1,sum1[0]);
    return 0;
}