#include <iostream>
#include <iomanip>
#include<windows.h> 
#include <unistd.h>
#include "Inventory.h"
#include "clue.h"
#include "function.h"


// ANSI escape code for red text color
#define ANSI_COLOR_RED "\033[31m"
// ANSI escape code to reset text color
#define ANSI_COLOR_RESET "\033[0m"
#define ANSI_COLOR_BLUE "\033[34m"
#define ANSI_COLOR_GREEN "\033[32m"
#define ANSI_COLOR_RESET "\033[0m"
#define ANSI_COLOR_PURPLE "\033[35m"


// ANSI escape codes for font size
#define ANSI_FONT_SIZE_2   "\033[2J\033[1;2H"
#define ANSI_FONT_SIZE_3   "\033[2J\033[1;3H"
#define ANSI_FONT_SIZE_4   "\033[2J\033[1;4H"
#define ANSI_FONT_SIZE_5   "\033[2J\033[1;5H"


using namespace std;
		
int main()
{
	Inventory inv;
	Clue clue;
	int choice;
    bool exit = false;

    while (!exit)
    {
    	cout<<ANSI_COLOR_PURPLE;
        cout << "=== Last Night in CS ===" << endl;
        cout<<ANSI_COLOR_RED;
        cout << "*************************" << endl;
        cout << "        MAIN MENU        " << endl;
        cout << "*************************" << endl;
        cout<<ANSI_COLOR_GREEN;
        cout << "1. Start Game" << endl;
        cout << "2. Load Game" << endl;
        cout << "3. About The Game"<< endl;
        cout << "4. Instructions" << endl;
        cout << "5. Exit" << std::endl;
        cout << "*************************" <<endl;
        cout<<ANSI_COLOR_BLUE;
        cout << "Enter your choice: ";
        cout<<ANSI_COLOR_RESET;
        cin >> choice;
        switch (choice)
        {
            case 1:
                startGame(inv,clue);
                break;
            case 2:
            	system("cls");
            	int choiceLoad;
            	cout<<ANSI_COLOR_PURPLE;
            	cout << "=== Last Night in CS ===" << endl;
            	cout<<ANSI_COLOR_BLUE;
        		cout << "*************************" << endl;
        		cout << "        Load By Scene        " << endl;
        		cout << "*************************" << endl;
        		cout << "1. Opening" << endl;
        		cout << "2. Scene 1" << endl;
        		cout << "3. Scene 2" << endl;
        		cout << "4. Back" <<endl;
        		cout<<ANSI_COLOR_RED;
        		cout << "*************************" <<endl;
        		cout << "Take notes that if you\nskip certain part you will\nmiss out certain ITEMS and ClUES\nto Finish This Game!!!!"<<endl;
        		cout << "*************************" <<endl;
        		cout << "Enter your choice: ";
        		cin>>choiceLoad;
        		
        		switch(choiceLoad)
        		{
        			case 1:
        				startGame(inv,clue);
        				break;
        			case 2:
        				Scene(inv,clue);
        				break;
        			case 3:
        				Scene2(inv,clue);
        				break;
        			default:
        				system("cls");
                		cout << "Invalid choice. Please try again." << endl;
                		break;
				}
        		
                break;
            case 3:
            	system("cls");
                AboutUs();
                break;
            case 5:
            	system("cls");
                Instruction();
            case 4:
            	exit = true;
            	break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    }
    cout<<endl;
    
    //Display all inventory and clue after game finish
    cout<<"================================"<<endl;
    cout<<"Final Inventory and Clues"<<endl;
    cout<<ANSI_COLOR_GREEN;
    cout<<"Clue:"<<endl;
    cout<<ANSI_COLOR_RESET;
    clue.displayClues();
    cout<<ANSI_COLOR_GREEN;
    cout<<"Inventory:"<<endl;
    cout<<ANSI_COLOR_RESET;
    inv.displayInventory();
    cout<<"==============================="<<endl;
    
    cout << "Exiting the game. Goodbye!" << endl;

    return 0;
}
    







