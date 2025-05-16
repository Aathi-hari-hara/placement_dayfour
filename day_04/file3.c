#include <stdio.h>

int main(){
    
    // q3 prime num
    int x=2;
    if (x<=1){
        printf("%d is not prime number",x);
        return 0;
    }
    int flag=0;
    for (int i=2;i<=x/2;i++){
        if(x%i==0) 
        flag++;
    }
    if(flag==0) printf("%d prime",x);
    else printf("%d it is not",x);

    return 0;
}