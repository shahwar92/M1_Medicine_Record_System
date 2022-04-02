/**
 * @file pharma_modify.c
 * @author Shahwar Haider
 * @brief Changes the details of the medicine
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<medicine_operations.h>

void UpdateMedicine(int number)
{
  int id,quantity,choice,c,i;
  printf("Enter ID Number to Update Details\n");
  scanf("%d",&id);
  for(i=0;i<number;i++)
  {
   if(m[i].id==id && m[i].id!=0)
   {
    do
    {
        printf("Enter\n1 - Update Quantity\n2 - Update Price\n3 - Update Name\n4 - Update Manufacturer\n5 - Update Manufaturing Date\n6 - Update Expiry Date\nEnter Any other number to exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
         int quantity;
         printf("Enter the Quantity to be update\n");
         fflush(stdin);
         scanf("%d",&quantity);
         m[i].quantity=quantity;
         printf("Quantity updated Successfully\n");
        }
        if(choice==2)
        {
         int price;
         printf("Enter Price in rupees to be update\n");
         fflush(stdin);
         scanf("%d",&price);
         m[i].price=price;
         printf("Price updated Successfully\n");
        }
        if(choice==3)
        {
         char name[100];
         printf("Enter Medicine Name to be update\n");
         fflush(stdin);
         scanf("%s",name);
         strcpy(m[i].medicneName,name);
         printf("Medicine Name updated Successfully\n");
        }
        if(choice==4)
        {
         char company[100];
         printf("Enter Manufacturer Name to be update\n");
         fflush(stdin);
         scanf("%s",company);
         strcpy(m[i].Company,company);
         printf("Manufacturer Name updated Successfully\n");
        }
        if(choice==5)
        {
         char mfg[11];
         printf("Enter Manufacturing date to be updatd\n");
         fflush(stdin);
         scanf("%s",mfg);
         strcpy(m[i].Mfg_Date,mfg);
         printf("Manufacturing Date updated Successfully\n");
        }
        if(choice==6)
        {
         char exp[11];
         printf("Enter Expiry date to be update\n");
         fflush(stdin);
         scanf("%s",exp);
         strcpy(m[i].Exp_Date,exp);
         printf("Expiry Date updated Successfully\n");
        }
        if(choice<=0 && choice>6)
        {
         printf("Enter valid Choice\n");
        }
        printf("Enter 1 to Update other Details else enter any other number to go back\n");
        fflush(stdin);
        scanf("%d",&c);
    }while(c==1);
    break;
   }
  }
 }
