#include<stdio.h>
void swap(int *a,int *b){
				int t=*a;
				*a=*b;
				*b=t;
				}

void printArray(int arr[],int size){
							for(int i=0;i<size;i++){
										printf("%d\t",arr[i]);
										}
										printf("\n");
										}
int partition(int arr[],int low,int high){
									int pivot=arr[high];
									int  i=(low-1);
									for(int j=low;j<high;j++){
												if(arr[j]<=pivot){
													i++;
													
													swap(&arr[i], &arr[j]);
													}
													}
													swap(&arr[i+1], &arr[high]);
													return(i+1);
													}										
										
void quickSort(int arr[],int low,int high){
						
									if(low<high){
												int pi=partition(arr,low,high);
												quickSort(arr,low,pi-1);
												quickSort(arr,pi+1,high);
													}
													
													}
													
int main(){
							int data[]={9,5,7,6,4,0,15};
							int  n=sizeof(data)/sizeof(data[0]);
							printf("Unsorted Array\n");
							printArray(data,n);
							quickSort(data,0,n-1);
							printf("Sorted Array in Ascending order:\n");
							printArray(data,n);
							}
