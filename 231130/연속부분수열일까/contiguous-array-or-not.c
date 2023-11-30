#include <stdio.h>
#include <stdlib.h>
int main() {
    int a1,b1,i,j,cnt=0;
    int *p1,*p2;
    scanf("%d %d",&a1,&b1);
    p1=(int *)malloc(sizeof(int)*a1);
    p2=(int *)malloc(sizeof(int)*b1);
    for(i=0;i<a1;i++)
    {
        for(j=0;j<b1;j++)
        {
            if(p2[j]==p1[i])
            {
                cnt++;
            }
        }
    }
    if(cnt==b1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}