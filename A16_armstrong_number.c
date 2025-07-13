#include <stdio.h>
#include<math.h>
int main() {
  int c,n,tot,temp,last,i;
  int arr[15];
  printf("Enter the natural number: ");
  scanf("%d", &n);
  if (n<0){
      printf("%d is not a Armstrong number.",n);
      return 0;
  }
  temp=n;
  tot=0;
  c=0;
  while (temp>0){
      last=temp%10;
      temp=temp/10;
      arr[c]=last;
      c++;
  }
  for(i=0;i<c;i++){
      tot+=pow(arr[i],c); //Sum powers of each digit to its number of digits
  }
  if (n==tot){
      printf("%d is a Armstrong Number.",n);
  }
  else{
      printf("%d is a Armstrong Number.",n);
  }
  return 0;
}
