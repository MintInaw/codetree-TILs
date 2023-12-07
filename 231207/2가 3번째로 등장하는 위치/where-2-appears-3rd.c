#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,n,*p,i,cnt=0;
    scanf("%d",&n);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i]==2)
        {
            cnt++;
        }
        if(cnt==3)
        {
            a=p[i]+1;
            break;
        }
    }
    printf("%d",a);
    return 0;
}