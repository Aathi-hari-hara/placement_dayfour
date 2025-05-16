#include <stdio.h>

int main(){

    // q10 login access

    char user[20]="aathi", name[50];
    int password=09876, userpass;
    scanf("%s%d",name,&userpass);
    if (strcmp(user,name)==0 && (password==userpass)) printf("login"); 
    else printf("no"); 

    return 0;
}