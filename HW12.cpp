#include<iostream>
#include<string>
#include "InventoryItem.h"
#include "DynamicStack.h"

using namespace std;


int main()
{
    DynamicStack<InventoryItem> stack;    // create stack
    InventoryItem item;             // create inventory object

    int choice;                     
    int serialNum;
    string manDate;  

    do
    {
        // Display the menu.
        cout << "\n           Inventory Menu           \n\n";
        cout << "1.  Put in a part into the inventory.\n";
        cout << "2.  Take out part from the inventory.\n";
        cout << "3.  Quit.\n\n";
        cout << "Please make a choice (1, 2, or 3): "; 
        cin >> choice; 

        // Validate the choice which was taken as input
        while (choice < 1 || choice > 3)
        {
            cout << "Wrong Value, please enter 1, 2, or 3: "; 
            cin >> choice;
        }

        // Work on user's choice.
        switch (choice)
        {

        case 1:
            // Enter into inventory.
            cout << "\nYou have chosen to add item to inventory bin.\n\n";
            cout << "Enter item's serial number: "; 
            cin >> serialNum;
            item.setserialNum(serialNum);
            cout << "Enter item's manufacture date (MM/DD/YYYY): "; 
            cin >> manDate;
            item.setmanufactDate(manDate);
            stack.push(item);
            break;

        case 2:
            // Take out of inventory.
            cout << "\nYou have chosen to remove item from inventory bin.\n\n";
            
            if (stack.isEmpty())
                cout << "There is nothing to remove.\n";
            else
            {
                stack.pop(item);
                cout << "\nThe part removed was:\n";
                cout << "\tSerial number: " << item.getserialNum() << endl;
                cout << "\tManufacture date: " << item.getmanufactDate() << endl;
                cout << endl;
            }
            break;

        case 3:
            cout << "Thank you.\n";
            break;
        }
    } while (choice < 3);

	system("pause");
	return 0;
}