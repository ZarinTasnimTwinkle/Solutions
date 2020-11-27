#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        long a[n];
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("%d\n",n);

    }
}
