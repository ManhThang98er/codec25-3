void nhap()
{   float a[50], b[50], c[50], d[50];
    int n;
    
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số phần tử của mảng trong khoảng từ 1 -> MAX
    do
    {
        printf("\nNhập số phần tử trong mảng: ");
        scanf("%d", &n);
        if(n <= 0 || n > 50)
        {
            printf("\nSố phần tử không hợp lệ, xin vui lòng nhập lại!");
        }
    }while(n <= 0 || n > 50);
    //sử dụng vòng lặp for để nhập giá trị cho phần tử của mảng
    for(int i = 0; i < n; i++)
    {
        printf("\nNhập a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("\nNhập b[%d]: ", i);
        scanf("%f", &b[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("\nNhập c[%d]: ", i);
        scanf("%f", &c[i]);
    }
    for(int i = 0; i < n; i++)
    {
        printf("\nNhập d[%d]: ", i);
        scanf("%f", &d[i]);
    }
        
        
}
int xuat(){
    float a[50], b[50], c[50], d[50];
    int n;
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
        printf("%8.3f", b[i]);
        printf("%8.3f", c[i]);
        printf("%8.3f", d[i]);
        float min = a[i];
        if(b[i] < min){
            min = b[i];
        }
        if(c[i] < min){
        min = c[i];
        }
        if(d[i] < min){
        min = d[i];
        }
        printf("  min= %2.3f", min);
        float max = a[i];
        if(b[i] > max){
            max = b[i];
        }
        if(c[i] > max){
        max = c[i];
        }
        if(d[i] > max){
        max = d[i];
        }
        printf("  max= %2.3f\n", max);
    }
}


int main(){
    float a[50], b[50], c[50], d[50];
    int n;
    nhap();
    xuat();
}