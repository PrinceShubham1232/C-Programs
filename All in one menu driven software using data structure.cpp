#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct link
{
	int data;
	struct link *next;
	struct link *prev;
};
typedef struct link node;
int insert_first();
int insert_any();
int insert_end();
int delete_first();
int delete_any();
int delete_end();
int first_insert();
int any_insert();
int any_delete();
int end_delete();
int end_insert();
int first_delete();
int search_double();
int search_single();
int first();
int any();
int end();
int first_del();
int any_del();
int end_del();
int search_circular();
int binary(int [],int,int);
int linear(int[],int,int);
int bubble(int[],int);
int insertion(int[],int);
int smallest(int arr[],int k,int x);
int selection_sort(int arr[],int x);
int merge_sort(int[],int ,int);
int merge(int[],int,int,int);
int top=-1;
int arr_stack[MAX];
int push(int);
int pop();
int display_stack();
int arr_queue[MAX];
int front=-1,rear=-1;
int insert();
int del();
int display_queue();
node *ptr,*start,*temp;
int main()
{
int ch1;
printf("\n\t\t\tALL   IN   ONE  MENU  DRIVEN  SOFTWARE   USING   DATA  STRUCTURES");
printf("\n");
printf("\n\tMADE BY- PRINCE SHUBHAM");
while(1)
 {
 printf("\n");
 printf("\n|***************** MAIN MENU ******************|");
 printf("\n|----------------------------------------------|");
 printf("\n|  1. ENTER FOR SEARCHING ELEMENT IN AN ARRAY  |");
 printf("\n|  2. ENTER FOR SORTING AN ARRAY               |");
 printf("\n|  3. ENTER FOR STACK OPERATION                |");
 printf("\n|  4. ENTER FOR QUEUE OPERATION                |");
 printf("\n|  5. ENTER FOR SINGLE LINKED LIST             |");
 printf("\n|  6. ENTER FOR CIRCULAR LINKED LIST           |");
 printf("\n|  7. ENTER FOR DOUBLE LINKED LIST             |");
 printf("\n|  8. EXIT                                     |");
 printf("\n|----------------------------------------------|");
 printf("\n   ENTER YOUR CHOICE ");
 scanf("%d",&ch1);
 switch(ch1)
 {
 	case 1:
 		{
 			int ch2;
 			printf("\n*SUB MENU OF SEARCHING*");
 			printf("\n|---------------------|");
 			printf("\n|  1. LINEAR SEARCH   |");
 			printf("\n|  2. BINARY SEARCH   |");
 			printf("\n|  3. EXIT            |");
            printf("\n|---------------------|");
 			printf("\nENTER YOUR CHOICE ");
 			scanf("%d",&ch2);
 			switch(ch2)
 			{
 				case 1:
 					{
 						int i,n,key,a[20],p;
						printf("\nEnter the no. of element ");
						scanf("%d",&n);
						printf("\nEnter %d no. of element\n",n);
						for(i=0;i<n;i++)
							{
								scanf("%d",&a[i]);
							}
						printf("\nEnter the element to serached ");
						scanf("%d",&key);
						p=linear(a,n,key);
						if(p==-1)
							{
								printf("\nLinear search unsuccesful");
							}
						else
							{
								printf("loation of %d element is %d",key,p);
							}
				break;
					}
				case 2:
					{
					 	int i,a[20],n,key,p;
						printf("\nEnter the no. of element ");
						scanf("%d",&n);
						printf("\nEnter %d no. of elements in sorted order for binary search",n);
						for(i=0;i<n;i++)
							{
								scanf("%d",&a[i]);
		
							}
						printf("\nEnter the element to be searched ");
						scanf("%d",&key);
						p=binary(a,n,key);
						if(p==-1)
							{
								printf("\nBinary search unsuccesful");
							}
						else
							{
								printf("\nThe element %d is found at %d location",key,p);
							}
				break;
					  }
				 case 3:
					exit(0);
						default:
						 	printf("\n Wrong choice");
			 }
	break;
		 }
	case 2:
		{
		 	int ch3;
		 	printf("\n*******SUB MENU OF SORTING********");
		 	printf("\n|--------------------------------|");
		 	printf("\n|   1. ENTER FOR BUBBLE SORT     |");
		 	printf("\n|   2. ENTER FOR INSERTION SORT  |");
		 	printf("\n|   3. ENTER FOR SELECTION SORT  |");
		 	printf("\n|   4. ENTER FOR MERGE SORT      |");
		 	printf("\n|   5. EXIT                      |");
		 	printf("\n|--------------------------------|");
		 	printf("\n   ENTER YOUR CHOICE ");
		 	scanf("%d",&ch3);
		 	switch(ch3)
		 		{
		 		case 1:
		 			{
		 				int i,a[20],n;
						printf("\nEnter the no. of element ");
						scanf("%d",&n);
						printf("\nEnter %d no. of element",n);
							for(i=0;i<n;i++)
						    {
							    scanf("%d",&a[i]);
							}
						printf("\nSorted array using bubble sort is: ");
						bubble(a,n);
				break;
					}
				case 2:
					{
						int i,a[20],n;
						printf("\nEnter the no. of element ");
						scanf("%d",&n);
						printf("\nEnter %d no. of element",n);
						for(i=0;i<n;i++)
							{
								scanf("%d",&a[i]);
							}
						printf("\nSorted array using insertion sort is: ");
						insertion(a,n);
				break;
					}
				case 3:
					{
						int arr[10],n,i;
						printf("\nEnter no. of element ");
						scanf("%d",&n);
						printf("\nEnter th elements in an array");
						for(i=0;i<n;i++)
						{
							scanf("%d",&arr[i]);
						}
						selection_sort(arr,n);
						printf("\nSorted array using selection sort is: ");
						for(i=0;i<n;i++)
						{
							printf("%d\t",arr[i]);
						}	
		        break;
					}
				case 4:
					{
						int arr[10],i,j,n;
						printf("\nEnter number of element ");
						scanf("%d",&n);
						printf("\nEnter %d no. of element ",n);
						for(i=0;i<n;i++)
						{
							scanf("%d",&arr[i]);
						}
						merge_sort(arr,0,n-1);
						printf("\nSorted array using merge sort is ");
						for(i=0;i<n;i++)
						{
							printf("%d\t",arr[i]);
						}
				break;
					}
				case 5:
					exit(0);
						default:
							printf("\nWrong choice");
			
				 }
	break;
		}
	case 3:
		{
		
			int ch,num;
			printf("\n*SUB MENU OF STACK*");
			printf("\n|-----------------|");
	    	printf("\n|    1. PUSH      |");
			printf("\n|    2. POP       |");
			printf("\n|    3. DISPLAY   |");
			printf("\n|    4. QUIT      |");
			printf("\n|-----------------|");
			printf("\n   Enter your choice");
			scanf("%d",&ch);
			switch(ch)
				{
				case 1:
					{
					printf("\nEnter element ");
					scanf("%d",&num);
					 push(num);
					 break;
					}
				case 2:
					{
						pop();
						break;
					}
				case 3:
					{
					display_stack();
						break;
					}
					case 4:
					{
					exit(0);
					}
				default:
					{
						printf("\nWrong choice ");	
					}
				}
	break;
		}
		case 4:
		{
			int ch;
			printf("\n*SUB MENU OF QUEUE*");
			printf("\n|-----------------|");
	     	printf("\n|   1. INSERT     |");
			printf("\n|   2. DELETE     |");
			printf("\n|   3. DISPLAY    |");
			printf("\n|   4. QUIT       |");
			printf("\n|-----------------|");
			printf("\n   Enter your choice");
			scanf("%d",&ch);
			switch(ch)
					{
					case 1:
						{
						    insert();
							break;
						}
					case 2:
					{
						del();
						break;
					}
					case 3:
					{
						display_queue();
						break;
					}
					case 4:
						exit(0);
							default:
								printf("\nWrong choice");
					}	
	break;
	}
	case 5:
		{
			int item;
			char ch,ch1;
			ptr=(node*)malloc(sizeof(node));
			start=ptr;
			printf("\n Enter data in single linked list ");
			scanf("%d",&item);
			ptr->data=item;
			printf("\n Do you want to enter more data ");
			fflush(stdin);
			scanf("%c",&ch);
			while(ch=='y'||ch=='Y')
			{
				ptr->next=(node*)malloc(sizeof(node));
				ptr=ptr->next;
				printf("\n Enter data in single linked list ");
				scanf("%d",&ptr->data);
				printf("\n Do you want to enter more data ");
				fflush(stdin);
				scanf("%c",&ch);
			}
			ptr->next=NULL;
			ptr=start;
			printf("\nData in linked list are: ");
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
			int a;
			printf("\n*SUB MENU OF SINGLE LINKED LIST*");
			printf("\n|------------------|");
			printf("\n|   1.TO INSERT    |");
			printf("\n|   2.TO DELETE    |");
			printf("\n|   3.TO SEARCH    |");
			printf("\n|   4.TO EXIT      |");
			printf("\n|------------------|");
			printf("\nENTER YOUR CHOICE");
			scanf("%d",&a);
			switch(a)
				{
				case 1:
					{
						int c;
						printf("\n***********INSERTION MENU****************");
						printf("\n1.Insert node at first position in single linked list");
						printf("\n2.Insert node at any specific position in single linked list");
						printf("\n3.Insert node at end position in single linked list");
						printf("\n4.To exit\n");
						printf("\n-------------------------------------------");
						printf("\nEnter your choice ");
						scanf("%d",&c);
						switch(c)
							{
							case 1:
							{
							    first_insert();
							    break;
							}
							case 2:
							{
								any_insert();
								break;
							}
							case 3:
							{
								end_insert();
								break;
							}
							case 4:
								exit(0);
									default:
										printf("\nWrong choice");
							break;	
							}
				break;	
					}
				case 2:
					{
					int b;
					printf("\n**************DELETION MENU******************");
					printf("\n1.Delete node at first position from single linked list");
					printf("\n2.Delete node at any specific position from single linked list");
					printf("\n3.Delete node at end position from single linked list");
					printf("\n4.To exit\n");
					printf("\n-----------------------------------------------");
					printf("\nEnter your choice ");
					scanf("%d",&b);
					switch(b)
	            		{
						case 1:
						{
						    first_delete();
							break;
						}
						case 2:
						{
					     	any_delete();
							break;
						}
					   	case 3:
						{
							end_delete();
							break;
						}
					    case 4:
						   exit(0);
						      default:
						     	printf("\nWrong choice");
	                        }
                break;
					}	
				case 3:
					{
						int r;
						r=search_single();
						if(r==-1)
								{
								printf("\nSearch unsucessful");
								ptr=start;
								printf("\nData in single linked list are: ");
								while(ptr!=NULL)
									{
										printf("%d\t",ptr->data);
										ptr=ptr->next;
									}
								}
						else
							{
								printf("\nSearch successful and data is %d",r);
								ptr=start;
								printf("\nData in single linked list are: ");
								while(ptr!=NULL)
							{
								printf("%d\t",ptr->data);
								ptr=ptr->next;
							}	
							}
				break;
					}
				case 4:
					exit(0);
						default:
							printf("\nWrong choice");
                   break;
                       }
    break;
		}
	case 6:
		{
			int item;
			char ch,ch1;
			ptr=(node*)malloc(sizeof(node));
			start=ptr;
			printf("\nEnter data in circular linked list ");
			scanf("%d",&item);
			ptr->data=item;
			printf("\nDo you want to enter more data ");
			fflush(stdin);
			scanf("%c",&ch);
			while(ch=='y'||ch=='Y')
			{
				ptr->next=(node*)malloc(sizeof(node));
				ptr=ptr->next;
				printf("\nEnter data ");
				scanf("%d",&ptr->data);
				printf("\nDo you want to enter more data ");
				fflush(stdin);
				scanf("%c",&ch);
			}
				ptr->next=start;
				ptr=start;
				printf("\nData are:- ");
				while(ptr->next!=start)
				{
					printf("%d\t",ptr->data);
					ptr=ptr->next;
				}
				printf("%d\t",ptr->data);
				int a;
				printf("\n*SUB MENU OF CIRCULAR LINKED LIST*");
				printf("\n|--------------------|");
				printf("\n|   1.TO INSERT      |");
				printf("\n|   2.TO DELETE      |");
				printf("\n|   3.TO SEARCH      |");
				printf("\n|   4.TO EXIT        |");
				printf("\n|--------------------|");
				printf("\nENTER YOUR CHOICE ");
				scanf("%d",&a);
				switch(a)
					{
						case 1:
						{
							int c;
							printf("\n***********INSERTION MENU***************");
							printf("\n1.Insert node at first position");
							printf("\n2.Insert node at any specific position");
							printf("\n3.Insert node at end position");
							printf("\n4.To exit");
							printf("\n----------------------------------------");
							printf("\nEnter your choice ");
							scanf("%d",&c);
							switch(c)
								{
									case 1:
									{
										first();
									    break;
									}
									case 2:
										{
											 any();
											break;
										}
									case 3:
										{
											 end();
											break;
										}
									case 4:
										exit(0);
										default:
											printf("Wrong choice\n");
	                        break;	
	                            } 
			        break;	
			           }   
		            case 2:
		               {
			            int b;
						printf("\n*********DELETION MENU****************");
						printf("\n1.Delete node at first position");
						printf("\n2.Delete node at any specific position");
						printf("\n3.Delete node at end position");
						printf("\n4.To exit");
						printf("\n---------------------------------------");
						printf("\nEnter your choice ");
						scanf("%d",&b);
						switch(b)
							{
							case 1:
							{
			 					first_del();
								break;
							}
							case 2:
							{
									any_del();
									break;
							}
							case 3:
							{
									 end_del();
									break;
							}
					case 4:
						exit(0);
							default:
								printf("Wrong choice\n");
	                             }
	                 break;
                     	} 	
		             case 3:
			             {
						  int r;
					      r=search_circular();
						  if(r==-1)
						        {
									printf("\nSearch unsuccessful\n");
									ptr=start;
									printf("\nData are:- ");
									while(ptr->next!=start)
									{
										printf("%d\t",ptr->data);
										ptr=ptr->next;
									}
									printf("%d\t",ptr->data);
								}
							else
								{
									printf("\nSearch successful and data is %d",r);
									ptr=start;
									printf("\nData are:- ");
									while(ptr->next!=start)
									{
										printf("%d\t",ptr->data);
										ptr=ptr->next;
									}
									printf("%d\t",ptr->data);	
								}
						break;
							}
						case 4:
							exit(0);
								default:
									printf("\nWrong choice");
                break;
                     }
    break;	
		}
	case 7:
		{
			char ch;
			ptr=(node*)malloc(sizeof(node));
			start=ptr;
			start->prev=NULL;
			printf("\nEnter data in double linked list ");
			scanf("%d",&ptr->data);
			printf("\nDo you want to make new node ");
			fflush(stdin);
			scanf("%c",&ch);
			while(ch=='y'||ch=='Y')
			 {
			 	ptr->next=(node*)malloc(sizeof(node));
			 	temp=ptr;
			 	ptr=ptr->next;
			 	ptr->prev=temp;
			 	printf("\nEnter data in double linked list ");
			 	scanf("%d",&ptr->data);
			 	printf("\nDo you want to make new node ");
			 	fflush(stdin);
			 	scanf("%c",&ch);
			 }
			 ptr->next=NULL;
			 ptr=start;
			 printf("\nData in double linked list are: ");
			 while(ptr!=NULL)
					 {
	 					printf("%d\t",ptr->data);
	 					ptr=ptr->next;
		 			 }
			int a,b;
		    printf("\n*SUB MENU OF DOUBLE LINKED LIST");
		    printf("\n	|--------------------|");
			printf("\n	|   1.TO INSERT      |");
			printf("\n	|   2.TO DELETE      |");
			printf("\n	|   3.TO SEARCH      |");
			printf("\n	|   4.TO EXIT\n      |");
			printf("\n	|--------------------|");
			printf("\nEnter your choice ");
			fflush(stdin);
			scanf("%d",&b);
			switch(b)
				{
				case 1:
					{
					printf("\n******************INSERTION MENU*********************");
					printf("\n1.Insert node at first position in double linked list");
					printf("\n2.Insert node at any position in double linked list");
					printf("\n3.Insert node at end position in double linked list");
					printf("\n4.Exit");
					printf("\n------------------------------------------------------");
					printf("\nEnter your choice ");
					fflush(stdin);
					scanf("%d",&a);
					switch(a)
						{
						case 1:
							{
								insert_first();
								break;
							}
						case 2:
							{
								insert_any();
								break;
							}
						case 3:
							{
								insert_end();
								break;
							}
				case 4:
					exit(0);
				    	default:
					    	printf("\nWrong choice");
                    }
		        break;
                 	}
			    case 2:
				    {
					printf("\n******************DELETION MENU**********************");
					printf("\n1.Delete node at first position in double linked list");
					printf("\n2.Delete node at any position in double linked list");
					printf("\n3.Delete node at end position in double linked list");
					printf("\n4.Exit");
					printf("\n-----------------------------------------------------");
					printf("\nEnter your choice ");
					fflush(stdin);
					scanf("%d",&a);
					switch(a)
						{
						case 1:
							{
								delete_first();
								break;
							}
						case 2:
							{
								delete_any();
								break;
							}
						case 3:
							{
								delete_end();
								break;
							}
						case 4:
							exit(0);
							default:
								printf("\nWrong choice");
						}		
					break;
						}
					case 3:
						{
						int r;
						r=search_double();
						if(r==-1)
						{
							printf("\nSearch unsuccessful");
							ptr=start;
		                    printf("\nData in double linked list are: ");
		                    while(ptr!=NULL)
		                   {
			                printf("%d\t",ptr->data);
			                ptr=ptr->next;
		                    }
						}
						else
						{
							printf("\nSearch successful and data is %d",r);
							ptr=start;
		                    printf("\nData in double linked list are: ");
		                    while(ptr!=NULL)
		                   {
			                printf("%d\t",ptr->data);
			                ptr=ptr->next;
		                    }
						}
						break;
					}
					case 4:
						{
							exit(0);
						}
						default:
							printf("\nWrong choice");
					}
                    break;
					   }
	case 8:
		exit(0);
			default:
				printf("\nWrong choice please enter right choice");
			 }
 }
 return 0;
}
int linear(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]==k)
	{
	return(i);
}}
return -1;
}

