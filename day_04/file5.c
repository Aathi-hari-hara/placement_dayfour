#include <stdio.h>

int main(){
    
    //q6
    int x,y;
    scanf("%d%d",&x&y);
    while (x<=y)
    {
        if (x%4==0){
            printf("%d \n",x);
        }
        x++;
    }
    return 0;
}