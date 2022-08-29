
#include <stdio.h>
#include "conio.h"

void nhapchuoi(int array[], int length)
    {
        printf(">>Nhap phan tu:\n");
        for (short i = 0; i < length; i++) scanf("%d", &array[i]);
    }

void hienthichuoi(int array[], int length)
    {
        printf(">>Mang vua nhap:\n"); 
        for(short i = 0; i < length; i++)  printf("%d ", array[i]);  
        printf("\n");
    }

void up(int array[], int length)
    {
        int i ,j , temp;
        for (int i = 0; i < length; i++)
        {
            for (int  j = 0; j < length-1; j++)
            {
                if (array[j]>array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
                
            }
            
        }
        printf("\n chuoi tang dan :");
        for (int i = 0; i < length; i++)
        {
            printf("%d\t", array[i]);
        }

    }
// void down(int array[], int length)
//     {
      
//     int k=length-k;
//     for (int k = 0; k >0; k++)
//         {
            
//             {
//             array[k]= array[k]+array[length-k];
//             array[length-k]=array[k] - array[length-k];
//             array[k]=array[k]-array[length-k];
            
//             }
//         }
//     for (int i = 0; i < length; i++)
//             {
//             printf("%d\t", array[i]);
//             }
        
        
//    }
 

void down(int array[], int length)
    {
        int i ,j , temp;
        for (int i = 0; i < length; i++)
        {
            for (int  j = 0; j < length-1; j++)
            {
                if (array[j]<array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
                
            }
            
        }
        printf("\n chuoi giam dan :");
        for (int i = 0; i < length; i++)
        {
            printf("%d\t", array[i]);
        }
        
    }

int main(void){
    
    int n;
    printf(">>Nhap so phan tu: ");
    scanf("%d", &n);
 
    int array[n];
    
    nhapchuoi(array, n);
     
    hienthichuoi(array, n);
    
    up(array, n);

    printf("\n-------");
    
    down(array, n);

    
    
}