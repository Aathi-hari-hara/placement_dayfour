#include <stdio.h>

int main(){
    
    //  q4
    for(int a=1;a<=50;a++){
        if (a%2==0) printf("the number is divisiable by : %d \n",a);
    }

    q5  factors of 6
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}