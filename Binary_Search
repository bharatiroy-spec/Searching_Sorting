#include<stdio.h>
int main(){
						int n,min;
					
						printf("Enter the number of elements of Array:");
						scanf("%d",&n);
						int myarr[n];
					   printf("\n");		
						for(int i=0;i<n;i++){
										printf("Enter %d th element of array:",i);
										scanf("%d",&myarr[i]);
											}
						printf("Before sorting\n");
						
						for(int i=0;i<n;i++){
											printf("%d\t",myarr[i]);
												}
						printf("\n");																				
						for(int i=0;i<n;i++){
										for(int j=i+1;j<n;j++){
																if (myarr[i]>myarr[j]){
																							min=myarr[i];
																							myarr[i]=myarr[j];
																							myarr[j]=min;
																							}
																}
											}
								printf("After sorting\n");
						
						for(int i=0;i<n;i++){
											printf("%d\t",myarr[i]);
												}
						int search,found=0;
						printf("\nEnter the number you want to search:");
						scanf("%d",&search);
						int low=0, high=n-1,mid;
						while(low<=high){
											mid=(low+high)/2;
											
						if(myarr[mid]==search){
										printf("Element is found at index %d\n ",mid);
										found=1;
										break;
							}else if(search<myarr[mid]){
															high=mid-1;
							}else{
												low=mid+1;
						}
						}
						if(found==0){
										printf("Element not found\n");
										}
										
						return 0;
						}
