#include<stdio.h>
#include <string.h>
int main(int argc,char **argv){
char *string=argv[1];
int i=0;
   while(string[i]!='\0'){
        if(string[i]>31&&string[i]<79){
                      string[i]=string[i]+47;
                                      }
        else if(string[i]>78&&string[i]<127){
                      string[i]=string[i]-47;
                                            }
   i++;}
puts(string);
}

