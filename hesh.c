#include<stdio.h>
int main(){
char string[20];
int i=0;


 printf("Please don't type more than 20 characters, if you want so edit the source code.\n");
 printf("Enter the string: ");
   gets(string);
   while(string[i]!='\0'){
        if(string[i]>31&&string[i]<80){
                      string[i]=string[i]+47;
                                      }
        else if(string[i]>79&&string[i]<127){
                      string[i]=string[i]-47;
                                            }
   i++;}
puts(string);
}