int binary(int a[],int n,int k)
{
	int lo=0,hi=n-1,mid;
	while(lo<=hi)
	{
	mid=(lo+hi)/2;
	if(a[mid]==k)
	return(mid);
	if(a[mid]<k)
	{
		lo=mid+1;
		
	}
	else
	{
		hi=mid-1;
	}
}
return -1;
}
int bubble(int a[],int n)
{
	int i,pass,temp;
	for(pass=0;pass<n-1;pass++)
	{
		for(i=0;i<n-1-pass;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
int insertion(int a[],int n)
{
	int i,j,key;
	for(j=1;j<n;j++)
	{
		key=a[j];
		i=j-1;
	while((i>-1)&&(a[i]>key))
	{
		a[i+1]=a[i];
		i=i-1;
	}
	a[i+1]=key;
}
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}
	int smallest(int arr[],int k,int x)
	{
		int pos=k,small=arr[k],i;
		for(i=k+1;i<x;i++)
		{
			if(arr[i]<small)
			{
				small=arr[i];
				pos=i;
			}
			}
		return pos;
				}
	int selection_sort(int arr[],int n)
		{
		int k,pos,temp;
		for(k=0;k<n;k++)
		{
			pos=smallest(arr,k,n);
			temp=arr[k];
			arr[k]=arr[pos];
			arr[pos]=temp;
			}	
		}
		int merge_sort(int arr[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		merge_sort(arr,beg,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}
		int merge(int arr[],int beg,int mid,int end)
{
	int i=beg,j=mid+1,index=beg,temp[10];
	while((i<=mid)&&(j<=end))
	{
		if(arr[i]<arr[j])
		{
			temp[index]=arr[i];
			i++;
		}
		else               
		{
			temp[index]=arr[j];
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index]=arr[j];
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index]=arr[i];
			i++;
			index++;
		}
	}
	for(int k=beg;k<index;k++)
	{
		arr[k]=temp[k];
	}
}
	int push(int x)
	{
		if(top==MAX-1)
		{
			printf("\nStack overflow");
			return 0;
		}
		top++;
		arr_stack[top]=x;
	}
	int pop()
	{
		int r;
		if(top==-1)
		{
			printf("\nStack underflow");
		}
		else
		{
			r=arr_stack[top];
			top--;
		printf("\nPopped element= %d",r);
		}
	}
	int  display_stack()
	{
		if(top==-1)
		{
			printf("\nStack underflow");
		}
		for(int i=top;i>=0;i--)
		{
			printf("%d \t",arr_stack[i]);
		}
		}
	int insert()
						{
							int item;
							if(rear==MAX-1)
	                        {
							printf("\nOverflow");
						}
							else
							{
								if(front==-1)
								{
									front=0;
								}
								printf("\nEnter any number");
								scanf("%d",&item);
							    rear++;
							    arr_queue[rear]=item;
							}
						}
								int del()
								{
									if(front==-1||front>rear)
									{
										printf("\nUnderflow");
									}
									else
									{
										printf("\nThe element deleted from queue is= %d",arr_queue[front]);
										front++;
									}
								}
		                           int display_queue()
		                             {
			                          int i;
			                          if(front==-1||front>rear)
			                          {
			                          	printf("\nUnderflow");
									  }
									  else
									  {
									for(i=0;i<=rear;i++)
									{
		                            printf("%d\t",arr_queue[i]);
									  }
								}
		}
		
int first_insert()
	{
	temp=(node*)malloc(sizeof(node));
		printf("\nEnter the data ");
		scanf("%d",&temp->data);
		temp->next=start;
		start=temp;
		ptr=start;
		printf("\nData in single linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
	int any_insert()
{
	int pos,i;
	ptr=start;
	printf("\nEnter the position in which you want to create new node");
	scanf("%d",&pos);
	for(i=1;i<=pos-2;i++)
	{
	ptr=ptr->next;
	}
        temp=(node*)malloc(sizeof(node));
		printf("\nEnter the data ");
		scanf("%d",&temp->data);
		temp->next=ptr->next;
		ptr->next=temp;
		ptr=start;
		printf("\nData in single linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
	int end_insert()
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			}
			temp=(node*)malloc(sizeof(node));
			printf("\nEnter data in last ");
			scanf("%d",&temp->data);
			ptr->next=temp;
			temp->next=NULL;
			ptr=start;
			printf("\nData in single linked list are: ");
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
	}
	int first_delete()
	{
		temp=start;
		start=start->next;
		free(temp);
			ptr=start;
			printf("\nData in single linked list are: ");
			while(ptr!=NULL)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
	}
	int any_delete()
	{
		int i,position;
		ptr=start;
		printf("\nEnter the position to delete the element ");
		scanf("%d",&position);
		for(i=1;i<=position-1;i++)
		{
			temp=ptr;
			ptr=ptr->next;
			}
			temp->next=ptr->next;
			free(ptr);
				temp=start;
			printf("\nData left in single linked list are: ");
			while(temp!=NULL)
			{
				printf("%d\t",temp->data);
				temp=temp->next;
			}
		}
		int end_delete()
		{
			ptr=start;
while(ptr->next!=NULL)
{
	temp=ptr;
	ptr=ptr->next;
}
temp->next=NULL;
free(ptr);
temp=start;
printf("\nData left in single linked list are: ");
while(temp!=NULL)
{
	printf("%d\t",temp->data);
	temp=temp->next;
}
}
          int search_single()
           {
           	int search;
           	ptr=start;
           	printf("\nEnter the data you want to serach");
           	scanf("%d",&search);
           	while(ptr!=NULL)
           	{
           		if(ptr->data==search)
           		{
           			return(ptr->data);
				   }
				   ptr=ptr->next;
				 }
				 return(-1);
			   }
			   	int first()
	{
		ptr=start;
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter the data");
		scanf("%d",&temp->data);
		temp->next=ptr;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		start=temp;
		printf("\nData are:\n");
		while(temp->next!=start)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
	}
	int any()
{
	int pos,i;
	ptr=start;
	printf("\nEnter the position in which you want to create new node\n");
	scanf("%d",&pos);
	for(i=1;i<=pos-2;i++)
	{
	ptr=ptr->next;
	}
        temp=(node*)malloc(sizeof(node));
		printf("enter the data in new node\n");
		scanf("%d",&temp->data);
		temp->next=ptr->next;
		ptr->next=temp;
		ptr=start;
		printf("\nData are:\n");
		while(ptr->next!=start)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
		printf("%d\t",ptr->data);
	}
	int end()
	{
		ptr=start;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
			}
			temp=(node*)malloc(sizeof(node));
			printf("enter data in last:\n");
			scanf("%d",&temp->data);
			ptr->next=temp;
			temp->next=start;
			ptr=start;
			printf("\nData are\n:");
			while(ptr->next!=start)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
			printf("%d\t",ptr->data);
	}
	int first_del()
	{
		temp=start;
		start=start->next;
		free(temp);
			ptr=start;
			while(ptr->next!=temp)
		{
			ptr=ptr->next;
		}
		ptr->next=start;
		ptr=start;
			printf("\nData are:\n");
			while(ptr->next!=start)
			{
				printf("%d\t",ptr->data);
				ptr=ptr->next;
			}
			printf("%d\t",ptr->data);
	}
	int any_del()
	{
		int i,position;
		ptr=start;
		printf("\nenter the position to delete the element\n");
		scanf("%d",&position);
		for(i=1;i<=position-1;i++)
		{
			temp=ptr;
			ptr=ptr->next;
			}
			temp->next=ptr->next;
			free(ptr);
				temp=start;
			printf("\nData are\n:");
			while(temp->next!=start)
			{
				printf("%d\t",temp->data);
				temp=temp->next;
			}
			printf("%d\t",temp->data);
		}
		int end_del()
		{
			ptr=start;
while(ptr->next!=start)
{
	temp=ptr;
	ptr=ptr->next;
}
temp->next=start;
free(ptr);
temp=start;
printf("\nData are:\n");
while(temp->next!=start)
{
	printf("%d\t",temp->data);
	temp=temp->next;
}
printf("%d\t",temp->data);
}
          int search_circular()
           {
           	int search;
           	ptr=start;
           	printf("Enter the data you want to search\n");
           	scanf("%d",&search);
           	while(ptr->next!=start)
           	{
           		if(ptr->data==search)
           		{
           			return(ptr->data);
				   }
				   ptr=ptr->next;
				 }
				 return(-1);
			   }
			   int insert_first()
{
	ptr=start;
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter data ");
	scanf("%d",&temp->data);
	temp->next=start;
	start->prev=temp;
	temp->prev=NULL;
	start=temp;
	printf("\nData in double linked list are: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int insert_any()
{
	node *temp1;
	int pos,i;
	ptr=start;
	printf("\nEnter the position");
	scanf("%d",&pos);
		for(i=1;i<=pos-2;i++)
	{
		ptr=ptr->next;
	}
	temp=(node*)malloc(sizeof(node));
	printf("\nEnter data");
	scanf("%d",&temp->data);
	temp->prev=ptr;
	temp->next=ptr->next;
	ptr->next->prev=temp;
	ptr->next=temp;
    ptr=start;
	printf("\nData in double linked list are: ");
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	}
	int insert_end()
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
		ptr=ptr->next;
		}
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter data");
		scanf("%d",&temp->data);
		ptr->next=temp;
		temp->prev=ptr;
		temp->next=NULL;
		ptr=start;
		printf("\nData in double linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
	}
	int delete_first()
	{
		temp=start;
		start=start->next;
		start->prev=NULL;
		free(temp);
		ptr=start;
		printf("\nData left in double linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
			}
	int delete_any()
	{
		int pos,i;
		ptr=start;
		printf("\nEnter the pos to delete ");
		scanf("%d",&pos);
		for(i=1;i<=pos-1;i++)
		{
			temp=ptr;
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next->prev=temp;
		free(ptr);
			ptr=start;
		printf("\nData left in double linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
		}
		int delete_end()
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				temp=ptr;
				ptr=ptr->next;
			}
			temp->next=NULL;
			free(ptr);
			ptr=start;
		printf("\nData left in double linked list are: ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->data);
			ptr=ptr->next;
		}
			}
			int search_double()
			{
				int item;
				ptr=start;
				printf("\nEnter the element to be searched ");
				scanf("%d",&item);
				while(ptr!=NULL)
				{
					if(ptr->data==item)
					{
					return(ptr->data);
				}
				    ptr=ptr->next;
				}
				return(-1);
			}

 
