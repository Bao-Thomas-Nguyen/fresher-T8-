#include <stdio.h>
void nhapchuoi(int array[], int length)
    {
        printf(">>Nhap phan tu:\n");
        for (int i = 0; i < length; i++) scanf("%d", &array[i]);
    }

void hienthichuoi(int array[], int length)
    {
        printf(">>Mang vua nhap:\n"); 
        for(int i = 0; i < length; i++)  printf("%d ", array[i]);  
        printf("\n");
    }

void dem(int array[], int b[],int length)
    {
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (array[j]=array[i])
                {
                    b[i]++;     
                }
                
            }
            
        }
        
        int dem=1;
        for (int i = 0; i < length; i++)
        {
            if (b[i]>dem)       
            {
                dem=b[i];
            }
        }
        for (int i = 0; i < length; i++)
        {
            if (b[i]==dem)       
            {
            printf (" vi tri =%d\n",i);
            printf(" gia tri xuat hien nhieu nhat =%d\n",array[i]);
            
            printf( " so lan xuat hien =%d\n",*(short*)(b[i]));
            }            
        }
        

            
    }

int main(int argc, char const *argv[])
{
    int n;
    printf(">>Nhap so phan tu: ");
    scanf("%d", &n);
    int array[n];
    int b[]={0};
    nhapchuoi(array,n);
    hienthichuoi(array,n);
    dem(array,b,n);
    return 0;
}
