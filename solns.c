/* Enter your solutions in this file */
#include <stdio.h>
int max(int[],int);
int max(int arr[];int a){
  int large=arr[0];
  for(int i=1;i<a;i++)
    if(arr[i]>large)
      large=arr[i];
  return large;
}
