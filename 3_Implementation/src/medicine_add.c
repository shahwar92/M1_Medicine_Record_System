/**
 * @file pharma_add.c
 * @author Shahwar Haider
 * @brief Add Medicine in the inventory
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<medicine_operations.h>

void AddMedicine(int number,struct Medicine m[])
{
  char name[100];
  
  
  printf("Enter Medicine ID Number\n");
  scanf("%d",&(m[number].id));
  fflush(stdin);
  
  printf("Enter the Name of Medicine\n");
  scanf("%s",(m[number].medicneName));
  fflush(stdin);
  
  printf("Enter Name of Manufacturer\n");
  fflush(stdin);
  scanf("%s",(m[number].Company));
  
  printf("Enter the Date of Production\n");
  fflush(stdin);
  scanf("%s",(m[number].Mfg_Date));
  
  printf("Enter Expiry Date\n");
  fflush(stdin);
  scanf("%s",(m[number].Exp_Date));
  
  printf("Enter Quantity\n");
  fflush(stdin);
  scanf("%d",&(m[number].quantity));
  
  printf("Enter Price\n");
  fflush(stdin);
  scanf("%d",&(m[number].price));
  
  printf("Medicine with id %d Added Successfully\n",m[number].id);
}

