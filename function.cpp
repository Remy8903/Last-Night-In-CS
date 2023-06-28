#include <iostream>
#include <iomanip>
#include<windows.h> 
#include <unistd.h>
#include "function.h"
#include "Inventory.h"
#include "clue.h"
using namespace std;


// ANSI escape code for red text color
#define ANSI_COLOR_RED "\033[31m"
// ANSI escape code to reset text color
#define ANSI_COLOR_RESET "\033[0m"
#define ANSI_COLOR_BLUE "\033[34m"
#define ANSI_COLOR_GREEN "\033[32m"
#define ANSI_COLOR_RESET "\033[0m"
#define ANSI_COLOR_GOLD "\033[38;5;220m"
#define ANSI_COLOR_PURPLE "\033[35m"


//tHIS FUNCTION WILL EXECUTED WHEN PROGRAM END 
void endProgram(int exitCode) {
    cout << ANSI_COLOR_RED << endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                      THE END                                        " << endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl;
    cout << "Take note that this game is a game of choices.\nYou need to play over and over until you get the correct answer or timeline.\nChoose your choices wisely." << endl;
    cout << "---------------------------------------------------------------------------------------------------------" << endl;
    cout << ANSI_COLOR_RESET << endl;

    cout << ANSI_COLOR_RESET;
    exit(exitCode);
}
void EndingDummy(){
	cout<<ANSI_COLOR_RED;
	cout << "---------------------------------------------------------------------------------------------------------" << endl;
	cout<<"                       YOURE ARE DEAD ,BECAUSE YOU CHOOSE TO DOING NOTHING                                 "<<endl;
	cout << "---------------------------------------------------------------------------------------------------------" << endl;
	cout<<ANSI_COLOR_RESET;
	endProgram(0);
}
void EndingSilly(){
    string text="You give up so early ,Finally you came back to the hostel and done the CPT113 assignment happily";
    cout<<text<<endl;
    endProgram(0);
}
void EndingSad(){
    string text="You get out sadly and you live happily ever after";
    endProgram(0);
}
void EndingHappy(){
    string text="You get out happily and you live happily ever after";
    endProgram(0);
}
void Scene2(Inventory inv , Clue clue){

//Scene 2
    string text="As they reach the door,they find it mysteriously unlocked,allowing them to burst out into the hallway.\nThe ghostly presence dissipates behind them,unable to cross the threshold.";
	string text2="Breathing heavily, Mark and Sarah stumble into the hallway, their hearts pounding with adrenaline.\nThey realize that the entire floor has transformed,with the once familiar corridor now twisted and distorted,as if they have entered a nightmarish realm.";
	string text3="Guided by their instincts, they push forward, navigating through the warped hallways.\nThe walls seem to shift and contort,creating a disorienting maze that defies logic.";
	string text4="Whispers echo through the twisted corridors, their voices laced with torment and despair.\nMark and Sarah cover their ears, trying to block out the haunting sounds that threaten to consume their sanity.\nAfter a while it's sound like a riddle is given.' ";
	string text5="They come across a series of cryptic symbols etched onto the walls, each one seemingly holding a clue to the mysteries of the school. With a sense of urgency, they decipher the symbols, piecing together a fragmented narrative of the school's dark past.";
 	string text6="A sudden gust of wind sweeps through the corridor, extinguishing their flashlight.\nLeft in utter darkness, they must rely on their instincts and memory to continue their treacherous journey.\nAs they grope their way forward, a flickering light in the distance catches their attention.\nWith cautious hope, they make their way towards it, the flickering growing brighter with each step.\nAs Mark and Sarah ascend the grand staircase, their footsteps echo through the towering hall. The weight of their journey hangs heavy in the air, but a glimmer of determination shines in their eyes.\nReaching the top of the staircase, Mark and Sarah step onto a landing bathed in a pale moonlight.\nBefore them lies a set of ornate double doors, adorned with intricate carvings and emitting a faint glow.";
 	string text7="The door ask for some phrases?";
	string text8="With a shared determination, Mark and Sarah push open the double doors, revealing a chamber shrouded in darkness.\nThe door closes behind them, sealing their fate within the heart of the school.With a shared determination,\nAs the final confrontation reaches its climax, the oppressive darkness is dispelled, revealing a ray of sunlight breaking through a long-covered window.\nThe malevolent presence dissipates, leaving behind a sense of relief and accomplishment.";
    string text9="Mark and Sarah, forever changed by their harrowing adventure, embrace each other, grateful for their survival.\nAs they walk hand in hand towards the school's exit, a sense of closure washes over them, knowing that they have faced their fears and emerged stronger";
 
 	cin.get();
 	system("cls");
	for (char c : text) 
    {
    	cout<<ANSI_COLOR_PURPLE;
        cout << c;
        usleep(50000);
    }

    cin.get();
    system("cls");

    for (char c : text2) 
    {
        cout << c;
        usleep(50000);
    }

    cin.get();
    system("cls");
	
    for (char c : text3) 
    {
        cout << c;
        usleep(50000);
    }

    cin.get();
    system("cls");

    for (char c : text4) 
    {
        cout << c;
        usleep(50000);
    }
    
    system("cls");
     
     string ridd="I speak without a mouth and hear without ears. I have no body, but I come alive with wind.What am I?";
     string ridd2="I have keys but no locks. I have space but no room. You can enter, but you can't go outside. What am I?";
	 string ridd3="I am taken from a mine, and shut up in a wooden case, from which I am never released, and yet I am used by almost every person. What am I?";
	 string riddans="CORRECT";
	 string ans;
	 int count=1;
	 int point=0;
     for (char c : ridd) {
        cout << c;
        usleep(50000);
		}
		cout<<"\n";
		getline(cin,ans);
		system("cls");
		while (count<=3)
		{
			if(ans == "echo"||ans =="ECHO")
			{
			point++;
			for (char c : riddans) {
        	cout << c;
        	usleep(50000);
			}
			system("cls");
			break;
			}
			else
			{
				cout<<"Try again:\nAns:";
				getline(cin,ans);
				if (count==3)
				{
				endProgram(0);
				}
				count++;
			}	
		}
		
		count=1;
		
		for (char c : ridd2) {
        cout << c;
        usleep(50000);
		}
		cout<<"\n";
		getline(cin,ans);
		system("cls");
		while (count<=3)
		{
			if(ans == "keyboard"||ans =="KEYBOARD")
			{
			point++;
			for (char c : riddans) {
        	cout << c;
        	usleep(50000);
			
			}
			system("cls");
			break;
			}
			else
			{
				cout<<"Try again:\nAns:";
				getline(cin,ans);
				if (count==3)
	     	{
			endProgram(0);
		    }
				count++;
				
			}	
		}
		
		
		
		count=1;
		
		for (char c : ridd3) {
        cout << c;
        usleep(50000);
		}
		cout<<"\n";
		getline(cin,ans);
		system("cls");
		while (count<=3)
		{
			if(ans == "pencil"||ans =="PENCIL")
			{
			point++;
			for (char c : riddans) {
        	cout << c;
        	usleep(50000);
			}
			system("cls");
			break;
			
			}
			else
			{
				cout<<"Try again:\nAns:";
				getline(cin,ans);
				if (count==3)
				{
			endProgram(0);
				}
				count++;
			}	
		}
		
		if(point == 3){
			string clue2="dead never let go their past";
			string cong="Clue 2/3 acquired";
			clue.appendClue("dead never let go their past ");
			 for (char c : clue2) 
   			 {
        	cout << c;
        	usleep(50000);
   			 }
   			 cin.get();
   			 system("cls");
   			 
   			 for (char c : cong) 
   			 {
        	cout << c;
        	usleep(50000);
   			 }
			}
			
			
		
	 system("cls");
		
		
    for (char c : text5) {
        cout << c;
        usleep(50000);
    }
    
    	system("cls");
    	string clue_3="Me and her decided to stay at the cozy cabin by the lake for the weekend.";
    	string clue_counter="Clue 3/3 acquired";
    	clue.appendClue("Me and her decided to stay at the cozy cabin by the lake for the weekend.");
    	for (char c : clue_3) {
        cout << c;
        usleep(50000);
    }
    	cin.get();
    	system("cls");
    	for (char c : clue_counter) {
        cout << c;
        usleep(50000);
    }
    	cin.get();
    	system("cls");
    
    string door="PUSH the door or GO AWAY";
    
    for (char c : door) {
        cout << c;
        usleep(50000);
    }
    	cout<<"\n";
    	getline(cin,ans);
    	
    	if(ans =="GO AWAY"||ans=="go away")
    	{
    		endProgram(0);
		}
		else if(ans == "PUSH"||ans =="push")
		{	}
    system("cls");

    for (char c : text6) {
    	
        cout << c;
        usleep(50000);
    }
     cin.get();
    system("cls");

	
		
		
    for (char c : text7) {
        cout << c;
        usleep(50000);
    }
    
    cout<<"\n";
    
    	string finalans;
    	string finaldialogue0="In enigmatic script,my secrets unfold\nUnveil the truth,let your perception climb,\nThe word of six, holds the key to sublime.\n";
		string finaldialogue1="Please enter the final phrase";
		string finaldialogue2="Try again:";
		string finaldialogue3="Correct";
		int counter_final=1;
		
		for (char c : finaldialogue0) {
        cout << c;
        usleep(50000);
    }
		
		clue.displayClues();
		
		for (char c : finaldialogue1) {
        cout << c;
        usleep(50000);
    }
    	cout<<"\n";
    	getline(cin,finalans);
    	
		while (counter_final<3)
		{
		
		counter_final++;
		
			if(finalans =="the past stay" || finalans =="THE PAST STAY")
			{
				for (char c : finaldialogue2) {
        	cout << c;
       		 usleep(500);
    		}
				counter_final=3;
			}
			else if(finalans !="the past stay" || finalans !="THE PAST STAY")
			{
				for (char c : finaldialogue2) {
       		 	cout << c;
        		usleep(50000);
    }
    			getline(cin,finalans);
			}
		}
		
		if(counter_final !=3)
		{
			EndingSad();
		}
     
    system("cls");

    for (char c : text8) {
        cout << c;
        usleep(50000);
    }
    	cout<<"\n";
    	EndingHappy();

}
void Scene(Inventory inv , Clue clue){
	
	
    //scene1
    string text="\033[31mAs Mark and Sarah walk deeper into the quiet corridors,\nsubtle anomalies catch their attention?a flickering light,\na misplaced object and a chilling breeze that seems out of place";
	string text2="Mark and Sarah cautiously enter an empty classroom on the upper floor of the school.\nThe flickering fluorescent lights above cast eerie shadows across the room,\ncreating a sense of unease.The room is adorned with a dusty pile of METAL ,abandoned STATIONARY.\n they look AROUND and a blackboard covered in faded chalk markings with the word \"HE IS HERE RUN!!!\"" ;
	string text3="As the whispers grew louder and more distinct,Mark and Sarah exchanged concerned glances,their hearts pounding in their chests.\nThe eerie atmosphere weighed heavily on them and they knew they had to act swiftly.\nSuddenly,the classroom door slammed shut behind them,sealing their fate within its confines.\nPanic surged through their veins as they rushed towards the door,desperately attempting to open it,\nbut it remained stubbornly sealed.";
	string text4="A cold breeze swept through the room,extinguishing the flickering lights one by one.\nDarkness enveloped Mark and Sarah,their only source of illumination being the faint glow of Mark's flashlight.\They had to make a choice and the voice spoke directly to them,\nurging them to take action.";
	string text5 = "In a corner of the room, a ghostly figure materializes.\nIt's haunting gaze fixes upon Mark and Sarah, its voice dripping with malice.\nIt warns them of the school's dark history and the tormented spirits that still linger within its walls.\n\033[32mBEAT\033[0m the ghost or \033[32mDO NOTHING\033[0m";
	//string text5="In a corner of the room,a ghostly figure materializes.\nIt's haunting gaze fixes upon Mark and Sarah,its voice dripping with malice.\nIt warns them of the school's dark history and the tormented spirits that still linger within its walls.\n BEAT the ghost or do NOTHING\033[0m";
 	string ans;
 	
 	//flag for choices
 	int flag=4;//flag yes or no
 	int flag_2=4;//flag choices
 	
 for(char c : text) 
    {
        cout << c;
        usleep(50000);
    }

	cin.get();
    system("cls");
//
    for (char c : text2) 
    {
        cout << c;
        usleep(50000);
    }
    
    cout<<"\n\n";
    
    string subscene = "Grab Something or look around?";
    
    cout<<"Choose what to do next:"<<endl;
    cout<<ANSI_COLOR_GREEN;
    cout<<"METAL"<<endl;
    cout<<"STATIONARY"<<endl;
    cout<<"AROUND"<<endl;
    cout<<endl;
    cout<<ANSI_COLOR_RESET;
    
    for (char c : subscene) 
    {
        cout << c;
        usleep(50000);
    }
    cout<<"\n";
    getline(cin,ans);
    system("cls");
    
    while (flag_2 == 4)
	{
    	if (ans == "METAL")
    	{
    		flag_2=0;
    		inv.appendItem("Broken Metal");
    		string ansmetal1="Broken Metal acquired!!!";
    		string ansmetal2="Do you want to look around? (YES/NO)";
    		string ansmetal3="Enter again.";
    		
    			for(char c : ansmetal1) 
    			{
    				cout<<ANSI_COLOR_GREEN;
       				cout << c;
       				cout<<ANSI_COLOR_RESET;
       				 usleep(50000);
    			}
    			
    			 cin.get();
   				 system("cls");
   				 
    			for(char c : ansmetal2) 
    			{
       				 cout << c;
       				 usleep(50000);
    			}
    			cout<<"\n";
    			//cin.ignore();
    			getline(cin,ans);
    
    	while(flag == 4)
		{
    		
    		if (ans == "YES")
    		{
    			
    			flag = 0;
			}
			
			else if (ans == "NO")
			{
					
				flag = 1;
			}
			
			else
			{
				  for (char c : ansmetal3) 
  	 			 {
       			 cout << c;
       			 usleep(50000);
  			  	}

				getline(cin,ans);
			}
		}
	}	
		else if(ans == "STATIONARY")
		{
		    flag_2=0;
    		inv.appendItem("Scissor");
    		string anstat1="Scissor acquired!!!";
    		string anstat2="Do you want to look around? (YES/NO)";
    		string anstat3="Enter again.";
    			
    			
    			for(char c : anstat1) 
    			{
    				cout<<ANSI_COLOR_GREEN;
       				 cout << c;
       				cout<<ANSI_COLOR_RESET;
       				 usleep(50000);
    			}
    			
    			 cin.get();
   				 system("cls");
   				
   				
    			for(char c : anstat2) 
    			{
    				cout<<ANSI_COLOR_GREEN;
       				 cout << c;
       				 usleep(50000);
       				 cout<<ANSI_COLOR_RESET;
    			}
    			cout<<"\n";
    			cin.ignore();
    			getline(cin,ans);
    
    	while(flag == 4)
		{
    		if (ans == "YES")
    		{
    			
    			flag = 0;
			}
			
			else if (ans == "NO")
			{
					
				flag = 1;
			}
			
			else
			{
				  for (char c : anstat3) 
  	 			 {
  	 			cout<<ANSI_COLOR_RED;
       			 cout << c;
       			 cout<<ANSI_COLOR_RESET;
       			 usleep(500);
  			  	}

				getline(cin,ans);
			}
		}
		}
		else if(ans == "AROUND")
		{
			flag_2=0;
			string clue1="Ouh what this?";
			string clue2="Learned your mistakes and embrace the present, and forge ahead.(+1 CLUE)";
			string clue3="Clue 1/3 acquired";
			for (char c : clue1) 
  	 		 {
       			 cout << c;
       			 usleep(50000);
  			  }
  			  
  			  cin.get();
    		  system("cls");
    		  
  			  for (char c : clue2) 
  	 		 {
  	 		 	cout<<ANSI_COLOR_GOLD;
       			 cout << c;
       			 cout<<ANSI_COLOR_RESET;
       			 usleep(50000);
  			  }
  			  
  			   cin.get();
    		  system("cls");
  			  
  			  for (char c : clue3) 
  	 		 {
  	 		 	cout<<ANSI_COLOR_GREEN;
       			 cout << c;
       			 cout<<ANSI_COLOR_RESET;
       			 usleep(50000);
  			  }
  			  flag = 2;
			clue.appendClue("Learned your mistakes and embrace the present, and forge ahead.");	
			cin.get();
		}
			else
			{
			
			string clue_else =" What is it again?";
			flag_2=4;
				for(char c : clue_else) 
    			{
    				cout<<ANSI_COLOR_RED;
       				 cout << c;
       				 usleep(1000000);
    			}
			getline(cin,ans);
			}
	}
			
			if (flag == 0)
			{
				
			string clue1="Ouh what this?";
			string clue2="Learned your mistakes and embrace the present, and forge ahead.(+1 CLUE)";
			//string clue2="Learned your mistakes and embrace the present, and forge ahead.";
			string clue3="Clue 1/3 acquired";
			for (char c : clue1) 
  	 		 {
  	 		 	cout<<ANSI_COLOR_RED;
       			 cout << c;
       			cout<<ANSI_COLOR_RESET;
       			 usleep(50000);
  			  }
  			  
  			  cin.get();
    		  system("cls");
    		  
  			  for (char c : clue2) 
  	 		 {
  	 		 	cout<<ANSI_COLOR_GOLD;
       			 cout << c;
       			 cout<<ANSI_COLOR_RESET;
       			 usleep(50000);
  			  }
  			  
  			   cin.get();
    		  system("cls");
  			  
  			  for (char c : clue3) 
  	 		 {
  	 		 	cout<<ANSI_COLOR_GREEN;
       			 cout << c;
       			 cout<<ANSI_COLOR_RESET;
       			 usleep(500);
  			  }
			clue.appendClue("Learned your mistakes and embrace the present, and forge ahead.");	
			cin.get();
			}
			
    
    system("cls");
	
	//display text 3
    for (char c : text3) 
    {
    	cout<<ANSI_COLOR_RED;
        cout << c;
        usleep(50000);
    }

    cin.get();
    system("cls");

	//display text4
    for (char c : text4)
     {
        cout << c;
        usleep(50000);
    }
    
    cin.get();
    system("cls");
    // Ddisplay text 5
    for (char c : text5) 
    {
        cout << c;
        usleep(50000);
    }
    
    cout<<"\n\n";
    //cin.ignore();
    //cout<<"test"<<endl;
    getline(cin,ans);
	string choice1="With each swing of their weapons, Mark and Sarah manage to weaken the spirit, causing it to waver and fade momentarily. They seize this opportunity to make a daring escape towards the classroom door";
	string choice2="As they stand in fear, s they stood there frozen in fear.multiple shadowlike hand came out from out of nowhere and grab every part of their body tearing them into pieces";
	
	/*if(ans == "BEAT")
	{
		system("cls");
		for (char c : choice1) 
    	{
        cout << c;
        usleep(500);
   		 }	
    	Scene2(inv,clue);
	}
	else
	if(ans == "DO NOTHING"){
		for (char c : choice2) 
    	{
        cout << c;
        usleep(500);
    	}
    	EndingDummy();
    else{
    	cout<<"Please enter the correct choices";
	}*/
	bool validChoice = false;

	while (!validChoice) {
    if (ans == "BEAT") {
        system("cls");
        for (char c : choice1) {
            cout << c;
            usleep(50000);
        }
        Scene2(inv, clue);
        validChoice = true;
    }
    else if (ans == "DO NOTHING") {
		
        for (char c : choice2) {
        	cout<<ANSI_COLOR_RED;
            cout << c;
            cout<<ANSI_COLOR_RESET;
            usleep(50000);
        }
        cout<<endl;
        EndingDummy();
        validChoice = true;
    }
    else {
        cout << "Please enter the correct choices: ";
        getline(cin, ans);
    }
}


}
void Opening(Inventory inv , Clue clue){

    //OPENING
    string text("A moonlit night casts an ethereal glow over the familiar surroundings of an active school campus.\nThe sound of crickets chirping and a gentle breeze rustling through the trees adds a sense of calmness to the scene.\nThey exchange encouraging smiles before stepping through the school gates and directly goes up to the highest floor where the view is known to the student to be beautiful and magnificent spot to spend with your loved one");
    string text2("As they enter the school premises, the cool breeze of the night is felt by them.\nThey could tell they are more intimate during the wait in the elevator.\nBut somehow Mark has a disturbing feeling in his tummy.\n");
    string text3("Talking by the stairs, a thousand words have been conveyed,the more they talk the more they feel that they are lost in time, not knowing what is waiting for them.\nThe couple's curiosity suddenly peaks as they catch glimpses of a shadow from the opposite stairs.");
    string text4("Mark and Sarah wander to the other side of the school,\ndiscovering a narrow hallway that was never there before.\nThey exchange a curious glance, sensing there is more to explore beyond the bustling common areas.");
    int flag;
    string ans;
	
	//display text 1
	cin.ignore();
    for (char c : text) 
    {
    	cout<<ANSI_COLOR_BLUE;
        cout << c;
        usleep(50000);
        //cout<<ANSI_COLOR_RESET;
        
    }
    cin.get();
    system ("cls");

    for (char c : text2)
     {
        cout << c;
        usleep(50000);
    }

    cin.get();
    system ("cls");

    for (char c : text3)
     {
        cout << c;
        usleep(50000);
    }

    cin.get();
    system ("cls");

    for (char c : text4)
    {
        cout << c;
        usleep(50000);
    }

    //cout << "\nContinue to EXPLORE or NAH?: ";
    cout << "\nContinue to " << ANSI_COLOR_GREEN << "EXPLORE" << ANSI_COLOR_RESET << " or " << ANSI_COLOR_GREEN << "NAH" << ANSI_COLOR_RESET << "?: ";

    cin >> ans;

    while (!flag) 
    {
        if (ans == "EXPLORE")
            flag = 1;
        else if (ans == "NAH")
            flag = 2;
        else
        {
        	cout<<"What is it again?\n";
        	cin>>ans;
		}
    }
        system ("cls");

        if(flag==1){
            Scene(inv,clue);
        }
        else if (flag==2)
            EndingSilly();
}
void startGame(Inventory inv, Clue clue){
	system("cls");
	Opening(inv, clue);
}
void AboutUs() {
	cout << "***************************************************" << std::endl;
    cout << "                      About The Game                     " << std::endl;
    cout << "***************************************************" << std::endl;
	cout << "Welcome to the world of 'Last Night in CS'," << endl;
    cout << "a text-based horror game that will send chills" << endl;
    cout << "down your spine and keep you on the edge of your seat." << endl;
    cout << "----------------------------------------" << endl;
	cout << "The game is designed to evoke a sense of dread," << endl;
    cout << "Your mission is to navigate through a nightmarish" << endl;
    cout << "world, solving riddles, collecting clues" << endl;
    cout << "and making strategic deicision to escape this" << endl;
	cout << "sinister place." << endl;
    cout << "Your choices will determine your fate." << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;
	cout << "***************************************************" << std::endl;
    cout << "                      About Us                     " << std::endl;
    cout << "***************************************************" << std::endl;
    cout << "This game has been created by us for Hackathon 2 - CPT113." << endl;
    cout << "Group Members:" << endl;
    cout << "1. DANISH RAIMI" << endl;
    cout << "2. MUHAMMAD FIRDAUS" << endl;
    cout << "3. MUHAMMAD FARID" << endl;
    cout << "We hope you enjoy this game. Thank you!" << endl;
}

void Instruction() {
	cout << "***************************************************" << std::endl;
    cout << "                    Instructions                   " << std::endl;
    cout << "***************************************************" << std::endl;
    cout << "1. Use the provided commands to interact" << endl;
    cout << "   with the game world and characters." << endl;
    cout << "2. Collect clues scattered throughout the" << endl;
    cout << "   nightmarish world to get out of it." << endl;
    cout << "3. Pay attention to the details and use the" << endl;
    cout << "   collected clues to progress in the game." << endl;
    cout << "4. Make choices wisely, as they may impact" << endl;
    cout << "   the outcome of your journey." << endl;
    cout << "5. Your goal is to survive the horrors of" << endl;
    cout << "   the nightmarish world and get back to your world." << endl;
    cout << "6. Good luck, and may your instincts guide you." << endl;
    
}

