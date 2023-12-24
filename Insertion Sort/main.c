#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
    void Insertion(int A[],int n)
    {
        int i,j,x;
        for(i=1;i<n;i++)
        {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
        A[j+1]=A[j];
        j--;
        }
        A[j+1]=x;
        }
    }
    int main()
    {
        int A[1000],n,i;
        printf("How many number do you want to enter? ");
        scanf("%d",&n);
        printf("Enter your %d number's : ",n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        Insertion(A,n);
        for(i=0;i<n;i++)
        {
            printf("%d ",A[i]);
        }

        printf("\n");
        return 0;
    }
