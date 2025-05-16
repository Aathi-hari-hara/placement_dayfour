#include <stdio.h>
#include <string.h>          

int main(){

    //notes
    // if we are using string we need to add this header file '#include <string.h>' 
    // hardcoded mean already given values(like email & password)
    // by using the ascii values of the characters we check that the give char is upper or lower
    // 'A' -> capital A has a ascii valuea 0f 65 . B has 67 and c=68
    // strcmp -> is keyword used to compare strings(ex: strcmp(value1,value2))

    // q1 to check that given input is upper or lower case

    char c;
    scanf("%c",&c);
    if ((c>='A')&&(c<='Z')) printf("lower");    
    else if ((c>='a')&&(c<='Z')) printf("upper");  


    return 0;
}