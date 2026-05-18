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
						printf("Before Bubble sorting\n");
						
						for(int i=0;i<n;i++){
											printf("%d\t",myarr[i]);
												}
						printf("\n");																				
						for(int i=0;i<n-1;i++){
										for(int j=0;j<n-i-1;j++){
																if (myarr[j]>myarr[j+1]){
																			min=myarr[j];
																			myarr[j]=myarr[j+1];
																			myarr[j+1]=min;				
																						
																							
																							}
																}
											}
								printf("After Bubble sorting\n");
						
						for(int i=0;i<n;i++){
											printf("%d\t",myarr[i]);
												}
					
										
						return 0;
						}
