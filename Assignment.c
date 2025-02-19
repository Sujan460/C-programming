// Reverse an array using pointers use DMA malloc()
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n;
    printf("Enter how many numbers you want to enter:\n");
    scanf("%d",&n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Enter %d numbers\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",(arr+i));
    }
    printf("The number in reverse order is \n");
    for(int i=n-1; i>=0; i--){
        printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
}




// Short an Array in accending order using pointers

#include<stdio.h>
#include<stdlib.h>

void accending(int *a, int *b){
   int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int num;
    printf("Enter how many numbers you want to enter\n");
    scanf("%d",&num);
    int *arr;
    arr = (int*) malloc(num * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d numbers:\n",num);
    for(int i=0; i<num; i++){
        scanf("%d",(arr+i));
    }
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if(*(arr+i)>*(arr+j)){
                accending(arr+i, arr+j);
            }
        }
        
    }
    printf("Accending order of given number is :\n");
    for(int i=0; i<num; i++){
        printf("%d\t",*(arr+i));
    }
    free(arr);
    return 0;
    
}




// Sum of 1st N natural numbers using DMA in pointers

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,num,sum=0;
    printf("Enter a natural number till which you want the SUM\n");
    scanf("%d",&num);
    arr = (int*) malloc(num * sizeof(int));
    for(int i=1; i<=num; i++){
        sum = sum+i;
    }
    printf("The sum is %d",sum);
    free(arr);
    return 0;
}




// to read N ages of students and print average

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,num,sum=0;
    float avg;
    printf("How many student's ages you want to enter ?\n");
    scanf("%d",&num);
    arr =(int*) malloc(num * sizeof(int));
    for(int i=0; i<num; i++){
        printf("Enter the age of student %d \n",i+1);
        scanf("%d",(arr+i));
        sum = sum + *(arr+i);
    }
    avg = sum/num;
    printf("The average age of students is %f\n",avg);
    free(arr);
    return 0;
}



// Resize the string using realloc()

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
     char *str;
     str = (char*) malloc(50 * sizeof(char));
     strcpy(str, "Messi is a football player. ");
     printf("Original string: %s\n",str);
     str = (char*) realloc(str,100 * sizeof(char));
     strcat(str,"He is also known as the GOAT.");
     printf("String after resizing: %s",str);
     free(str);
     return 0;
}




// Store and Display 5 integers using calloc()

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *num;
    num = (int*) calloc(5, sizeof(int));
    printf("Enter any 5 entegers:\n");
    for(int i=0; i<5; i++){
        scanf("%d",(num+i));
    }
    printf("The 5 integers are:\n");
    for(int i=0; i<5; i++){
        printf("%d\t",*(num+i));
    }
    free(num);
    return 0;
}



//get and print 3*3 matrix using calloc()

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr = (int*) calloc(9, sizeof(int));
    printf("Enter Elements for 3*3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",(arr+i*3 +j));
        }
    }
    printf(" Entered 3*3 matrix is :\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",*(arr+i*3 +j));
        }
        printf("\n");
    }
    free(arr);
    return 0;
}




// Display matrix addresss and values of 2*3 matrix and address of matrix[1][1] seperately

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *matrix;
    matrix = (int*) calloc(6, sizeof(int));
    printf("Enter elements for 2*3 matrix:");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",(matrix+i*3+j));
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Value:%d address:%p\t",*(matrix+i*3+j),(matrix+i*3+j));
        }
        printf("\n");

    }
    printf("Address of matrix [1][1] is : %p",matrix+1*3+1);
    free(matrix);
    return 0;
}



// display memory adress and value of 5 integers
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *num;
    num = (int*) calloc(5,sizeof(int));
    printf("Enter any 5 integers:\n");
    for(int i=0; i<5; i++){
        scanf("%d",(num+i));
    }
    for(int i=0; i<5; i++){
        printf(" %d) Element is: %d\t",i+1,*(num+i));
        printf("It's address is:%p\n",(num+i));
    }
    free(num);
    return 0;
}



// Return Sum and product of two numbers using pointer parameters

#include<stdio.h>
#include<stdlib.h>
void value(int a, int b, int *sum, int*product){
    *sum = a+b;
    *product = a*b;
}

int main(){
    int a,b,sm,pr;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    value(a,b,&sm,&pr);
    printf("The sum is %d\n",sm);
    printf("The product is %d\n",pr);
    return 0;
}