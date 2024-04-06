#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int p, int r)
{
  int x = arr[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++)
  {
    if (arr[j] <= x)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[r]);
  return i + 1;
}

void qs(int arr[], int p, int r)
{
  if (p < r)
  {
    int q;
    q = partition(arr, p, r);
    qs(arr, p, q - 1);
    qs(arr, q + 1, r);
  }
}

int mod(int a, int b)
{
  int c;
  if (a >= b)
    c = a - b;
  else
    c = b - a;
  return c;
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);

  int arr[b];
  for (int i = 0; i < b; i++)
  {
    scanf("%d", &arr[i]);
  }
  qs(arr, 0, b - 1);
  int min = 1000000;
  for (int i = 0; i < b - 3; i++)
  {
    int c = mod(arr[i], arr[i + 3]);
    if (min > c)
      min = c;
  }

  printf("%d", min);
  return 0;
}