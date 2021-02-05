#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static const char *num[] = { "one", "two", "three", "four", "five",
                                "six", "seven", "eight", "nine" };

int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	for(i=a;i<=b;i++)
      {
           if (i >= 1 && i <= 9)
     {
        printf("%s\n", num[i-1]);
      }
      else if (i > 9 && i%2 ==0)
       {
          printf("even \n");
      }
      else 
      {
          printf("odd \n");
      }
      }

    return 0;
}

