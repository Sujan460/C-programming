//Let's go assignment 1!

// Program-1 using while loop
// To print a multiplication table of a given number upto 10 */

#include <stdio.h>
int main()
{
int num,a=1;
printf("Enter a number");
scanf("%d",&num);
printf("The multiplication table of %d is :-\n",num);
while(a<=10){
printf("%d*%d = %d\n",num,a,num*a);
a++;
}
return 0;
}


/* Program-1 using do while loop
To print multiplication table of a given number upto 10 */
#include<stdio.h>
int main(){
int num, a=1;
printf("Enter a number");
scanf("%d",&num);
printf("The multiplication table of %d is :-\n",num);
do{
printf("%d*%d = %d\n",num,a,a*num);
a++;
}while(a<=10);
return 0;
}

// Program-1 using for loop
// To print multiplication table of a given number upto 10
#include<stdio.h>
int main(){
int num;
printf("Enter a number");
scanf("%d",&num);
printf("The multiplication table of %d is :-\n",num);
for(int i=1; i<=10; i++){
printf("%d*%d = %d\n",num,i,num*i);
}
return 0;
}

// Program-2 using while loop
// To ask a user a number and print until users want
#include<stdio.h>
int main(){
int num;
char choice = 'y';
while(choice == 'y'){
printf("Enter a number");
scanf("%d",&num);
printf("Your entered number is %d\n",num);
printf("Press y if you want to continue otherwise any other word to exit\n");
scanf(" %c",&choice); //white space must be there before %c
}
printf(" you exit from the program");
return 0;
}

// Program-2 using do while loop
// To ask user a number and print it until user wants
#include<stdio.h>
int main(){
int num;
char choice;
do{
printf("Enter a number");
scanf("%d",&num);
printf("The entered number is %d\n",num);
printf("If you want to continue press y otherwise press other key\n");
scanf(" %c",&choice); // whitespace must be there before %c
}while(choice == 'y');
printf("You exit from the program\n");
return 0;
}

//Program-2 using for loop
// To ask user a number and print until user want
#include<stdio.h>
int main(){
int num;
char choice = 'y';
for(; choice == 'y';){
printf("Enter a number");
scanf("%d",&num);
printf("Your entered number is %d\n",num);
printf("If you want to continue press y oterwise any other key\n");
scanf(" %c",&choice);
}
printf("You exit from the program");
return 0;
}

// Program 3 using while loop
// To ask user a number and print its sum until user wants
#include<stdio.h>
int main(){
int num,sum=0;
char choice = 'y';
while(choice == 'y'){
printf("Enter a number");
scanf("%d",&num);
printf("Your entered number is %d\n",num);
sum = sum+num;
printf("Sum so far: %d\n",sum);
printf("If you want to continue press y otherwise any other keyword");
scanf(" %c",&choice);
}
printf("Total sum is %d",sum);
return 0;
}

// Program 3 using do while loop
// To ask user a number and print its sum until user wants
#include<stdio.h>
int main(){
int num,sum=0;
int choice;
do{
printf("Enter a number");
scanf("%d",&num);
printf("Your entered number is :%d\n",num);
sum = sum+num;
printf("Sum so far: %d\n",sum);
printf("If you want to continue press 1 otherwise press any other key\n");
scanf("%d",&choice);
}while(choice==1);
printf("Total sum is : %d",sum);
return 0;
}

//Program 3 using for loop
// To ask user a number and print its sum until usder wants
#include<stdio.h>
int main(){
int num,choice=1,i=0;
for(; choice==1;){
printf("Enter a number");
scanf("%d",&num);
printf("Your entered number is:%d\n",num);
i=i+num;
printf("The sum so far : %d\n",i);
printf("If you want to continue press 1 otherwise any other key");
scanf("%d",&choice);
}
printf("The total sum is: %d",i);
return 0;
}

