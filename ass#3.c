#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int prime_sesries(int num){ 		//q.4
//	int i;
//	for(i=2; i*i < num; i++){
//	     if(num%i == 0){
//	     	
//		 	}
//		}
//}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//int main(int argc, char *argv[]) {

//=========================================================================	

//QUESTION # 3:-
	
//	int i , j ,num;
//	printf("Enter number =");                 // num=4
//	scanf("%d",&num);
//	for(i=1;i<=num;i++){                            //i=1 , j=1   output:- 1*1=1
//		for(j=1;j<=10;j++){                         //i=1 , j=2   output:- 1*2=2
//			printf("%d * %d = %d\n",i,j,(i*j));     //i=1 , j=2   output:- 1*3=3
//		}                                           //i=1 , j=4   output:- 1*4=4
//		printf("\n");                               // .   .         .     . . . .
//	}                                               // . . . . . .
                                         

//=========================================================================	
	
//QUESTION # 4:-
	
//int lower_limit, upper_limit, i;
//printf("Enter lower limit =");	
//scanf("%d",&lower_limit);
//
//printf("Enter upper limit =");	
//scanf("%d",&upper_limit);
//
//printf("The prime numbers between %d and %d are =",lower_limit,upper_limit);
//for(i=lower_limit ; i <= upper_limit; i++){
//	if(prime_sesries(i)){
//		printf("%d,\n",i);
//	}
//}

//==============================================================

//QUESTION # 5:-


//int row, col;
//for(row=1;row<=5;row++){
//	for(col=1;col<=5;col++){
//		if(col>=6-row && col<=5){
//			printf("%d",row);
//		}
//		else{
//			printf(".");
//		}
//	}
//	printf("\n");
//}

//==============================================================

//QUESTION # 6:-

//int row, col;
//for(row=1;row<=5;row++){
//	for(col=1;col<=5;col++){
//		if(col==6-row){
//			printf("%d",row);
//		}
//		else{
//			printf(".");
//		}
//	}
//	printf("\n");
//}

//=========================================================================	

//Question # 8:-

//    int a[5]={1,2,3,4,5},i,n,min,max;
//   
//    printf("Enter size of the array : ");
//    scanf("%d",&n);
// 
//    printf("Enter elements in array : ");
//    for(i=0; i<n; i++)
//    {
//        scanf("%d",&a[i]);
//    }
// 
//    for(i=1; i<n; i++)
//    {
//         if(min>a[i])
//		  min=a[i];   
//		   if(max<a[i])
//		    max=a[i];       
//    }
//     printf("minimum of array is : %d",min);
//          printf("\nmaximum of array is : %d",max);
 
//======================================================================

//QUESTION # 9:-

//   int a[10000],i,n,value;
//   
//    printf("Enter size of the  array : ");
//    scanf("%d", &n);
//    printf("Enter elements in array : ");
//    for(i=0; i<n; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//     printf("Enter the value : ");
//    scanf("%d", &value);
//     
//    for(i=0; i<n; i++)
//    {
//        if(a[i]==value)
//        {
//			printf("value found ");
//            return 0;		 
//        }
// 
//    }
//    
//	printf("value  not  found");

//=========================================================================	

//QUESTION # 10:-
 
// int arr1[50], arr2[50], size1, size2, i, k, new_arr[100];
//    printf("Enter Array 1 Size: ");
//    scanf("%d", &size1);
//    printf("Enter Array 1 Elements: ");
//    for(i=0; i<size1; i++)
//    {
//        scanf("%d", &arr1[i]);
//        new_arr[i] = arr1[i];
//    }
//    k = i;
//    printf("\nEnter Array_2 Size: ");
//    scanf("%d", &size2);
//    printf("Enter Array_2 Elements: ");
//    for(i=0; i<size2; i++)
//    {
//        scanf("%d", &arr2[i]);
//        new_arr[k] = arr2[i];
//        k++;
//    }
//    printf("\nThe new array after merging is:\n");
//    for(i=0; i<k; i++)
//        printf("%d ", new_arr[i]);
//===================================================================

//	question # 11:-

//===================================================================

//	question # 12:-

