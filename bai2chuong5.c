#include<stdio.h>
#include<math.h>
#define MAX 100
    
/* hàm nhập các phần tử trong mảng */
void nhap()
{   float a[MAX];
    int n;
    
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số phần tử của mảng trong khoảng từ 1 -> MAX
    do
    {
        printf("\nNhap so phan tu trong mang: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSố phan tu khong hop le, xin vui long nhap lai!");
        }
    }while(n <= 0 || n > MAX);
    //sử dụng vòng lặp for để nhập giá trị cho phần tử của mảng
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
/* hàm xuất các phần tử trong mảng */
void xuat()
{   float a[MAX];
    int n;
  //sử dụng vòng lặp for lặp từ đầu đến cuối mảng, cứ mỗi vòng lặp thì in phần tử a[i] ra màn hình
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

float tinhtbc()
{
    float a[MAX]; 
    int n;
    float s = 0;
    float s1 = 0;
    int demam =0;
    int demduong=0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            s = s + a[i];
            demam++;
        }
    }if(demam==0)printf("\nko co so am nao");
    else
        printf("\ntong trung binh cong so am la %.3f  ",s/demam);
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            s1 = s1 + a[i];
            demduong++;
        }
    }if(demduong==0)printf("\nko co so duong nao");
    else
        printf("\ntong trung binh cong so duong la %.3f  ",s1/demduong);
    //return s để trả về tổng các số âm trong mảng
    
    
}
int main()
{
    float a[MAX]; 
    int n;
    nhap();
    xuat();
    tinhtbc();
}