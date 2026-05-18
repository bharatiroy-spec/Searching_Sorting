#include<stdio.h>
void printArray(int arr[],int size){
						for(int i=0;i<size;i++){
										printf("%d\t",arr[i]);
										}
										printf("\n");
										}
void insertionSort(int arr[],int size){
				for(int step=1;step<size;step++){
								int key=arr[step];
								int j=step-1;
								
								while(key<arr[j] && j>=0){
													arr[j+1]=arr[j];
													--j;
													}
													arr[j+1]=key;
													}
													}
int main(){
						int data[]={5,7,6,9,1,3};
						int size=sizeof(data)/sizeof(data[0]);
						insertionSort(data,size);
						printf("Sorted Array in Ascending Order:\n");
						printArray(data,size);
						}
