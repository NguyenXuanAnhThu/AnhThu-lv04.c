#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, max, min;
    int a[10];
    printf ("hello boss\n");
    printf ("nhap gia tri cua n:= \n");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
       {
        printf("nhap phan tu thu i:=\n");
        scanf ("%d",&a[i]);
        }
    {
    max=a[1];
    for (i=1;i<=n;i++)
       {
        if (max<a[i])
            max = a[i];
       }
    printf ("So lon nhat la %d\n",max);
    min=a[1];
    for (i=1;i<=n;i++)
       {
        if (min>a[i])
            min = a[i];
       }
    printf ("So nho nhat la %d\n",min);
    }
}
