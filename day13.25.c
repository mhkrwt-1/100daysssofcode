#include <stdio.h>
#include <math.h>
int main()
{
    float x,y,sol;
    char sign;
    printf("Enter two numbers and then the operation which is to be done on them:");
    scanf("%f %f %c",&x,&y,&sign);
    switch(sign)
    {
        case '+': sol=x+y;
                  printf("%f+%f = %f",x,y,sol);
                  break;
        case '-': sol=x-y;
                  printf("%f-%f = %f",x,y,sol);
                  break;
        case '*': sol=x*y;
                  printf("%f*%f = %f",x,y,sol);
                  break;
        case '/': if (y==0)
                  {
                    printf("ERROR");
                  }
                  else
                  {
                  sol=x/y;
                  printf("%f/%f = %f",x,y,sol);
                  }
                  break;
        case '%':if (y == 0)
                    {
                    printf("Error: Modulus by zero not allowed.\n");
                  }
                 else
                  {
                     sol = x - y * floor(x / y);  
                     printf("%f %% %f = %f\n", x, y, sol);
                  }
                  break;
                
        default: printf("INVALID INPUTS");
    }
} 
