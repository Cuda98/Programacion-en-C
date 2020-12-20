#include<stdio.h>
#include<stdlib.h>
int main()
{
    int contador=0;
    int i=0;
    int j=0;
int v[10] = {4, 2, 4, 5, 2, 3, 1, 8, 10, 9};
printf("El vector es: ");
for(int i=0; i<10; i++)
{
    printf("%d,",v[i]);
}

printf("\n----------------------\n");


for(int i=0; i<10; i++)
{
    for(int j=i+1; j<10; j++)
    {
        if(v[i]==v[j])
            contador++;
    }
}


printf("El elemento %d, se repite %d veces",v[i],contador);
  return 0;
}














/*
BACKUP
void printRepeating(int arr[], int size)
{
  int i, j;
  printf(" Repeating elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}

int main()
{
    int arr[10];
    srand (time(NULL));
    for (int i=0; i<10; i++)
    {
        arr[i]=rand()%11;
        printf("%d   ",arr[i]);
    }
    printf("\n");

  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}

*/
