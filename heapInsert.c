//insertion in a heap using C
//by Raghhav Sehgal
#include<stdio.h>
#define max 100

void heapify(int arr[], int n, int key)
{
  int parent = (key - 1) / 2;

  if (arr[parent] > 0)
    {
      if (arr[parent] < arr[key])
	{
	  int swap = arr[parent];
	  arr[parent] = arr[key];
	  arr[key] = swap;


	  heapify (arr, n, parent);
	}
    }


}

void insert(int arr[], int n, int ne)
{
  n = n + 1;

  arr[n - 1] = ne;

  heapify(arr, n, n - 1);
}


int main()
{


  int arr[max] = {20, 10, 15, 5, 4};
  int n= 5;

  insert(arr, n, 21);


  for (int i = 0; i < n; i++)
    {
      printf ("%d\n", arr[i]);
    }
    
    return 0;
}
