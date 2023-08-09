#include <stdio.h>

int *rpointer(int *,int);
int main()
{
    int i, *ptr;
    int arr[]={11,22,33,44,55};
    i=2;
    printf("adderess of arr = %p\n",arr);
    ptr= rpointer(arr,i);
    printf("\n After incrementing arr by 2\n\n");
    printf("address of ptr = %p\n\n",ptr);
    printf("value of %p is %d\n",ptr,*ptr);
    return 0;
}
int *rpointer(int *p,int n)
{
    p=p+n;
    return p;
}
