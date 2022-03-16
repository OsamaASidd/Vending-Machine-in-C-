    #include <stdio.h>
    #include <stdlib.h>
    #include <conio.h>
    #include <time.h>


    void wait(int seconds);
    void welcome_screen();
    void bill(float billmoney);
    int penceentered();
    int menu();
    int differentcoins();
    void drinktotal(int selection,int amount);
    void  drinkchosen(int selection);
    float cost(int selection);
    void receipt(int change);
    
	int main()
{
     welcome_screen();
     getch();
    
    char a; 
    int q;
    int entered;
    int amount;
    int cancel;
    int select;
    int selection;
    int pence;
    int billreq;
    int change;
    float drinkmax;
    float billmoney;
    float itemprice;
    float coinselected;
    float total;

    selection = menu();
    drinkchosen(selection);

    if(selection >0 && selection <=20)
     {
         printf("\n\nPress 1 to continue or 2 to cancel the order\n");
         scanf("%d",&cancel);
         if(cancel==1)
        {
          printf("How  many?(Max 5)\n");
          scanf("%d",&amount);
          if(amount<=5)
          {  itemprice = cost(selection);
             drinkmax=amount*itemprice;
             billmoney=drinkmax;
             bill(billmoney);
             x:pence=penceentered();


                      if(pence>=20 && pence <=1000)
                        {
                            while(total<=drinkmax)
                           {
                            total=total+pence;
                            billreq = drinkmax-total;


                            if(total<drinkmax )
                            {
                             printf("\n\nYour outstanding money is %d Rs", billreq);
                             printf("\n\n");
                             goto x;
                            }
                            else if(total>drinkmax)
                            {
                             change=total-drinkmax;
                             drinktotal(selection,amount);                          
							 for(q=1;q<=amount;q++)
                                {
                                 switch(selection)
                                 	
									 {
									 
									case 1:
                                 		printf("\t\t\tLays #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 2:
                                 		printf("\t\t\tKurleez #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 3:
                                 		printf("\t\t\tPringles #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 4:
                                 		printf("\t\t\tDoritos #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 5:
                                 		printf("\t\t\tKurkure #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 6:
                                 		printf("\t\t\tCheetos #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 7:
                                 		printf("\t\t\tWater #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 8:
                                 		printf("\t\t\tTea #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 9:
                                 		printf("\t\t\tCoffee #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 10:
                                 		printf("\t\t\tOreo #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 11:
                                 		printf("\t\t\tChocolate chip cookies #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 12:
                                 		printf("\t\t\tPrince #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 13:
                                 		printf("\t\t\tCocomo #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 14:
                                 		printf("\t\t\tRite #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;                                 		
                                    case 15:
                                 		printf("\t\t\tMars #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 16:
                                 		printf("\t\t\tSnickers #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 17:
                                 		printf("\t\t\tKitkat #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 18:
                                 		printf("\t\t\tCadbury #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 19:
                                 		printf("\t\t\tSmarties #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 20:
                                 		printf("\t\t\tSting Energy drink #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	}
                                 wait(5);
                                }
                             printf("\n\t\t\tYour change is %d Rs\n\n",change);
                             
                             break;
                            }
                            else
                            {
                            drinktotal(selection,amount);
                            for(q=1;q<=amount;q++)
                                {
                                 switch(selection)
                                 	
									 {
									 
									case 1:
                                 		printf("\t\t\tLays #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 2:
                                 		printf("\t\t\tKurleez #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 3:
                                 		printf("\t\t\tPringles #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 4:
                                 		printf("\t\t\tDoritos #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 5:
                                 		printf("\t\t\tKurkure #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 6:
                                 		printf("\t\t\tCheetos #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 7:
                                 		printf("\t\t\tWater #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 8:
                                 		printf("\t\t\tTea #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 9:
                                 		printf("\t\t\tCoffee #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 10:
                                 		printf("\t\t\tOreo #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 11:
                                 		printf("\t\t\tChocolate chip cookies #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 12:
                                 		printf("\t\t\tPrince #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
									case 13:
                                 		printf("\t\t\tCocomo #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 14:
                                 		printf("\t\t\tRite #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;                                 		
                                    case 15:
                                 		printf("\t\t\tMars #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 16:
                                 		printf("\t\t\tSnickers #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 17:
                                 		printf("\t\t\tKitkat #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 18:
                                 		printf("\t\t\tCadbury #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 19:
                                 		printf("\t\t\tSmarties #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	case 20:
                                 		printf("\t\t\tSting Energy drink #%d is being dispenced",q);
                                 		printf("\n\n");
                                 		break;
                                 	}
                                 wait(5);
                                }
                            
                             break;
                            }
                           }
                        }
                        else
                        {
                            printf("\nMoney not acceptable!Please Try again!\n\n");
                            goto x;
                        }
                        printf("\n\nDo you want to purchase more items ?");
                        printf("\ny=YES");
                        printf("\nn=NO");
                        printf("\nEnter the y/n: ");
                        scanf(" %c",&a);
                        if (a=='y')
					    main();
					    else 
					    system("cls");
					    printf("\n");
					    printf("\n");
					    printf("\n");
					    printf("\n");
						printf("\n");
					    printf("\n");
					    printf("\n");
					    printf("\n");
						printf("\n\t\t\t\t please take your receipt!!!");
						wait(5);						 
						receipt(change);	    
						getch();
        }


        else{
                printf("Maximum quantity is 5. Please try again\n");
                main();
            }
      }
      else


        {
            printf("Your order has been cancelled\n\n");
            main();
        }
     }
   else
   {
       printf("Your order has been cancelled\n\n");
       main();
   }


}


   void welcome_screen()
   {
        printf("\t\t\tWelcome to our Vending Machine By FAST NUCES (KHI) !\n\n");
        printf("\t\t\tCopyright Coca-Cola 2014 and 1356602\n\n");
        printf("\t\t\tPress any key to continue.\n\n\n\n");
       return;
   }


   void bill(float billmoney)
   {
       printf("Total amount to be payed is: %.2f\n\n\n",billmoney);
       return;
   }




int penceentered()
   {
        int pence;
        printf("Enter your money: \n");
        printf("(20Rs 50Rs 100Rs 500Rs 1000Rs)\n");
        scanf("%d",&pence);
        if(pence>1000)
       {
		printf("Enter money below 1000Rs");
        scanf("%d",&pence);
       }
     return pence;
   }


int menu()
    {
  int selection;


    printf("---------------------- \n");


    printf("ITEMS AVAILABLE: ");
    printf("\n\n");
    printf("1. Lays");                           printf("\t\t\t\tPKR 30\n");

    printf("2. Kurleez");                        printf("\t\t\tPKR 20\n");

    printf("3. Pringles");                       printf("\t\t\tPKR 100\n");

    printf("4. Doritos");                        printf("\t\t\tPKR 200\n");

    printf("5. Kurkure");                        printf("\t\t\tPKR 20\n");

    printf("6. Cheetos");                        printf("\t\t\tPKR 50\n");

    printf("7. Water");                          printf("\t\t\tPKR 40\n");

    printf("8. Tea");                            printf("\t\t\t\tPKR 20\n");

    printf("9. Coffee");                         printf("\t\t\tPKR 30\n");

    printf("10. Oreo");                          printf("\t\t\tPKR 50\n");

    printf("11. Chocolate Chip Cookies");        printf("\tPKR 40\n");

    printf("12. Prince");                        printf("\t\t\tPKR 20\n");

    printf("13. Cocomo");                        printf("\t\t\tPKR 20\n");

    printf("14. Rite");                          printf("\t\t\tPKR 20\n");

    printf("15. Mars");                          printf("\t\t\tPKR 90\n");

    printf("16. Snickers");                      printf("\t\t\tPKR 90\n");

    printf("17. KitKat");                        printf("\t\t\tPKR 90\n");

    printf("18. Cadbury");                       printf("\t\t\tPKR 90\n");

    printf("19. Smarties");                      printf("\t\t\tPKR 100\n");

    printf("20. Sting Energy Drink");            printf("\t\tPKR 60\n");

    printf("\n\n");
    printf("\n\n");


    printf("Please enter your selection: ");
    scanf("%d",&selection);


    return selection;


    }
    void drinkchosen(int selection)
{
switch(selection)  {

    case 1:

         printf("You chose Lays  ");                  printf("Please make your payment\n");

         break;

    case 2:

         printf("You chose Kurleez  ");                printf("Please make your payment\n");

         break;

    case 3:

         printf("You chose Pringles  ");          printf("Please make your payment\n");

         break;

    case 4:

         printf("You chose Doritos  ");             printf("Please make your payment\n");

         break;

    case 5:

         printf("You chose Kurkure  ");                printf("Please make your payment\n");

         break;

    case 6:

         printf("You chose Cheetos  ");            printf("Please make your payment\n");

         break;

    case 7:

         printf("You chose Water  ");                printf("Please make your payment\n");

         break;

    case 8:

         printf("You chose Tea  ");      printf("Please make your payment\n");

         break;

    case 9:

         printf("You chose Coffee  ");   printf("Please make your payment\n");

         break;

    case 10:

         printf("You chose Oreo  ");         printf("Please make your payment\n");

         break;

    case 11:

         printf("You chose Chocolate Chip Cookies  ");  printf("Please make your payment\n");

         break;

    case 12:

         printf("You chose Prince  ");              printf("Please make your payment\n");  

         break;

    case 13:

         printf("You chose Cocomo  ");             printf("Please make your payment\n");    

         break;

    case 14:

         printf("You chose Rite  ");                 printf("Please make your payment\n");

         break;

    case 15:

         printf("You chose Mars  ");                 printf("Please make your payment\n");  

         break;

    case 16:

         printf("You chose Snickers  ");           printf("Please make your payment\n");

         break;

    case 17:

         printf("You chose KitKat  ");     printf("Please make your payment\n");

         break;

    case 18:

         printf("You chose Cadbury  ");             printf("Please make your payment\n");

         break;

    case 19:

         printf("You chose Smarties  ");               printf("Please make your payment\n");   

         break;

    case 20:

         printf("You chose Sting Energy Drink  ");        printf("Please make your payment\n");  

         break;

    default:

         printf("Invalid Input! Please try again!!!\n");

         break;
      
}
return;
}

float cost(int selection)
 {
  float price = 0;
  switch(selection)
  {
    case 1:
       price = 30;
       break;
    case 2:
       price = 20;
       break;
    case 3:
       price = 100;
       break;
    case 4:
       price = 200;
       break;
    case 5:
	   price = 20;
	   break;   
	case 6:
	   price = 50;
	   break;  
	case 7:
	   price = 40;
	   break;  
	case 8:
	   price = 20;
	   break;  
	case 9:
	   price = 30;
	   break; 
	case 10:
	   price = 50;
	   break; 
	case 11:
	   price = 40;
	   break; 
	case 12:
	   price = 20;
	   break; 
	case 13:
	   price = 20;
	   break; 
	case 14:
	   price = 20;
	   break; 
	case 15:
	   price = 90;
	   break; 
	case 16:
	   price = 90;
	   break; 
	case 17:
	   price = 90;
	   break; 
	case 18:
	   price = 90;
	   break; 
	case 19:
	   price = 100;
	   break; 
	case 20:
	   price = 60;  
	   break;
	default: 
	break;
   }
   return price;
 }


void wait(int seconds)
{
    clock_t end_wait=(clock() + (seconds * CLOCKS_PER_SEC));
    while(clock()<end_wait)
    {}
}


void drinktotal(int selection,int amount)
    {
      switch(selection)
      {
    case 1:
         printf("\n\n\t\t\tYou have selected %d Lays\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 2:
         printf("\n\n\t\t\tYou have chosen %d Kurleez\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 3:
         printf("\n\n\t\t\tYou have chosen %d Pringles\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 4:
         printf("\n\n\t\t\tYou have chosen %d Doritos\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 5:
         printf("\n\n\t\t\tYou have chosen %d Kurkure\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 6:
         printf("\n\n\t\t\tYou have chosen %d Cheetos\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 7:
         printf("\n\n\t\t\tYou have chosen %d Water\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 8:
         printf("\n\n\t\t\tYou have chosen %d Tea\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 9:
         printf("\n\n\t\t\tYou have chosen %d Coffee\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 10:
         printf("\n\n\t\t\tYou have chosen %d Oreo\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 11:
         printf("\n\n\t\t\tYou have chosen %d Chocolate Chip Cookies\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 12:
         printf("\n\n\t\t\tYou have chosen %d Prince\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 13:
         printf("\n\n\t\t\tYou have chosen %d Cocomo\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 14:
         printf("\n\n\t\t\tYou have chosen %d Rite\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 15:
         printf("\n\n\t\t\tYou have chosen %d Mars\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 16:
         printf("\n\n\t\t\tYou have chosen %d Snickers\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 17:
         printf("\n\n\t\t\tYou have chosen %d Kitkat\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 18:
         printf("\n\n\t\t\tYou have chosen %d Cadbury\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 19:
         printf("\n\n\t\t\tYou have chosen %d Smarties\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    case 20:
         printf("\n\n\t\t\tYou have chosen %d Sting Energy drink\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
    default:
         printf("Invalid input!\n");
         break;
      }
 }
 void receipt(int change)
 {
 	FILE *fptr;
 	
 	 fptr=fopen("C:\\Users\\Iqra computer\\Desktop\\FAST DOCs\\Semester 1\\PF\\Pf project\\Your Receipt.txt","w");
					    fprintf(fptr,"\t\t\tReceipt from Vending Machine By FAST NUCES (KHI) !\n\n");
                        fprintf(fptr,"\t\t\tCopyright Coca-Cola 2014 and 1356602\n\n");
						fprintf(fptr,"\t\t\t\t ----------------------------\n");
						fprintf(fptr,"\n\t\t\t\tYour change is %d Rs\n\n",change);
					    fprintf(fptr,"\n\t\t\t\t***Thank you and have a nice day!!!***");
						fprintf(fptr,"\n\t\t\t\t ----------------------------\n");					    
					    fclose(fptr);
 }
