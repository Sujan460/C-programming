//WAP to ask user's name and age as input,and then display a greeting message along with their age
#include<stdio.h>
int main(){
char a[20];
int b;
printf("Enter your name\n");
scanf("%s",a);
printf("Enter your age\n");
scanf("%d",&b);
printf("Namaste, %s your age is %d",a,b);
return 0;
}