#include<stdio.h>
#include<math.h>
int main()
{
      float a1,b1,c1,a2,b2,c2;
       double d,dx,dy,x,y;
      printf (" Giai he phuong trinh bac nhat 2 an \n");
      printf (" A1X+B1Y=C1\n");
      printf (" A2X+B2Y=C2\n");
      printf(" Nhap cac he so \n");
      printf("A1= "); scanf("%f", &a1); printf("\a\n");
      printf("B1= "); scanf("%f", &b1); printf("\a\n");
       printf("C1= "); scanf("%f", &c1); printf("\a\n");
       printf("A2= "); scanf("%f", &a2); printf("\a\n");
      printf("B2= "); scanf("%f", &b2); printf("\a\n");
      printf("C2= "); scanf("%f", &c2); printf("\a\n");
       d=a1*b2-a2*b1;
       dx=c1*b2-c2*b1;
       dy=a1*c2-a2*c1;
       if (d!=0)
       {
             x=dx/d;
             y=dy/d;
             printf(" He phuong trinh co nghiem duy nhat (x,y)=(%.2f,%.2f)",x,y);
             }
       else if (dx!=0||dy!=0) printf(" he phuong trinh vo nghiem");
             else printf (" He phuong trinh co vo so nghiem");
       
       return 1;    
}