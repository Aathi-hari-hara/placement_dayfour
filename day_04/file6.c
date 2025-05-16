#include <stdio.h>

int main(){
    
    //q7 factorial
    int a,f=1;
    scanf("%d",&a);
    while (a>=1){
        f*=a;
        a--;
    }
    printf("%d \n",f);
    
    return 0;
}