// Program4
//WAP to print a sum of 1st 100 odd numbers using while lopp
#include<stdio.h>
int main(){
int num=1, count=0,sum=0;
printf("First hundred odd numbers are :-\n");
while(count<100){
printf("%d\n",num);
sum = num+sum;
num=num+2;
count++;
}
printf("The sum of 1st 100 odd number is: %d",sum);
return 0;
}

//Program4 using do while loop
// to print 1st hundred odd number
#include<stdio.h>
int main(){
int num=1, sum=0, count=0;
do{
sum=sum+num;
num=num+2;
count++;
}while(count<100);
printf("The sum of 1st 100 odd number is: %d",sum);
return 0;
}

//Program4 usinf for loop
// To print sum of 1st 100 odd number
#include<stdio.h>
int main(){
int num=1, sum=0;
for(int i=0;i<100; i++){
sum=sum+num;
num=num+2;
}
printf("The sum of 1st 100 odd number is %d",sum);
return 0;
}

// Program 5 using while loop
// To print the sum of odd and even number from 200 to 400
#include<stdio.h>
int main(){
int num=100, esum=0, osum=0;
while(num<=200){
if(num%2==0){
esum=esum+num;
}
else{
osum=osum+num;
}
num++;
}
printf("Sum of even number from 100 to 200 is : %d\n",esum);
printf("Sum of odd number from 100 to 200 is : %d\n",osum);
printf("Total sum is: %d",esum+osum);
return 0;
}

// Program 5b using do while loop
// To print the sum of odd and even number from 100 to 200
#include<stdio.h>
int main(){
int num=100, osum=0, esum=0;
do{
if(num%2==0){
esum=num+esum;
}
else{
osum=num+osum;
}
num++;
}while(num<=200);
printf("The even sum is: %d\n",esum);
printf("The odd sum is: %d\n",osum);
printf("The total sum is: %d\n",esum+osum);
return 0;
}
==+==
FILE: program5c.c
==+==
#include<stdio.h>
int main(){
int esum=0, osum=0;
for(int i=100; i<=200; i++){
if(i%2==0){
esum=i+esum;
}
else{
osum=i+osum;
}
}
printf("The even sum is: %d\n",esum);
printf("The odd sum is: %d\n",osum);
printf("The total sum is: %d\n",esum+osum);
return 0;
}


// Program 6 using while loop
// To print prime number from 1 to 100
#include<stdio.h>
int main(){
int num=2;
printf("The prime numbers from 1 to 100 are:\n");
while(num<=100){
int count=0;
for(int i=1; i<=num; i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
}
num++;
}
return 0;
}

// Program 6 using do while loop
// to print prime number from 1 to 100
#include<stdio.h>
int main(){
int num=2;
printf("Prime numbers upto 100 are:-\n");
do{
int count =0;
for(int i=1; i<=num; i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
}
num++;
}while(num<=100);
return 0;
}

// Program 6 using for loop
// To print prime number from 1 to 100
#include<stdio.h>
int main(){
for(int num=2; num<=100; num++){
int count=0;
for(int i=1; i<=num; i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
}
}
return 0;
}


// Program 7 using while loop
// to print 1st 50 odd number
#include<stdio.h>
int main(){
int num=2, pcount=0;
printf("The 1st 50 prime numbers are:-\n");
while(pcount<=50){
int count=0;
for(int i=1; i<=num;i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
pcount++;
}
num++;
}
return 0;
}

// Program 7 using do while loop
// 1st 50 prime numbers
#include<stdio.h>
int main(){
int num=2, pcount=0;
printf("1st 50 prime numbers are:\n");
do{
int count=0;
for(int i=1; i<=num; i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
pcount++;
}
num++;
}while(pcount<=50);
return 0;
}

// Program 7 using for loop
// To print 1st 50 prime numbers
#include<stdio.h>
int main(){
int pcount=0;
printf("1st 50 odd numbers are:-\n");
for(int num=2; pcount<=50; num++){
int count =0;
for(int i=1; i<=num; i++){
if(num%i==0){
count++;
}
}
if(count==2){
printf("%d\n",num);
pcount++;
}
}
return 0;
}

// End of assignment 1 ! see you in assignment 2!