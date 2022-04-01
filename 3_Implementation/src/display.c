void Account_information()
{
     register int num_acc = 0;
     //if (!strcmp(customer,account[count].name))
     while(strlen(account[num_acc].bank_name)>0)
     {
         printf("\nBank name : %s \n" , 
         account[num_acc].bank_name);
         printf("Bank branch : %s \n" , 
         account[num_acc].bank_branch);
         printf("Account holder name : %s \n" , 
         account[num_acc].acc_holder_name);
         printf("Account number : %d \n" , 
         account[num_acc].acc_number);
         printf("Account holder address : %s \n" , 
         account[num_acc].acc_holder_address);
         printf("Available balance : %f \n\n" , 
         account[num_acc].available_balance);
         num_acc++;
     }
