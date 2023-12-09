#include<stdio.h>
int main()
{
    int arr[10];
    int size;
    int min1;
    int min2;

    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&size);

    for(int i=0;i<size;i++)
    {
        printf("ENTER ELEMENT[%d]:",i);
        scanf("%d",&arr[i]);
    }

    min1=arr[0];
    min2=arr[0];
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min1)
        {
            min2=min1;
            min1=arr[i];
        }
        else if(arr[i]<min2 && arr[i]>min1)
        {
            min2=arr[i]; 
        }
    }

    printf("SMALLEST ELEMENT:%d\n",min1);
    printf("SECOND SMALLEST ELEMENT:%d\n",min2);

    return 0;

}