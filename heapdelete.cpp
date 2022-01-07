#include <iostream>
 
using namespace std;

#define max 100

void heapify(int arr[], int n, int key)
{
    int largest = key;

    int l = 2*key+1;
    int r = 2*key+2;

    if(l<n && arr[l]>arr[largest]){
        largest = l;
    }

    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }

    if(largest!=key)
    {
        swap(arr[key],arr[largest]);

        heapify(arr,n,largest);
    }



}

void deletenode(int arr[], int& n){

int key = arr[n-1];

arr[0] = key;
n=n-1;

heapify(arr,n,0);



}





int main(){
    
    int arr[max] = {20,15,10,5,4};
  int n = 5;
    
    deletenode(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << "\t";
    }
    
    
    return 0;
}