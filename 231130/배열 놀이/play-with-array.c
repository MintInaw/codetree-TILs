#include <stdio.h>
#include <stdlib.h>
int main() {
    int j,n,q,i,q1;
    int  c,cnt=0,*p;
    scanf("%d %d",&n,&q);
    p=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);   
    }
    for(i=0;i<q;i++)
    {
        scanf("%d",&q1);
        if(q1==1)
        {
            int a;
            scanf("%d",&a);
            printf("%d\n",p[a-1]);
        }
        else if(q1==2)
        {
            int a;
            scanf("%d",&a);
            int idx=-1;
            for(j=0;j<n;j++)
            {
                if(p[j]==a)
                {
                    idx=j;
                    break;
                }
            }
         printf("%d\n",idx+1);
        }
        else
        {
            int a,b;
            scanf("%d %d",&a,&b);
            for(j=a;j<=b;j++)
            {
                printf("%d ",p[j-1]);
            }
            printf("\n");
        }

    }
    return 0;
}