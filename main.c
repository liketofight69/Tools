#include <stdio.h>
#include <ctype.h>

void print(char string[],int i){
    printf(string,i);




}




void isNum(){
 int i;
 char str[]="hello...";
 i=0;
 while(isalnum(str[i])) i++;
 print("the first %d chars",i);
 return 0;



}




int main(){
isNum();





}
