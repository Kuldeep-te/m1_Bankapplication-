void Create_new_account()
{
   char bank_name[20];
   char bank_branch[20];
   char acc_holder_name[30];
   int acc_number;
   char acc_holder_address[100];
   float available_balance = 0;
   fflush(stdin);     
   printf("\nEnter the bank name : ");
   scanf("%s", bank_name);
   printf("\nEnter the bank branch : ");
   scanf("%s", bank_branch);
   printf("\nEnter the account holder name : ");
   scanf("%s", acc_holder_name);
   printf("\nEnter the account number(1 to 10): ");
   scanf("%d", acc_number);
   printf("\nEnter the account holder address : ");
   scanf("%s", acc_holder_address);

   strcpy(account[acc_number-1].bank_name,bank_name);
   strcpy(account[acc_number-1].bank_branch,bank_branch);
   strcpy(account[acc_number-1].acc_holder_name,
   acc_holder_name);
   account[acc_number-1].acc_number=acc_number;
   strcpy(account[acc_number-1].acc_holder_address,
   acc_holder_address);
   account[acc_number-1].available_balance=available_balance;

   printf("\nAccount has been created successfully \n\n");
   printf("Bank name : %s \n" , 
   account[acc_number-1].bank_name);
   printf("Bank branch : %s \n" , 
   account[acc_number-1].bank_branch);
   printf("Account holder name : %s \n" , 
   account[acc_number-1].acc_holder_name);
   printf("Account number : %d \n" , 
   account[acc_number-1].acc_number);
   printf("Account holder address : %s \n" , 
   account[acc_number-1].acc_holder_address);
   printf("Available balance : %f \n" , 
   account[acc_number-1].available_balance);

   //num_acc++;
