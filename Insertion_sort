#include <time.h>
#include <math.h>
#include <stdio.h>
void insertionSort(int all, int n)
{
int i, key, j;
for (¡ = 1; i < n; i++) {
key = alil;
j=i-1:
while (j >= 0 && al] > key) {
ali+ 1= alil;
j=j-1;
ali + 1] = key;
void printArray (int all, int n)
{
int i;
for (i = 0; i< n; it+)
printf("%d", ali]);
printf("\n"');
}
int main()
it ch,,arr[40000];
clock_t end,start;
printf("\n 1.User Entered Values \n 2. Computer
Generated Values \Enter the Choice : ");
scanf("%d",&ch);
switch(ch){
case 1:
print("Enter the number Of values");
scanf("%d", n);
printf(" \n Enter all the elemetsn : ");
for(int i=O;i<n;i++){
scanf("%d",&arr[n]);
}
break;
case 2:
printf("Enter the number of values : ");
scanf("%d", &n);
for(int i=O;i<n;i++)
arr[i]=n-i;
  }
}
start = clock0;
insertionSort(arr, n);
end = clock0;
printf("Time taken to sort %d numbers is %f seconds",n, (((double) (end-start))/CLOCKS_PER_SEC));
printArray(arr, n);
return 0;
}
