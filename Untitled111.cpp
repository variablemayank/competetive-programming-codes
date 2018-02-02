#include <stdlib.h>
#include <stdio.h>

int next(int x,int k) {              /* Look for a number bigger than x. */
  x += 1;
  int mask = 1<<(k+1),                /* Use the mask to look for 11.     */
      pos = 2;                 /* Track our location in the bits.  */
  while (mask <= x) {
    if ((mask & x) == mask) {  /* If we find 11, shift right to    */
      x >>= pos;               /*  zero it out.                    */
      x += 1;                  /* Add 1, shift back to the left,   */
      x <<= pos;               /*  and continue the search.        */
    }
    mask <<= 1;                /* Advance the mask (could advance  */
    pos += 1;                  /*  another bit in the above case). */
  }                            
  printf("%d",x);
}

int main()
{
  next(1,2); 
}
