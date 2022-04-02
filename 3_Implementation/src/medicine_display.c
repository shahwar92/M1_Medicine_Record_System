/**
 * @file pharma_display.c
 * @author Shahwar Haider
 * @brief It shows all the medicine available in inventory
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<medicine_operations.h>

void DisplayMedicine(int number)
{
  int i;
  if(number!=0)
  {
    printf("All Available Medicines are\n");
    printf("*********************************************************************************\n");
    printf("ID   Med_Name    Price(Rs)   Quantity    Manufacturer    Mfg Date    Exp Date\n");
	  printf("*********************************************************************************\n");
    
    for(i=0;i<number;i++)
    {
      if(m[i].id!=0)
      {
        printf("%-5d%-16s%-10d%-10d%-16s%-12s%-16s\n\n",m[i].id,m[i].medicneName,m[i].price,m[i].quantity,m[i].Company,m[i].Mfg_Date,m[i].Exp_Date);
      }
    }
  }
  else
  {
    printf("\nNo Items or Medicines are Available\n");
  }
}
