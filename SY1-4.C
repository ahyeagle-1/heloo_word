#include<stdio.h>

int main(void)
{
  char c1,c2;

  printf("\nEnter a character:");
  scanf("%c",&c1);

  c1=[  1  ];
  c2=c1+[  2  ];

  printf("\nResult is\n  %c   %c", c1,c2);
  printf("\n%4d%4d",c1,c2);
  return(0);
}