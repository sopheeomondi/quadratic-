#include <stdio.h>
#include <math.h>
/*project: quadratic equation
  author: brian waithuki
*/
//quadratic equation
//find x in ax2 + bx + c = 0
/*
conditions : if pow(b,2)- 4ac = 0 equation has two equal values
             if pow(b,2)- 4ac > 0 equation has two distinct values 
             if pow(b,2)-4ac < 0 equation has no roots
*/
int main(){
   float a,b,c;
   float root1,root2;
   float num , den;
   printf("Enter a,b and c: ");
   scanf("%f %f %f",&a,&b,&c);
  
   if(b*b-4*a*c > 0 ){
      num = sqrt(b*b- 4*a*c);
      den = 2*a;
      root1 = (-b + num) / den;
      root2 = (-b - num) /den;
      printf("Root1 %.2f \n root2 = %.2f",root1,root2);
   }else if (b*b-4*a*c == 0){
    root1 = -b/(2*a);
    printf("root1 = root2 = %.2f",root1);
   }else
   {
    printf("!");
   } 
   return 0;
 
}