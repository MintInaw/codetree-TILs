#include <stdio.h>

int main() {
    int a[100],i,j,c,temp;
    scanf("%d",&c);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}