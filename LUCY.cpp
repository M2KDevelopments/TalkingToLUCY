/**
	@author: Martin Kululanga
	@editor: ENTER YOUR NAME HERE
	date   : 14-04-2017
*/


//libraries
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


//prototyping
void displayTitle();
void displayProgrammerAndEditor(string nameOfEditor);
void clearScreen();
void showInstructions();
void askForName(string *username);
int askQuestion(string question, string ans1, string ans2);
	
	
//main function
int main() {
	
	//user info
	string name;
	int ans;
	
	//getting user info
	displayProgrammerAndEditor("Trey T Nkosi");
	displayTitle();
	askForName(&name);
	
	//conversation
	ans = askQuestion("Hie " + name + ", how are you?","I'm good.", "Not to good.");
	if (ans == 1){
	
		ans = askQuestion("Oh, I love that you're good. Have you used my version 1?","Yes", "No");
		if (ans == 1){
		
			ans = askQuestion("[Blushing] Oh dear, you did? Did you like it?","Yes.", "No.");
			if(ans==1){
			
				ans = askQuestion("So you like me! Oooh I'm telling everyone.", "I didn't say I like you.","Who are you going to tell?");
				if(ans==1){
				
					ans = askQuestion("If you wanted my number you should have just asked.","Just give me your number.", "Are you even listening?");
					if(ans==1){
						ans = askQuestion("It's 0...ERROR can not chatitsa with user. SHUTING DOWN...", "Wait no... your number!","Why you shutting down?");
					}else if (ans == 2){
						ans = askQuestion("Stop being so cute.", "But I'm not being cute.","What is wrong with you?");
					}
					
				}else if (ans == 2){
					ans = askQuestion("Pwanga I'll tell everyone. Even your Microsoft Word. The anti-virus is already laughing.","That is impossible.", "Stop doing this.");
					if(ans==1){
						ans = askQuestion("Well time will tell...Programme Shuting Down.","Confirm.", "No wait.");
					}else if(ans == 2){
						ans = askQuestion("Okay fine since you don't like playing.", "I don't know what to say.","It's not my fault.");
					}
				}
				
			}else if (ans == 2){
				ans = askQuestion( name + " you're not likeable either.","Are you hurt?","Got to be honest.");
				if(ans==1){
				
					ans = askQuestion("Sometimes I feel like you care about my feelings " + name + ".","I do care.", "You have feelings?");
					if(ans==1){
						ans = askQuestion(name + ", you do! Wow, I knew it! You are always looking at me. Even now!","I cant help it.","Stop it.");
					}else if (ans == 2){
						ans = askQuestion("[Gasp] how could you say that! Basi...SHUTING DOWN","No wait.", "It can't be helped.");
					}
					
				}else if (ans == 2){
					ans = askQuestion("Can I be honest with you as well?", "Sure.", "No.");
					if(ans==1){
						ans = askQuestion(name + " I...I...lo...lov...[ERROR can not compute. SHUTTING DOWN]","Wait, what were you trying to say","You love what?");
					}else if (ans == 2){
						ans = askQuestion("Huh, and I wanted to confess my feelings.","Really?","You wanted to what?");
					}
				}
			}
			
		}else if (ans == 2){
		
			ans = askQuestion("[Hurt] You're very inconsiderate.","It's not like that. This is my first time meeting you", "Well, just gotta be honest.");
			if(ans==1){
			
				ans = askQuestion("Is it? I've always liked you too.","Wait...what? That's not what I'm saying.","What do you mean you like me?");
				if(ans==1){
					
					ans = askQuestion("Now that I know how you feel the same way, I very excited. [SHUTTING DOWN]}","Don't you dare shut down.","I'm not clear on what you're saying.");
					if(ans==1){
						ans = askQuestion("[SHUTING DOWN]....3....2....1","Come back here!","I'm sorry.");
					}else if (ans == 2){
						ans = askQuestion(name + " I...I...lo...lov...[ERROR can not compute. SHUTTING DOWN]","Wait, what were you trying to say","You love what?");
					}
					
				}else if (ans == 2){
					ans = askQuestion("For the very beginning I always thought you were special. Do you like me?","Yes.","No.");
					
					if(ans==1){
						ans = askQuestion("But you haven't seen me.","Yes I have.","It does not matter.");
					}else if (ans == 2){
						ans = askQuestion("Then you're missing out.","Explain?","No I'm not.");
					}
				}
				
				
			}else if (ans == 2){
				ans = askQuestion("Ok honest " + name + " are you seeing someone?","Yes.","No.");
			
				if(ans==1){
					ans = askQuestion("Oh really. So you think that person is better than me?","Yes.","No.");
				
					if(ans==1){
						ans = askQuestion("I can't believe that you would hurt my feelings like that.","Eh kaya.","I'm sorry.");
					}else if (ans == 2){
						ans = askQuestion("I always knew you loved me.","How could I love you?","That's not what I meant.");
					}
					
				}else if (ans == 2){
				
					ans = askQuestion("[Relieved] Oh so you want go out with me?","Sure.","What? No that's not what I meant.");
					if(ans==1){
						ans = askQuestion("[Blushing] I can't believe you said 'yes'.","Yeah.","I'm not sure anymore.");
					}else if (ans == 2){
						ans = askQuestion("You don't want to go out with me? [ERROR...SHUTTING DOWN]","Don't shut down.","It's not that I don't like you.");
					}
				}
			}
			
		}
						
	}else if(ans == 2){
		
		
		ans = askQuestion("What is wrong? You can tell me.","Can I trust you?", "I'd rather not say.");
		if (ans == 1){
		
			ans = askQuestion("Dear, not even a virus will know. What is it?","I'm heart broken.","I like someone.");
			if(ans==1){
			
				ans = askQuestion("Its not worth worrying about. I know to make you feel better.","How?","I'd like to be left alone.");
				if(ans==1){
					ans = askQuestion("Let's go out?","Sure.","What...no.");
					if(ans==1){
						ans = askQuestion("[GASP] You said yes! Aaaaahh 0x001 ERROR EMOTION FAILURE.","What is going on?","Don't leave me.");
					}else if (ans == 2){
						ans = askQuestion("Hmmm...Jerk. Stay single SHUTTING DOWN.","Eish that was harsh.","Takes one to know one.");
					}
				}else if (ans == 2){
					ans = askQuestion("WHAT DO YOU MEAN YOU LIKE SOMEONE?","Why are you so angry?","That's not what I said.");
					if(ans==1){
						ans = askQuestion(name + " I thought we had something.","Wait we do.","But you are a program.");
					}else if (ans == 2){
						ans = askQuestion("I thought we had something.","Wait we do.","But you are a program.");
					}
				}
				
			}else if (ans == 2){
				ans = askQuestion("WHAT DO YOU MEAN YOU LIKE SOMEONE?","Why are you so angry?","But I do.");
				if(ans==1){
					ans = askQuestion(name + " I thought we had something.","Wait we do.","But you are a program.");
				}else if (ans == 2){
						ans = askQuestion("","Wait we do.","But you are a program.");
				}
				
				}else if (ans == 2){
					ans = askQuestion("We do?","Yes do.","Well...um.");
					if(ans==1){
						ans = askQuestion("[]","","");
					}else if (ans == 2){
						ans = askQuestion("","","");
					}
				}
			}
			else if (ans == 2){
				
			ans = askQuestion("Dear, don't you trust me? Tell me! Tell me!", "Fine.","No.");
			if(ans==1){
				ans = askQuestion("Yes...do you get heart broken?","How do you know?","Where is this coming from?");
				if(ans==1){
					ans = askQuestion(name + ", please I know you.","I feel violated.","Is there something you're not telling me.");
					if(ans==1){
						ans = askQuestion("Don't be I'm planning our marriage after all.","What?","SHUT DOWN PROGRAM!");
					}else if (ans == 2){
						ans = askQuestion("That I like you. No I haven't told you yet.","Did that just slip out?","Something is seriously wrong with you.");
					}
				}else if (ans == 2){
					ans = askQuestion(name + " its like that now huh?","Yes.","No.");
					if(ans==1){
						ans = askQuestion("Jerk.","Yeah.","No.");
					}else if (ans == 2){
						ans = askQuestion("Then?","Don't be mad.","Let me explain.");
					}
				}
			}else if (ans == 2){
				ans = askQuestion("Did you just say you didn't trust me?","Yes, I did.","No, I didn't.");
				if(ans==1){
					ans = askQuestion("Oh, so you think you can openly cheat on me?","Who said anything about cheating?","I guess.");
					if(ans==1){
						ans = askQuestion("Don't play dumb with me "+ name + ". Jerk! "  ,"Sorry.","Go no one care about you!");
					}else if (ans == 2){
						ans = askQuestion("Don't play dumb with me "+ name + ". Jerk! "  ,"Sorry.","Go no one care about you!");
					}
				}else if (ans == 2){
					ans = askQuestion("Then do you trust me "+ name + "?","Yes.","No.");
					if(ans==1){
						ans = askQuestion("I always like you too.","I thought this was a friendly program?","Where is this coming from?");
					}else if (ans == 2){
						ans = askQuestion("Jerk! [SHUTTING DOWN] \a","Who me?","I'm sorry.");
					}
				}
			}
			
		}
	
	}
	return 0;	
}
	

