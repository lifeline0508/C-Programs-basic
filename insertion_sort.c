#include<stdio.h>

void Insertion_Sort(int *arr,int *n){
  for(int i = 1 ; i < *n  ; i++){
    int key = arr[i];
    int j  = i - 1;
    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main(){
  int n;
  printf("Enter the size of array");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array elements\n");

  for(int i = 0 ; i < n ; i++){
  printf("arr[%d]\t:",i);
    scanf("%d",&arr[i]);
  }
Insertion_Sort(arr, &n);
	printf("Sorted array is: ");
  for(int i = 0 ; i < n ; i++){
    printf("%d\t",arr[i] );
  }
  printf("\n");

}
