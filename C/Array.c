

#include <stdio.h>

int main() {

  int arr[10];
  int temp;
  for(int i = 0; i < 10; ++i) {
     printf("Enter %dth Element: ",i+1);
     scanf("%d", &arr[i]);
  }
  printf("Original Array: \n");
  for(int i = 0; i < 10; ++i) {
     printf("%d\n", arr[i]);
  }
  printf("revirsed Array:\n");
  for(int i = 9; i >= 0; --i) {
     printf("%d\n", arr[i]);
  }
  for(int i = 0; i < 10; i+=2) {
     temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]= temp;
  }
  printf("Alternate Swaped Array:\n");
  for(int i = 0; i < 10; i++) {
     printf("%d\n", arr[i]);
  }
  int m1=arr[0];
  int m2=arr[1];
  for (int i=2;i<10;i++)
  {
      if(arr[i]>m1 && arr[i]>m2)
      {
         m1=arr[i];
      }else if(arr[i]<m1 && arr[i]>m2)
      {
         m2=arr[i];
      }
  }
  printf("max 1 = %d\nmax 2 =%d",m1,m2);
  return 0;
}