//  int array[100], position, i, n, value;
//   printf("Enter number of elements in array\n");
//   scanf("%d", &n);
// 
//   printf("Enter %d elements\n", n);
// 
//   for (i = 0; i < n; i++)
//      scanf("%d", &array[i]);
// 
//   printf("Enter the location where you wish to insert an element\n");
//   scanf("%d", &position);
// 
//   printf("Enter the value to insert\n");
//   scanf("%d", &value);
// 
//   for (i = n - 1; i >= position - 1; i--)
//      array[i+1] = array[i];
// 
//   array[position-1] = value;
// 
//   printf("Resultant array is\n");
// 
//   for (i = 0; i <= n; i++)
//      printf("%d\n", array[i]);
 
//==============================================================

//QUESTION # 13:-

//int array[100], position, i, n;
//
//   printf("Enter number of elements in array\n");
//   scanf("%d", &n);
//
//   printf("Enter %d elements\n", n);
//
//   for (i = 0; i < n; i++)
//      scanf("%d", &array[i]);
//
//   printf("Enter the location where you wish to delete element\n");
//   scanf("%d", &position);
//
//   if (position >= n+1)
//      printf("Deletion not possible.\n");
//   else
//   {
//      for (i = position - 1; i < n - 1; i++)
//         array[i] = array[i+1];
//
//      printf("Resultant array:\n");
//
//      for (i = 0; i < n - 1; i++)
//         printf("%d\n", array[i]);
//   }

//==============================================================

//QUESTION # 16:-
 
//int arr1[3][3]={1,2,3,4,5,6,7,8,9};
//int arr2[3][3]={1,2,3,4,5,6,7,8,9};
//int resultarr[3][3];
//int i, j, k, sum;
//for(i=0;i<=2;i++){
//	for(j=0;j<=2;j++){
//			sum=0;
//			for(k=0;k<=2;k++){
//				sum=sum+arr1[i][k]*arr2[k][j];
//				resultarr[i][j]=sum;
//			}
//		}
//	}
//for(i=0;i<=2;i++){
//	for(j=0;j<=2;j++){
//	      printf("%d ",resultarr[i][j]);
//	}
//	printf("\n");
//} 

//int arr[100],num,count=0;
//while(num!=-1){
//	printf("Enter a positive number, or -1 to quit:\n");
//	scanf("%d",&num);
//	if(num>=2){
////	printf("No data entered. No calculations  performed. THANK YOU! ");
//		count+=1;
//		scanf("%d",&arr[100]);
//	}	
//	else if(num==0 || num<=-2){
//		printf("Please enter the positive number\n");
//	}
////	break;
//	else{
////		count+=1;
////		scanf("%d",&arr[100]);
//	printf("No data entered. No calculations  performed. THANK YOU! ");
//
//	}
//	
//}
//
//int i,j;
//for(i=1;i<=10;i++){
// 	if(i==1 || i==10)
//			printf("+");
//	 		
//}



void pyrimd(){
	  int row, col,noofrows;
   printf("Enter the number of rows: ");
   scanf("%d", &noofrows);
   for (row = 1; row <= noofrows; ++row) {
	  for (col = 1; col <= row; ++col) {
         printf("* ");
      }
      printf("\n");
   }
}
//-==============================================
void inverse(){
	 int row, col,noofrows;
   printf("Enter the number of rows: ");
   scanf("%d", &noofrows);
   for (row =noofrows ; row >= 0; row--) {
	  for (col = 1; col <= row; col++) {
         printf("* ");
      }
      printf("\n");
   }
}
//-==============================================
void printStrongNumbers(){

    long long sum;
    int num;
    int start, end;

    while(start != end)
    {
        sum = 0;
        num = start;
        
     
        while(num != 0)
        {
            sum += fact(num % 10);
            num /= 10; 
        }
        
        
        if(start == sum)
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}
int main(int argc, char *argv[]) {
//	int no_ofrows;
//	printf("Enter numbers of rows:");
//	scanf("%d",&no_ofrows);
//	pyrimd(no_ofrows);
//inverse();	
int start, end;
    
   
    printf("Enter the lower limit to find strong number: ");
    scanf("%d", &start);
    printf("Enter the upper limit to find strong number: ");
    scanf("%d", &end);
    
    printf("All strong numbers between %d to %d are: \n", start, end);
    printStrongNumbers(start, end);













 
	return 0;
}
