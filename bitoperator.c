#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



void calculate_the_maximum(int n, int k) {
  if(k<=n)
  {
      int i, j,and=0,or=0,xor=0;
      for(i=1;i<=k;i++)
      {
         
          for(j=i+1;j<=n;j++)
          {
             and=((i & j)<k?(i&j):0) > and ?(i&j) : and ;
             or = ((i|j)<k?(i|j):0) > or ?(i|j) : or;  
             xor=((i^j)<k?(i^j):0) > xor ?(i^j) : xor;
          }
          
      }
      printf("%d\n",and);
      printf("%d\n",or);
      printf("%d\n",xor);
  }
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

