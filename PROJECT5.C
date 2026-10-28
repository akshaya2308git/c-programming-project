#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fp;
char ch;
  fp=fopen("data.txt","w");
  fprintf(fp,"The c programming class is interesting but wage as it is for 4 hours of class we hope to give time in between to concentrate and listen ");
  fclose(fp);
  fp=fopen("data.txt","r");
  while((ch=fgetc(fp))!=EOF)
{
 printf("%c",ch);
}
  fclose(fp);
  fp=fopen("data.txt","a");
  fprintf(fp,"the trainer is very good at teaching and explaining the programs but it is for more hours so we get tired hope it will change soon rest of the class and trainer is good ");
  fclose(fp);
  return 0;

 }

