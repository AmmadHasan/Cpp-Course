#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int balance=5000, pin=1234, tmpPin, amountwithdraw, option ,amountDeposit, anothertransactoin = 1;
	
	printf("Please enter your PIN code :");
	scanf("%d",&tmpPin);
	
	if(pin != tmpPin){
		printf("Invaid PIN code!!\n");
		return 0;
    }
	
//	printf("Please enter correct one :");
//	scanf("%d",tmpPin);
//	if(pin == tmpPin){
	
	printf("What do you want to do?\n");
	printf("1-> Check your balance. \n");
	printf("2-> Deposit. \n");	
	printf("3-> Withdraw \n");
	printf("4-> Exit. \n");
	scanf("%d",&option);
	
	
//	while(anothertransactoin == 1)
//	{
	

		
	 if(option == 1) {                   // Check your balance
	    printf("\nYour balance is = %d Rupees.\n",balance);
			 }
	
	else if(option == 2){                  // Deposit.
		printf("Enter how much money do you want to deposit =");
		scanf("%d",&amountDeposit);
		if(amountDeposit > 0){
		balance += amountDeposit;
		}
		else{
			printf("Invaid deposite amount \n");
		}
     }
		
		
		else if (option == 3 ){
		
		printf("\nEnter how much do you want to withdraw \n your amount should be 500 , 1000, 1500, 2000, 2500, or 3000 nothing else =");
		scanf("%d",&amountwithdraw);
		if(amountwithdraw <= balance && amountwithdraw % 20 == 0){
				balance -= amountwithdraw;
				printf("\nTake your money %d\n",amountwithdraw);				
	    }
	    else{
	    	if(amountwithdraw > balance){
	    		printf("\nYou don't have enouph money . Declined.\n");
			}
			else{
				printf("\nEnter the amount that must greater then 500\n");
			}
		}
	 } 
			
		
		else if(option == 4){
		printf("\nTHANK YOU ! for using ATM Mechine of XYZ bank.\n");	
		
	 }
		
		else{
		printf("Invaid choice");
		}
		
	 anothertransactoin = 0;
	
	 if(anothertransactoin != 1 && anothertransactoin != 2){
		printf("Do you want to do another transactoin \n");
		printf("1-> yes, 2-> no ");
		scanf("%d",&anothertransactoin);
		if (anothertransactoin == 1){
				printf("What do you want to do?\n");
		printf("1-> Check your balance. \n");
		printf("2-> Deposit. \n");	
		printf("3-> Withdraw \n");
		printf("4-> Exit. \n");
		scanf("%d",&option);
			
		}
			
		}
	

//}
	
	return 0;
}
