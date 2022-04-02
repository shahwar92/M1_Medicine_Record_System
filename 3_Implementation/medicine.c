/**
 * @file pharma.c
 * @author Shahwar Haider
 * @brief A medical store digital register to store the data of medicine.
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<medicine_operations.h>
 
int main()
{
  int i,j,choice,number=0,c;
  for(i=0;i<100;i++)
  {
    m[i].id=0;
    m[i].price=0;
    m[i].quantity=0;
    strcpy(m[i].Mfg_Date,"");
    strcpy(m[i].Exp_Date,"");
    strcpy(m[i].medicneName,"");
    strcpy(m[i].Company,"");
  }
  m[0].id=1;
  m[0].price=100;
  m[0].quantity=50;
  strcpy(m[0].Mfg_Date,"11-04-2021");
  strcpy(m[0].Exp_Date,"24-04-2022");
  strcpy(m[0].medicneName,"Adderall");
  strcpy(m[0].Company,"Sun Pharma");
  
  do{
      printf("Enter\n1 - For Add Medicine\n2 - For Update Medicine\n3 - For Remove Medicine\n4 - For Search Medicine\n5 - For Show Medicine\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
              ++number;
              AddMedicine(number,m);
              break;
          }
          case 2:
          {
              UpdateMedicine(number+1);
              break;
          }
          case 3:
          {
              DeleteMedicine(number+1);
              break;
          }
	        case 4:
          {
              SearchMedicine(number+1);
              break;
          }
	        case 5:
          {
              DisplayMedicine(number+1);
              break;
          }
      }
      printf("To Continue with other Options Enter 1 else enter any other number\n");
      scanf("%d",&c);
    }while(c==1);
} 

