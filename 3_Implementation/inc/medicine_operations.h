/**
 * @file medicine_operations.h
 * @author Shahwar Haider
 * @brief Manage Medical store inventory
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 20212
 * 
 */
#ifndef __MEDICINE_OPERATIONS_H__
#define __MEDICINE_OPERATIONS_H__

#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Medicine
{
   int id,price,quantity;
   char medicneName[100],Company[100],Mfg_Date[11],Exp_Date[11];
}m[100];
/**
* It takes the ID of medicine and shows all the available medicine on the display
* @param[in] number
*/

void DisplayMedicine(int number);
/**
* It takes medicine ID as an argument and shows the detils of that medicine.
*/
void SearchMedicine(int number);
/**
* It takes all the required data to add medicine in the inventory
* @param[in] number
* @param Medicine m[]
* e.g. Medicine ID
* Medicine name
* Manufacturer name
* Manufacturing Date
* Expiry Date
* Quantity of Medicine
* Price of Medicine in Indian Rupee
*/

void AddMedicine(int number,struct Medicine m[]);
/**
* It deletes the medicine from inventory
* It takes the medicine ID and delete it
* @param[in] number
*/
void DeleteMedicine(int number);
/**
* It takes medicine ID as argument and update all the required details by the user
* @param[in] number
*/

void UpdateMedicine(int number);

#endif  /* __MEDICINE_OPERATIONS_H__*/