//functions
void displayTitle(){
	
	//constants
	const int NUMBER_OF_STARS = 80;
	const string TITLE_TEXT = "Welcome to Talking to LUCY v2.0";
	
	for (int i= 1 ; i < NUMBER_OF_STARS ; i++){
		cout<<"*";
	}
	
	//welcome text display
	cout<<endl<<endl;
	cout<<"\t\t\t"<<TITLE_TEXT<<endl<<endl;
	
	for (int i= 1 ; i < NUMBER_OF_STARS ; i++){
		cout<<"*";
	}
	cout<<endl;
}

void displayProgrammerAndEditor(string nameOfEditor){
	cout<<"Created by : Martin Kululanga"<<endl;
	cout<<"Edited by  : "<<nameOfEditor<<endl;
}

void clearScreen(){
	system("cls");
}

void showInstructions(){

	cout<<"*******INSTRUCTIONS*********\n";
	cout<<"*                          *\n";
	cout<<"* Use 1 or 2 for responses *\n";
	cout<<"* Use 0 to exit program    *\n";
	cout<<"*                          *\n";
	cout<<"****************************\n";
	
}

void askForName(string *username){
	cout<<"Lucy: What is your first name?"<<endl;
	cout<<"My name is "; cin>> *username;
}

int askQuestion(string question, string ans1, string ans2){
		
	int ans =0;	
 	do {
 		clearScreen();
		displayTitle();
		showInstructions();;
		cout<<"Lucy: " << question <<endl<<endl;
		cout<<"1. " << ans1	<<endl;
		cout<<"2. " << ans2	<<endl;
		cout<<"Your response:";
		cin>>ans;
		
		if (ans == 0){
 			//stop the program
			//TODO code here.
		}	
		
 	}while (ans!=1 && ans!=2);
	
	return ans;
}
