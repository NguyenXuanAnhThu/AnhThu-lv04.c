#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, n, m;
    float max;
    float a[20][20];
    printf ("hello boss\n");
    printf ("Nhap cap cua ma tran n,m \n");
    scanf ("%d%d",&n,&m);
    for (i=1;i<=n;i++)
          for (j=1;j<=m;j++)
          {
            printf("a[%d,%d]\n",i,j);
            scanf("%f",&a[i][j]);
          }
    max=a[1][1];
    for (i=1;i<=n;i++)
         for (j=1;j<=m;j++)
         {
             if(max<a[i][j])
                max=a[i][j];
         }
      printf("So lon nhat trong ma tran := %0.1f \n",max);
}
