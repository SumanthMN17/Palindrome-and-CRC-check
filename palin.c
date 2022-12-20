#include <stdio.h>
int main() 
{
  int  reversed, remainder, original, n, PrevPalind=0, diff,x;
    for(n=0;n<1000;n++)
    {
        reversed=0;
        original = n;
        x=n;
        while(x!=0) // copying the number in reverse order in reversed variable
        {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
        }
        if (original == reversed) // checking whether the number is palindrome or not
        {
        diff = original-PrevPalind;
        printf("current palindrome is %d  difference between current and previous is %d \n", original,diff);
        PrevPalind = original;
        }
    }
}