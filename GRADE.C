#include<stdio.h>

 int main(){
  int avg;

  printf("Enter the value of all sub :");
  scanf("%d",&avg);

    if(avg>=90){
        printf("A \n Excellent work!." );
        }
    else if(avg>=80){
        printf("B \n Well done." );
        }
    else if(avg>=70){
        printf("C \n Good job." );
        }
   else if(avg>=60){
        printf("C \n passed" );
        }
   else if(avg>=50){
        printf("C \n  Sorry, you failed." );
        }

   else {
    printf("failed");
   }
return 0;

}