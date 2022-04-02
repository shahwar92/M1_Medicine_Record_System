/**
 * @file pharma_delete.c
 * @author Shahwar Haider
 * @brief Delete the Medicine from Inventory if Stock is empty
 * @version 0.1
 * @date 2028-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<medicine_operations.h>


void DeleteMedicine(int number)
{
  int id,i,flag=0,num;
  printf("Enter Medicine ID Number to delete\n");
  fflush(stdin);
  scanf("%d",&id);
  
  for(i=0;i<number;i++)
  {
   if(m[i].id==id)
   {
    flag=1;
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    num=i;
    break;
   }
  }
  if(flag==1)
  {
   printf("Medicine with ID Number %d is Deleted Successfully\n",id);
  }
}
