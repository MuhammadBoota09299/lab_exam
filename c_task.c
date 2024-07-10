#include <stdio.h>
int main(){
    int Q=8;//dividend
    int M=2;//divisor
    int A=0;
    int x;
    int n=sizeof(Q);//number of bit of dividend
    if (sizeof(A)!=1 && sizeof(Q)!=1){ //if A and Q are single unit
        while (n!=0){ //while n!=0 repeat below steps
        A=A<<1;//shifted left
        x=A;
        Q=Q<<1;//shifted left
        A=A-M;
        if (!(A<<(sizeof(A)-1)) & 1){ //if most significant bit of A is zero
            Q=Q|1;//put least significant bit of q is 1
        }else{ 
           Q=Q|0;//put least significant bit of q is 0
            A=x;// restore A 
        }
        n=n-1;
        }
    }
        printf("quotient =%d\nremainder =%d\n",Q,A);
    }