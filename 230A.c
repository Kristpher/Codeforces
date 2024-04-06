#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int str[], int p, int r)
{
  int x = arr[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++)
  {
    if (arr[j] <= x)
    {
      i++;
      swap(&arr[i], &arr[j]);
      swap(&str[i], &str[j]);
    }
  }
  swap(&arr[i + 1], &arr[r]);
  swap(&str[i + 1], &str[r]);
  return i + 1;
}

void qs(int arr[], int str[], int p, int r)
{
  if (p < r)
  {
    int q;
    q = partition(arr, str, p, r);
    qs(arr, str, p, q - 1);
    qs(arr, str, q + 1, r);
  }
}
int main()
{
  int a, b;
  int e = 1;
  scanf("%d%d", &a, &b);
  int c = 2 * b;
  int arr[b];
  int str[b];
  for (int i = 0; i < b; i++)
  {
    scanf("%d%d", &arr[i], &str[i]);
  }
  qs(arr, str, 0, b - 1);
  for (int i = 0; i < b; i++)
  {
    if (arr[i] >= a)
    {
      e = 0;
      break;
    }
    else
    {
      a = a + str[i];
    }
  }
  if (e == 1)
    printf("YES");
  else if (e == 0)
    printf("NO");
  return 0;
}