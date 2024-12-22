// No need to thanks me just enjoy coding !
//  Let's go Lab-1 
//WAP to input two integers from the user and display their sum and product.
#include<stdio.h>
int main(){
int a,b;
printf("Enter any two integers\n");
scanf("%d%d",&a,&b);
printf("The sum is : %d\n",a+b);
printf("The product is : %d",a*b);
return 0;
}

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

//WAP to check if a given number is even or odd using the statement.If the number is odd,print the number
#include<stdio.h>
int main(){
int a;
printf("Enter any number");
scanf("%d",&a);
if(a%2==0){
printf("The given number is even");
}
if(a%2==1){
printf("%d is a odd number",a);
}
return 0;
}

//WAP to check whether a person is eligible to vote or not.A person is eligible if their age is 18 or above
#include<stdio.h>
int main(){
int a;
printf("Enter your age : \n");
scanf("%d",&a);
if(a>=18){
printf("Eligible for vote");
}
else{
printf("Not eligible for vote");
}
return 0;
}

////WAP to determine the grade of a student based on their marks :
#include<stdio.h>
int main(){
int a;
printf("Enter your marks : \n");
scanf("%d",&a);
if(a>=90){
printf("Grade A");
}
else if(a>=75){
printf("Grade B");
}
else if(a>=50){
printf("Grade C");
}
else{
printf("Grade F");
}
return 0;

//WAP to create a simple calculator
#include<stdio.h>
int main(){
int a,c;
char b;
printf("Enter 1st number \n");
scanf("%d",&a);
printf("Enter the operator (+,-,*,/) :\n");
scanf(" %c", &b);
printf("Enter 2nd number\n");
scanf("%d",&c);
switch(b){
case '+':
printf("The sum is : %d",a+c);
break;
case '-':
printf("The subtraction is: %d",a-c);
break;
case '*':
printf("The multiplication is : %d",a*c);
break;
case '/':
printf("The division is : %f",(double)a/c);
break;
default :
printf("Invalid");
}
return 0;
}


//WAP to calculate the factorial of a given number using a for loop
#include<stdio.h>
int main(){
int a,b=1;
printf("Enter any number to calculate factorial :");
scanf("%d",&a);
for(int i=1;i<=a;i++){
b=b*i;
}
printf("The factorial of %d is %d",a,b);
return 0;
}

//Write a program to print the first 100 even numbers using a for loop.
#include<stdio.h>
int main(){
int count=0;
printf("The 1st 100 prime numbers are :\n");
for(int j=1;j>=count;j++){
if(j%2==0){
printf("%d ",j);
count++;
}
if(count==99){
break;
}
}
return 0;
}

//Write a program to find the sum of digits of a number using a while loop.
#include<stdio.h>
int main(){
int a,rem,b=0;
printf("Enter any number ");
scanf("%d",&a);
while(a!=0){
rem =a%10;
a/=10;
b=b+rem;
}
printf("the total sum is: %d",b);
return 0;
}

//Write a program that keeps asking the user to input a number until they enter a negative number
//using a do while loop.
#include<stdio.h>
int main(){
int a;
do{
printf("Enter any number");
scanf("%d",&a);
}while(a>0);
return 0;
}

//Write a program to find the first number divisible by 7 in the range of 1 to 100. Use a for loop
//with the break statement.
#include<stdio.h>
int main(){
int a,b=0;
for(int i=1;i<=100;i++){
a=i%7;
if(i%7==0){
b++;
}
if(b==1){
printf("The 1st number divisible by 7 in the range of 1 to 100 is %d",i);
break;
}
}
return 0;
}

//Write a program to print all numbers from 1 to 20, except multiples of 3, using the continue
//statement.
#include<stdio.h>
int main(){
int a;
printf("The numbers from 1 to 20 except multiples of 3 are :\n");
for(int i=1;i<=20;i++){
if(i%3==0){
continue;
}
else{
printf("%d ",i);
}
}
return 0;
}

// This much for Lab-1. Hope to see you in Lab-2 !