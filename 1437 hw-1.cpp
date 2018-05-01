//**************************************************************************************************
//Filename: Sullivan_CREG_Assignment_1
//Purpose: To Calculate Total Quanity Discount for a Software Co.
//Author: Creg C. Sullivan Sr.
//Date: January 26, 2010
//******************************************************************************************************

// Headers and other Technical Items

#include <iostream>
#include <cstdlib>

using namespace std;

//Function Prototypes

void pause(void);

// variables

int units;
double total_cost;
const double cost = 99.00;

//*****************************************************************************
// main
//*****************************************************************************
int main(void)
  {
//*****************************************************************************
//Input
//****************************************************************************

 cout << "\nEnter the number of units sold.--->:  ";
 cin >> units;

//******************************************************************************
//Process
//******************************************************************************

total_cost = units * cost;
            
   if(units >=10&& units <=19)
   {
        total_cost = (units*cost)-(total_cost*.20);
   }
   else if(units >=20&& units <=49)
      {
       total_cost = (units*cost)-(total_cost* .30);
       }
     else if(units >=50&& units <=99 )
     {
      total_cost= (units*cost)-(total_cost* .40);
      }
       else if(units>=100)
       {
      total_cost=(units*cost)-(total_cost*.50);
      }
         else
      cout << "\nYou did not buy enough units for a discount.";
      
  
//******************************************************************************
//Output
//*******************************************************************************

cout << "\nThe total_cost is --->: ";
cout << total_cost;

pause ();
return 0;
}
//*****************************************************************************
//pause
//*****************************************************************************

void pause(void)
{
     cout << "\n\n";
     system("PAUSE");
     cout << "\n\n";
     return;
}
//******************************************************************************
//end program
//***************************************************************************** 
