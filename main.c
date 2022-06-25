#include <stdio.h>
#include <stdlib.h> //header allows use of method exit(0)

//A C Program to Plot a cordinate on an x-y plane

int main(void) {

int i,j,num1,num2,checker;
//var checker will identify when to print x
printf("Enter a x-cordinate between 1 and 10 :");
scanf("%d",&num1);
printf("Enter a y-cordinate between 1 and 10 :");
scanf("%d",&num2);

 for(i=1;i<=10;i++){
  //outer loop prints rows

   for(j=10;j<20;j++){
     //inner loop to print columns
     if(i==num1&&j==10+num2-1){//determine when cordinates are arrived, print X.  10 has been added to j in j==10+num2-1 since j counter starts at 10 to 20. -1 because range of the loop is 10 not 11.
       printf("X");
     }else{
       printf("-");//if cordinates don't match, print a dash
     }
   }
   printf("\n");
 }
 //move X
 char mover; //hold the character
 printf("Enter a character (among[w, a, s, d, x]) :");
 scanf(" %c",&mover);
 switch(mover){
   //use OR operator | to accept lower and uppercase letters
   case 'w'|'W':
   //change y cordinate by -1

  num1-=1;
  
      //Reprint grid
      for(i=1;i<=10;i++){
      //outer loop prints rows

      for(j=10;j<20;j++){
        //inner loop to print columns
        if(i==num1&&j==10+num2-1){//determine when cordinates are arrived, print X
          printf("X");
        }else{
          printf("-");//if cordinates don't match, print a dash
        }
      }
      printf("\n"); //go to next line
    }
   break;
   case 'a'|'A':
   //change x cordinate by -1
   
     num2-=1;
     
      //Reprint grid
      for(i=1;i<=10;i++){
      //outer loop prints rows

      for(j=10;j<20;j++){
        //inner loop to print columns
        if(i==num1&&j==10+num2-1){//determine when cordinates are arrived, print X
          printf("X");
        }else{
          printf("-");//if cordinates don't match, print a dash
        }
      }
      printf("\n");//move to next line
    }
   break;
   case 's'|'S':
   //change y cordinate by +1
   
     num1+=1;   
   
   //Reprint grid
      for(i=1;i<=10;i++){
      //outer loop prints rows

      for(j=10;j<20;j++){
        //inner loop to print columns
        if(i==num1&&j==10+num2-1){//determine when cordinates are arrived, print X
          printf("X");
        }else{
          printf("-");//if cordinates don't match, print a dash
        }
      }
      printf("\n");
    }
   break;
   case 'd'|'D':
   //change x cordinate by +1
   
     num2+=1;
    
      //Reprint grid
      for(i=1;i<=10;i++){
      //outer loop prints rows

      for(j=10;j<20;j++){
        //inner loop to print columns
        if(i==num1&&j==10+num2-1){//determine when cordinates are arrived, print X
          printf("X");
        }else{
          printf("-");//if cordinates don't match, print a dash
        }
      }
      printf("\n");
    }
   break;
   case 'x'|'X':
   //Exit program
   exit(0);
   break;
   default:
   printf("Sorry, you entered the rong letter");
   break;
 }

  return 0;
}