#include <stdio.h>
int main(){
    int Q=8;//dividend
    int M=2;//divisor
    int A=0;
    int x=A;
    int n=sizeof(Q);//number of bit of dividend
    if (sizeof(A)==1 && sizeof(Q)==1){ //if A and Q are single unit
        A<<1;//shifted left
        Q<<1;//shifted left
        A=A-M;
        while (n!=0){ //while n!=0 repeat below steps
        if (A==0){ //if most significant bit of A is zero
            Q[0]=1;//put least significant bit of q is 1
        }else{ 
           Q[0]=0;//put least significant bit of q is 0
            A=x;// restore A 
        }
        n=n-1;
        }
    }
    else{
        printf("quotient =%d\nremainder =%d\n",Q,A);
    }
    
}