#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number to check:- ");
  scanf("%d", &n);
  int prime = 1;
  for (int i = 2; n > i; i++)
  {
    if (n % i == 0)
    {
      prime = 0;
      break;
    }
  }
  if (prime){
    printf("The number %d is Prime", n);
  }else{
    printf("The number %d is NOT Prime", n);
  }
  

  return 0;
}