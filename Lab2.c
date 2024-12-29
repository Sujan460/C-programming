// Lab-2, Here we go !

// to input 5 integer into a 1d array and display them

#include<stdio.h>
int main(){
    int n[5];
    printf("Enter 5 integers\n");
    for(int i=0; i<5; i++){
        scanf("%d",&n[i]);
    }
    for(int i=0; i<5; i++){
        printf("The numbers are: %d\n",n[i]);
    }
    return 0;
}




// sum and average of the element in 1d array size of 10

#include<stdio.h>
int main(){
    int n[10], sum=0;
    printf("Enter any 10 numbers:");
    for(int i=0; i<10; i++){
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    printf("The sum is: %d\n",sum);
    printf("The average is: %f",(double)sum/10);
    return 0;
}




// find largest and smallest number in 1d of 10 integer

#include<stdio.h>
int main(){
    int n[10];
    printf("Enter any 10 integer");
    for(int i=0; i<10; i++){
        scanf("%d",&n[i]);
    }
    int l=n[0];
    int s = n[0];
    for(int i=0; i<10; i++){
        
        if(l<n[i]){
            l=n[i];
        }
        if(s>n[i]){
            s=n[i];
        }
    }
    printf("The largest is %d:\n",l);
    printf("The smallest is %d:\n",s);
    return 0;
}




// input 10 integer and check whether it exit or not

#include<stdio.h>
int main(){
    int n[10], found=0, count=0;
    printf("Enter any 10 integer\n");
    for(int i=0; i<=10; i++){
        scanf("%d",&n[i]);
    }
    printf("Enter a number\n");
    scanf("%d",&found);
    for(int i=0; i<10; i++){
        if(found==n[i]){
            count++;
            if(count>0){
        printf(" The number is in array in %d position\n",i+1);
        break;
    }
        }
    }
    if(count<=0){
        printf("Number not found");
    }
    return 0;
}




// To reverse the element of 1d array

#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you want:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("reverse of given numbers is:\n");
    for(int i=n-1; i>=0; i--){
    
        printf("%d\n",a[i]);
    }
    return 0;
}




// program to input matrix in 3*3 matrix and display it in matrix form

#include<stdio.h>
int main(){
    int n[3][3];
    printf("Enter value for 3*3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }

        printf("The 3*3 matrix is:\n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d\t",n[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}




// to calculate the sum of each row and column of 3*3 matrix

#include<stdio.h>
int main(){
    int n[3][3], rsum[3]={0}, csum[3]={0};
    printf("Enter the elements for 3*3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            rsum[i]=rsum[i]+n[i][j];
            csum[j]=csum[j]+n[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<3; i++){
        printf("Sum of row %d is: %d\n",i+1,rsum[i]);
    }
    for(int j=0; j<3; j++){
        printf("Sum of column %d is: %d\n",j+1,csum[j]);
    }
    return 0;
}




// WAP to find transpose of a 3*3 matrix

#include<stdio.h>
int main(){
    int n[3][3];
    printf("Enter elements for 3*3 matrix:-\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }
        printf("Given matrix is:\n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d\t",n[i][j]);
            }
            printf("\n");
        }
        printf("Transpose of a matrix is \n");
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("%d\t",n[j][i]);
            }
            printf("\n");
        }
    return 0;
}



// WAP to input two n*m matrix and perform matrix addition

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number of rows and columns for matrix\n");
    scanf("%d%d",&a,&b);
    int m[a][b], n[a][b];
    printf("Enter elements for 1st %d * %d matrix\n",a,b);
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Enter elements for 2nd %d * %d matrix\n",a,b);
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("The sum of two matrix result below:\n");
    int sum;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            sum= m[i][j]+n[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
    return 0;
}




// To short 1D array of integer in accending order using the bubble short algorithm

#include<stdio.h>
int main(){
    int n, temp;
    printf("Enter how many integer you want:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integer\n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Integer in accending order is given below:-\n");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
    
            if(a[i]>a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }  
         }

        }
        for(int i=0; i<n; i++){
            printf("%d\n",a[i]);
        }
        return 0;
}




// WAP to multiply two 3*3 matrix

#include<stdio.h>
int main(){
    int m[3][3], n[3][3], p[3][3];
    printf("Enter elements for 1st 3*3 matrix:-\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("Enter elements for 2nd 3*3 matrix:-\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&n[i][j]);
        }
    }
    printf("The multiplication of given matrix results:\n");
    int mul;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            p[i][j] =0;
            for(int k=0; k<3; k++){
                p[i][j]=p[i][j]+m[i][k]*n[k][j];
            }
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}




// WAP to create multiplication table grid upto n numbers using 2d array
 #include<stdio.h>
 int main(){
    int n, mul;
    printf("Enter till which number you want to make a grid:\n");
    scanf("%d",&n);
    int a[n][10];
    printf("The multiplication grid from 1 t0 %d is given below:\n",n);
    for(int i=0; i<n; i++){
        printf("Multiplication of %d is :\n",i+1);
        for(int j=0; j<10; j++){
            mul = (i+1)*(j+1);
            printf("%d\t",mul);
        }
        printf("\n");
    }
    return 0;
 }

 // End of Lab 2! Let's meet on Lab 3.
 // Enjoy coding !