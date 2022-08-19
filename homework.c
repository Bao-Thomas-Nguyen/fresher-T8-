#include<stdio.h>
#include<stdint.h>

#define HIGH 1
#define LOW 0


uint8_t POARTA = 0b00000000;
static int y;

void digitalWrite ( uint8_t PIN , uint8_t STATUS)
    {
         int a[8] , i;
        int y = ( int)POARTA;
         uint8_t POARTx= 0x80 >> PIN;
        if (STATUS==HIGH)
            {

            POARTA = POARTA | POARTx;
        
            }
        else
            {
            POARTA = POARTA ^ POARTx; 

            }

            printf(" \t Port A= ,%d ", POARTA);

             y = ( int)POARTA;

            printf("y=%d,", y);

        for(i=0;y>0;i++)  
            {  

            a[i]=y%2;  
            y=y/2;  

            }  
            printf("\t Dang nhi phan cua so vua nhap la = ");  

        for(i=i-1;i>=0;i--)  
            {  

            printf("%d",a[i]);  
            }

             printf(" \n ");  
     

    }
    int main(int argc, char const *argv[])
    {
        digitalWrite(0,HIGH);
        // 0b00000000 -> 0b10000000
       
        digitalWrite(1,HIGH);
        //0b10000000->0b11000000
       
        digitalWrite(4,HIGH);
        //  0b11000000->0b11001000
        
        digitalWrite(3,LOW);
        //0b11001000 -> 0b11001000
        digitalWrite(3,HIGH);
        digitalWrite(3,LOW);

     
        digitalWrite(1,LOW);
        //0b11001000 -> 0b10001000
     
       digitalWrite(0,LOW);
        //0b10001000 -> 0b00001000

    }
    