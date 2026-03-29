#include <stdio.h>
#include<conio.h>
void main() 
{
 int arr[5] = {8, 42, 27, 32, 22}, i, max;
 max = arr[0];
 for(i = 1; i < 5; i++) 
 {
  if(arr[i] > max) 
  {
   max = arr[i];
  }
 }
 printf("Largest number = %d", max);
 getch();
}