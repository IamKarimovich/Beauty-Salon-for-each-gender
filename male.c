#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>

// for using gotoxy tutorial
void gotoxy(short x,short y)
{
	COORD pos = { x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
// Main manu contents for using eack gender
void clientMenuContent(){
	printf("\n\n\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n\t\t\t\t\t\t%c    CLIENT OPERATIONS    %c\n",186,186);
	printf("\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	
	printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	gotoxy(48,19);
	printf("%c 1.Registration          %c",186,186);
	gotoxy(48,20);
	printf("%c 2.List client           %c",186,186);
	gotoxy(48,21);
	printf("%c 3.Edit client's info    %c",186,186);
	gotoxy(48,22);
	printf("%c 4.Delete client         %c",186,186);
	gotoxy(48,23);
	printf("%c 5.Client search         %c",186,186);
	gotoxy(48,24);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	gotoxy(48,25);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	gotoxy(48,27);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	gotoxy(48,26);
	printf("%c Select one statement:   %c",186,186);
	gotoxy(71,26);
};
//listing header for using everywhere. 
void listHeader(){
		gotoxy(1,16);
		printf("No.");
		gotoxy(6,16);
		printf("Full name");
		gotoxy(25,16);	
		printf("Address");
		gotoxy(42,16);
		printf("E-mail");
		gotoxy(67,16);
		printf("Phone number");
		gotoxy(85,16);
		printf("Service name");
		gotoxy(100,16);
		printf("Name of stylist\n");
		printf("================================================================================================================\n");
};

void staffHeader()
{
					gotoxy(1,15);
					printf("Full name");
					gotoxy(26,15);
					printf("Address");
					gotoxy(46,15);	
					printf("E-mail");
					gotoxy(80,15);
					printf("Phone number");
					gotoxy(98,15);
					printf("Field");
					gotoxy(0,16);
					printf("========================================================================================================================\n");
}
// variables about client.
struct client
{
	char name[20];
	char secondName[20];
	char adress[30];
	char service[30];
	char number[30];
	char email[30];
	char stylistName[30];
};
struct client c;

void welcome_screen(){
	printf("\n\n\n\n\n\t\t\t  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\t\t\t  -\t\t\t\t\t\t\t     -\n");
	printf("\t\t\t  =\t\t\t\t\t\t\t     =\n");
	printf("\t\t\t  -\t\tWelcome to Beauty center\t\t     -\n");
	printf("\t\t\t  =\t\t\t\t\t\t\t     =\n");
	printf("\t\t\t  -\t\t\t\t\t\t\t     -\n");
	printf("\t\t\t  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n\n");
	
	printf("\n\t\t\t\t   <<<--- USE ANY KEY FOR CONTINUE --->>>");
	
	getch();	
};
//////////////////////////////////////////////////
void headerWomen(){
	printf("\n\n\n\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n\n");
	printf("\t\t\t\t\t  ++++++     ++     ++   ++++++++++++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++   ++   ++   ++\n");
	printf("\t\t\t\t\t++           ++     ++        ++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++        ++\n");
	printf("\t\t\t\t\t  ++++++      +++++++         ++\n");
	printf("									For Women\n");
	printf("\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n");
};

void headerMan(){
	printf("\n\n\n\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n\n");
	printf("\t\t\t\t\t  ++++++     ++     ++   ++++++++++++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++   ++   ++   ++\n");
	printf("\t\t\t\t\t++           ++     ++        ++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++        ++\n");
	printf("\t\t\t\t\t  ++++++      +++++++         ++\n");
	printf("									For Men\n");
	printf("\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n");
};

void header(){
	printf("\n\n\n\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n\n");
	printf("\t\t\t\t\t  ++++++     ++     ++   ++++++++++++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++   ++   ++   ++\n");
	printf("\t\t\t\t\t++           ++     ++        ++\n");
	printf("\t\t\t\t\t+++    +++   ++     ++        ++\n");
	printf("\t\t\t\t\t  ++++++      +++++++         ++\n\n");
	printf("\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++\n");
};

								
void main_menu(){
	
	system("cls");
	
	headerWomen();
		
	printf("\n\n\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n\t\t\t\t\t\t%c    MAIN MENU    %c\n",186,186);
	printf("\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	
	printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n\t\t\t\t\t\t%c 1.Salon Details %c\n",186,186);
	printf("\t\t\t\t\t\t%c 2.Clients 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c 3.Cost info 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c 4.Staff         %c\n",186,186);
	printf("\t\t\t\t\t\t%c 5.Exit 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	   
	int choosing;
	
	printf("\n\n \t\t\t\t\t\tSelect operation:");
	scanf("%d",&choosing);

	switch(choosing)
	{	
		case 1:
			details();
			break;
		case 2:
			clients();
			break;
		case 3:
			costInfo();
			break;
		case 4:
			staff();
			break;
		case 5:
			ex_it();
			break;
		default:
			printf("t\t\t\tWrong select...\n\n");
	}
};
void details(){
	
	system("cls");
	header();
	gotoxy(25,15);
	printf("Salon Name: ");
	gotoxy(25,17);
	printf("Address: ");
	gotoxy(25,22);
	printf("City: ");
	gotoxy(25,24);
	printf("E-mail address: ");
	gotoxy(25,26);
	printf("Telephone Number: ");
	
	////////////////////////////////
	
	gotoxy(55,15);
	printf("|            CUT beauty salon for All");
	gotoxy(55,16);
	printf("|");
	gotoxy(55,17);
	printf("|            Opposite to Khazar university");
	gotoxy(55,18);
	printf("|            Near to 28 May metro");
	gotoxy(55,19);
	printf("|            Next to Nariman Narimanov m.");
	gotoxy(55,20);
	printf("|");
	gotoxy(55,21);
	printf("|");
	gotoxy(55,22);
	printf("|            Baku city");
	gotoxy(55,23);
	printf("|");
	gotoxy(55,24);
	printf("|            CUT.FOR.ALL@gmail.com");
	gotoxy(55,25);
	printf("|");
	gotoxy(55,26);
	printf("|            (+994 12) 421 10 93");
	gotoxy(55,27);
	printf("|            (+994 12) 421 79 16");
	gotoxy(55,28);
	printf("|            (+994 12) 421 63 35");
	
	getch();
	main_menu();
	
};
// information about prices of services
void costInfo(){	
	system("cls");//remove everything from screen
	header();
	
	int choose1,choose2;
	
	printf("\n\t\t\t\t\t\t1.Hair");

	printf("\n\t\t\t\t\t\t2.Skin");

	printf("\n\t\t\t\t\t\t3.Nail");

	printf("\n\t\t\t\t\t\t4.Piercing");

paying2:
	printf("\n\n\t\t\t\t\t\tSelect one service: ");
	scanf("%d",&(choose1));
paying:	
	switch(choose1) //switch case for service name
	{
		case 1:			
			printf("\n\t\t\t\t\t\t1.Cut\n\t\t\t\t\t2.Paint\n\t\t\t\t\t3.Hair care");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));			
			switch(choose2) //switch case for prices
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 20 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 50 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 80 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto paying;
					break;
			}
			break;
		case 2:
			printf("\n\t\t\t\t\t\t1.Face mask\n\t\t\t\t\t\t2.Against dry skin\n\t\t\t\t\t\t3.Monthly care");
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));		
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 50 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 100 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 60 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto paying;
					break;
			}
			break;
		case 3:			
			printf("\n\t\t\t\t\t\t1.Nail design\n\t\t\t\t\t\t2.Manicures\n\t\t\t\t\t\t3.Pedicures");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));
			
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 30 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 29.90 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 39.99 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto paying;
					break;
			}
			break;
		case 4:			
			printf("\n\t\t\t\t\t\t1.Facial piercings\n\t\t\t\t\t\t2.Ear piercings\n\t\t\t\t\t\t3.Tongue piercings");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));
			
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 35.99 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 49.99 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 54.99 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto paying;
					break;
			}
			break;
		default:
			printf("\n\n\t\t\t\t\t\tWrong input\n");
			goto paying2;
			break;
	}	
	getch();// to get char variables
	main_menu();	
};
void staff(){
	
	int chs,chs2;
	
	system("cls");
	header();
	
	gotoxy(50,14);
	printf("1.Hair");
	gotoxy(50,15);
	printf("2.Skin");
	gotoxy(50,16);
	printf("3.Nail");
	gotoxy(50,17);
	printf("4.Piercing");
	
select:	
	printf("\n\n  \t\t\t\t\t\tSelect: ");
	scanf("%d",&chs);
	
choose:
	switch(chs)//switch case for Services
	{
		case 1:
			system("cls");
			header();
			
			printf("\n\n  \n\t\t\t\t\t\t1.Gulnara\n  \n\t\t\t\t\t\t2.Nurana\n  \n\t\t\t\t\t\t3.Khanim\n");
			printf("\n  \n\t\t\t\t\t\tchoose: ");
			scanf("%d",&chs2);
			
			switch(chs2) //switch case for Staff informations
			{
				case 1:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Gulnara ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Gulnara Ahmadli");
					gotoxy(26,17);
					printf("Nizami ray. No 32");
					gotoxy(46,17);
					printf("Ahmadli.Gulnara2022@beauty.org");
					gotoxy(80,17);
					printf("055-978-56-43");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Nurana ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Nurana Mammadova");
					gotoxy(26,17);
					printf("Nasimi st. No 32");
					gotoxy(46,17);
					printf("Ahmadli.Gulnara@beauty.org");
					gotoxy(80,17);
					printf("077-978-55-67");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();	
					break;
				case 3: 
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Khanim ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Khanim Mammadli");
					gotoxy(26,17);
					printf("Suraxani dist. ");
					gotoxy(46,17);
					printf("Khanim.Mammad2022@beauty.org");
					gotoxy(80,17);
					printf("070-876-45-23");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n\t  \t\t\t\tWrong input!");
					getch();
					goto choose;
					break;
			}
			break;
		case 2: 
			system("cls");
			header();
			printf("\n  \n\t\t\t\t\t\t1.Humay\n  \n\t\t\t\t\t\t2.Shalala\n  \n\t\t\t\t\t\t3.Saida\n");
			printf("\n  \n\t\t\t\t\t\tchoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Humay ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Humay Abbasli");
					gotoxy(26,17);
					printf("Sheyx Shamil str.");
					gotoxy(46,17);
					printf("Abbasli.Humay2022@beauty.org");
					gotoxy(80,17);
					printf("055-456-51-22");
					gotoxy(98,17);
					printf("All works on skin\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Shalala ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Shalala Aghazadeh");
					gotoxy(26,17);
					printf("Lutfizadeh str.");
					gotoxy(46,17);
					printf("Shalala.Ahmed2022@beauty.org");
					gotoxy(80,17);
					printf("055-990-90-90");
					gotoxy(98,17);
					printf("All works on skin\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3: 
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Saida ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Saida Ramazanli");
					gotoxy(26,17);
					printf("H.Aliyev pr., 72");
					gotoxy(46,17);
					printf("Saida.Ramazan2022@beauty.org");
					gotoxy(80,17);
					printf("077-898-43-89");
					gotoxy(98,17);
					printf("All works on skin\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \n\t\t\t\t\t\tWrong input!");
					getch();
					goto choose;
					break;
			}
			break;
		case 3:
			system("cls");
			header();
			printf("\n  \n\t\t\t\t\t\t1.Sanubar\n  \n\t\t\t\t\t\t2.Khayala\n  \n\t\t\t\t\t\t3.Arzu\n");
			printf("\n  \n\t\t\t\t\t\tChoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Sanubar ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Sanubar Aliyeva");
					gotoxy(26,17);
					printf("Bakixanov distr.");
					gotoxy(46,17);
					printf("Sanubar.Ali2022@beauty.org");
					gotoxy(80,17);
					printf("099-445-45-33");
					gotoxy(98,17);
					printf("All works on nail\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Khayala ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Khayala Kabirov");
					gotoxy(26,17);
					printf("Q.Quliyev 1");
					gotoxy(46,17);
					printf("Kha.Kabir2022@beauty.org");
					gotoxy(80,17);
					printf("077-858-34-11");
					gotoxy(98,17);
					printf("All works on nail\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Arzu ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Arzu Mahmudova");
					gotoxy(26,17);
					printf("I.Dadasov 109");
					gotoxy(46,17);
					printf("Arzu.Mahmud2022@beauty.org");
					gotoxy(80,17);
					printf("055-565-35-33");
					gotoxy(98,17);
					printf("All works on nail\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \n\t\t\t\t\t\tWrong input");
					getch();
					goto choose;
					break;					
			}
			break;
		case 4:
			system("cls");
			header();
			printf("\n  \n\t\t\t\t\t\t1.Shargiyya\n  \n\t\t\t\t\t\t2.Aytaj\n  \n\t\t\t\t\t\t3.Ulker\n");
			printf("\n  \n\t\t\t\t\t\tChoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Shargiyya ====================");	
					staffHeader();				
					gotoxy(1,17);
					printf("Shargiyya Rahimli");
					gotoxy(26,17);
					printf("S.Vurgun str., 179");
					gotoxy(46,17);
					printf("Shegy.Rahim2022@beauty.org");
					gotoxy(80,17);
					printf("055-921-16-39");
					gotoxy(98,17);
					printf("All works on piercing\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Aytaj ====================");	
					staffHeader();				
					gotoxy(1,17);
					printf("Aytaj Babali");
					gotoxy(26,17);
					printf("Cavansir 4");
					gotoxy(46,17);
					printf("Aytaj.Babali2022@beauty.org");
					gotoxy(80,17);
					printf("055-348-16-23");
					gotoxy(98,17);
					printf("All works on piercing\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3:
					system("cls");
					gotoxy(16,13);
					printf("====================== Information about our stylist Ulker ====================");	
					staffHeader();				
					gotoxy(1,17);
					printf("Ulker Mammadli");
					gotoxy(26,17);
					printf("Azadliq pr., 107");
					gotoxy(46,17);
					printf("Ulker.Mammad2022@beauty.org");
					gotoxy(80,17);
					printf("055-345-44-90");
					gotoxy(98,17);
					printf("All works on piercing\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \n\t\t\t\t\t\tWrong input");
					getch();
					goto choose;
					break;					
			}
			break;
		default:
			printf("\n  \n\t\t\t\t\t\tWrong input");
			goto select;
			break;			
	}
	getch();
	main_menu();	
};

void ex_it(){
	
	system("cls");
	
	printf("\n\n\n\n\n\n\n\n\n\t\t\t---------->>>>>>   Thank you for everything!   <<<<<<----------\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	getch();
	
	return 0;
};

void entering()
{	
	int i,d;
name:
	printf("\n\n     \t\t\t\t\t\tEnter name: ");
	scanf("%s",&(c.name));
	
	c.name[0] = toupper((c.name[0]));
	
	if(strlen(c.name)>20 || strlen(c.name)<2)
	{
		printf("\n\t\t\t\t\tWrong name!\n");
		goto name;
	}
	else
	{
		for(i=0;i<strlen(c.name);i++)
		{
			if(isalpha(c.name[i]) == 0)//chechking alphaphetic variables
			{
				printf("\n\t\t\t\t\tWrong name!\n");
				goto name;
			}
		}
	}
//////////////////////////////////////////////////////

//input second name	
secondName:
	printf("\n\n     \t\t\t\t\t\tEnter second name: ");
	scanf("%s",&(c.secondName));
	
	c.secondName[0] = toupper((c.secondName[0]));
	
	if(strlen(c.secondName)>20 || strlen(c.secondName)<2)
	{
		printf("\n\n     \t\t\t\t\t\tWrong Input!\n");
		goto secondName;
	}
	else
	{
		for(i=0;i<strlen(c.secondName);i++)
		{
			if(isalpha(c.secondName[i]) == 0)
			{
				printf("\n\n     \t\t\t\t\t\tWrong input!\n");
				goto secondName;
			}
		}
	}
	///////////////////////////////////////////////////////////
//input number
number:
	printf("\n\n     \t\t\t\t\t\tEnter number: ");
	scanf("%s",&(c.number));
	
	if(strlen(c.number)<2 || strlen(c.number)>20)
	{
		printf("\n\n     \t\t\t\t\t\tWrong input!\n");
	}
	else{
		int h;	
		for(h=0;h<strlen((c.number));h++) 
		{
			if(isdigit(c.number[h])==0) //checking numeric character
			{
				printf("\n\n     \t\t\t\t\t\tWrong input!\n");
				goto number;
			}
		}
}
//////////////////////////////////////////////////////////

// input adress
adress:
	printf("\n\n     \t\t\t\t\t\tEnter adress: ");
	scanf("%s",&(c.adress));
	
	c.adress[0] = toupper((c.adress[0]));
	
	if(strlen(c.adress)>30 || strlen(c.adress)<2)
	{
		printf("\n\n     \t\t\t\t\t\tWrong Input!\n");
		goto adress;
	}
/////////////////////////////////////////////////////////////

// input email
	printf("\n\n     \t\t\t\t\t\tEnter email: ");
	scanf("%s",&(c.email));
		
/////////////////////////////////////////////////////////////

	int choose;

service:
	printf("\n\n     \t\t\t\t\t\t1.Hair");

	printf("\n\n     \t\t\t\t\t\t2.Skin");

	printf("\n\n     \t\t\t\t\t\t3.Nail");

	printf("\n\n     \t\t\t\t\t\t4.Piercing");

	printf("\n\n     \t\t\t\t\t\tSelect one service: ");
	scanf("%d",&(choose));
	
	switch(choose)
	{
		case 1:
			strcpy(c.service,"Hair_care");
			break;
		case 2:
			strcpy(c.service,"Face_care");
			break;
		case 3:
			strcpy(c.service,"Nail_care");
			break;
		case 4:
			strcpy(c.service,"Piercing_care");
			break;
		default:
			printf("Wrong input");
			goto service;
			break;
	}
	
/////////////////////////////////////////////////////////////

// input stylist name
StylistName:
		
	switch(choose)
	{
		case 1:
			printf("\n\n     \t\t\t\t\t\t1.Gulnara");

			printf("\n\n     \t\t\t\t\t\t2.Nurana");

			printf("\n\n     \t\t\t\t\t\t3.Khanim");	
			break;
		case 2:

			printf("\n\n     \t\t\t\t\t\t1.Humay");

			printf("\n\n     \t\t\t\t\t\t2.Shalala");

			printf("\n\n     \t\t\t\t\t\t3.Saida");	
			break;
		case 3:

			printf("\n\n     \t\t\t\t\t\t1.Sanubar");

			printf("\n\n     \t\t\t\t\t\t2.Khayala");

			printf("\n\n     \t\t\t\t\t\t3.Arzu\n");	

			break;
		case 4:

			printf("\n\n     \t\t\t\t\t\t1.Shargiyya");

			printf("\n\n     \t\t\t\t\t\t2.Aytaj");

			printf("\n\n     \t\t\t\t\t\t3.Ulker\n");

			break;
	}
	int stylistNameChoose;
	
	printf("\n\n     \t\t\t\t\t\tEnter stylist name: ");
	scanf("%d",&stylistNameChoose);
	
	if(choose == 1)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Gulnara");
				break;
			case 2:
				strcpy(c.stylistName,"Nurana");
				break;
			case 3:
				strcpy(c.stylistName,"Khanim");
				break;
			default:
				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 2)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Humay");
				break;
			case 2:
				strcpy(c.stylistName,"Shalala");
				break;
			case 3:
				strcpy(c.stylistName,"Saida");
				break;
			default:

				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 3)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Sanubar");
				break;
			case 2:
				strcpy(c.stylistName,"Khayala");
				break;
			case 3:
				strcpy(c.stylistName,"Arzu");
				break;
			default:
				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 4)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Shargiyya");
				break;
			case 2:
				strcpy(c.stylistName,"Aytaj");
				break;
			case 3:
				strcpy(c.stylistName,"Ulker");
				break;
			default:

				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
}

void clientAdd(){
	
	system("cls");
	header();
		
	FILE *op;
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat","a");

	entering();	
	fprintf(op,"\n%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);	
	
	fclose(op);
	
	system("cls");
	
	gotoxy(16,10);
	printf("====================== Successfully addition ====================");
	
	getch();
	main_menu();
};

void clientList()
{		
	system("cls");
	header();
	
	int row,count;

	FILE *ok;
	
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat","r");
			
		gotoxy(28,14);
		printf("====================== LIST OF CLIENTS ====================");	
		listHeader();
		row = 18;
		count = 1;
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{	
		gotoxy(1,row);
		printf("%d.",count);
		gotoxy(6,row);
		printf("%s %s",c.name,c.secondName);
		gotoxy(25,row);
		printf("%s",c.adress);
		gotoxy(42,row);
		printf("%s",c.email);
		gotoxy(67,row);
		printf("%s",c.number);
		gotoxy(85,row);
		printf("%s",c.service);
		gotoxy(100,row);
		printf("%s\n",c.stylistName);
		printf("---------------------------------------------------------------------------------------------------------------------");
		row+=2;
		count++;		
	}
	fclose(ok);	
	getch();
	main_menu();
}	
	
clientEdit()
{	

	// edit proccess: Program start to search your name which one you entered. Till the end it searchs. it carries All of name to another file except name for editing. 
	//at the end it deletes file and add new informations
	char name[20];
	
	int fnd,count,row;

	printf("\n\t\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	system("cls");
	header();
	
	name[0]=toupper(name[0]);
		
	FILE *ok;
	FILE *op;
	
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemaleEdit.dat","a");
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat","r");
	
			gotoxy(28,14);
			printf("====================== EXISTING INFORMATION OF CLIENTS ====================");	
			listHeader();
			row = 18;
			count = 1;
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)!=0)
		{
			fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);			
		}
		else
		{
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			fnd++;
			row++;
			count++;
		}		
	}
	if(fnd==0)
	{
		printf("\n\t\t\t\t\t\tNot found");
	}
	else
	{
		getch();
		system("cls");
		header();	
		gotoxy(16,9);
		printf("\n\n\n\n\t\t====================== ENTER NEW INFORMATION ABOUT CLIENT ====================\n\n");				
		entering();
	
	fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);
	}	
	
	fclose(op);
	fclose(ok);
	remove("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat");
	rename("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemaleEdit.dat","D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat");
	system("cls");
	gotoxy(16,10);
	printf("====================== Successfully Edit Operation ====================");	
	getch();
	main_menu();	
};
clientDelete()
{

	char name[20],wrongInput;
	int row=18,count=1,fnd=0;
	
deleting:	
	printf("\n\n\n\t\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	name[0]=toupper(name[0]);
		
	FILE *ok;
	FILE *op;
	
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemaleDelete.dat","a");
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat","r");
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)!=0)
		{
			fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);			
		}
		else
		{
			system("cls");
			header();
			listHeader();
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			fnd++;
			row++;
			count++;
		}		
	}
	if(fnd==0)
	{
		system("cls");
		gotoxy(16,10);
		printf("====================== Client not found ====================");
		getch();
		goto deleting;	
	}
		getch();
		fclose(op);
		fclose(ok);
		remove("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat");
		rename("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemaleDelete.dat","D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat");	
		
		system("cls");
	
		gotoxy(16,10);
		printf("====================== Successfully Delete Operation ====================");
		getch();
		main_menu();
	
};
clientSearch()
{
	system("cls");
	header();
	int fnd=0,row=18,count=1;
	char name[20];
	
	printf("\n\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	name[0]=toupper(name[0]);
	
	
	FILE *ok;
	
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsFemale.dat","r");
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)==0)
		{
			system("cls");
			header();
			listHeader();
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			printf("---------------------------------------------------------------------------------------------------------------------");
			fnd++;
			row+=2;
			count++;
		}
	}
	if(fnd==0)
	{
		printf("\n\t\t\t\t\tNot found!");
	}
	fclose(ok);
	
	getch();
	main_menu();	
};

void clients(){	
	system("cls");
	header();			
			int keep_going = 0;
			char password[5];
			char user_name[15];
			// Reception's account information
			char original_password[15] = "2022"; 
			char original_username[15] = "groupA";	
	int choice;	
	clientMenuContent();
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			clientAdd();
			break;
		case 2:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");

			do{	
				printf("\n\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);
				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientList();					
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
				}		
			break;
		case 3:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");

			do{	
				printf("\n\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);
				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientEdit();					
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
				}		
			break;
		case 4:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");

			do{	
				printf("\n\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);
				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientDelete();					
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
			}		
			break;
		case 5:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");

			do{	
				printf("\n\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);
				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientSearch();					
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
				}		
			break;			
		default:
			printf("\n\t\t\t\t\tWrong input!\n");		
	}	
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void enteringMale()
{	
	int i,d;
name:
	printf("\n\n     \t\t\t\t\t\tEnter name: ");
	scanf("%s",&(c.name));
	
	c.name[0] = toupper((c.name[0]));
	
	if(strlen(c.name)>20 || strlen(c.name)<2)
	{
		printf("\n\t\t\t\t\tWrong name!\n");
		goto name;
	}
	else
	{
		for(i=0;i<strlen(c.name);i++)
		{
			if(isalpha(c.name[i]) == 0)
			{
				printf("\n\t\t\t\t\tWrong name!\n");
				goto name;
			}
		}
	}
//////////////////////////////////////////////////////

//input second name	
secondName:
	printf("\n\n     \t\t\t\t\t\tEnter second name: ");
	scanf("%s",&(c.secondName));
	
	c.secondName[0] = toupper((c.secondName[0]));
	
	if(strlen(c.secondName)>20 || strlen(c.secondName)<2)
	{
		printf("\n\n     \t\t\t\t\t\tWrong Input!\n");
		goto secondName;
	}
	else
	{
		for(i=0;i<strlen(c.secondName);i++)
		{
			if(isalpha(c.secondName[i]) == 0)
			{
				printf("\n\n     \t\t\t\t\t\tWrong input!\n");
				goto secondName;
			}
		}
	}
	///////////////////////////////////////////////////////////
//input number
number:
	printf("\n\n     \t\t\t\t\t\tEnter number: ");
	scanf("%s",&(c.number));
	
	if(strlen(c.number)<2 || strlen(c.number)>20)
	{
		printf("\n\n     \t\t\t\t\t\tWrong input!\n");
	}
	else{
		int h;	
		for(h=0;h<strlen((c.number));h++) 
		{
			if(isdigit(c.number[h])==0) //checking numeric character
			{
				printf("\n\n     \t\t\t\t\t\tWrong input!\n");
				goto number;
			}
		}
}
//////////////////////////////////////////////////////////

// input adress
adress:
	printf("\n\n     \t\t\t\t\t\tEnter adress: ");
	scanf("%s",&(c.adress));
	
	c.adress[0] = toupper((c.adress[0]));
	
	if(strlen(c.adress)>30 || strlen(c.adress)<2)
	{
		printf("\n\n     \t\t\t\t\t\tWrong Input!\n");
		goto adress;
	}
/////////////////////////////////////////////////////////////

// input email
	printf("\n\n     \t\t\t\t\t\tEnter email: ");
	scanf("%s",&(c.email));
		
/////////////////////////////////////////////////////////////

	int choose;

service:
	printf("\n\n     \t\t\t\t\t\t1.Hair cut");

	printf("\n\n     \t\t\t\t\t\t2.Tatoo");

	printf("\n\n     \t\t\t\t\t\t3.Beard");

	printf("\n\n     \t\t\t\t\t\t4.Mustache");

	printf("\n\n     \t\t\t\t\t\tSelect one service: ");
	scanf("%d",&(choose));
	
	switch(choose)
	{
		case 1:
			strcpy(c.service,"Hair_cut");
			break;
		case 2:
			strcpy(c.service,"Tatoo");
			break;
		case 3:
			strcpy(c.service,"Beard_cut");
			break;
		case 4:
			strcpy(c.service,"Mustache_cut");
			break;
		default:
			printf("\n\n     \t\t\t\t\t\tWrong input");
			goto service;
			break;
	}
	
/////////////////////////////////////////////////////////////

// input stylist name
StylistName:
		
	switch(choose)
	{
		case 1:
			printf("\n\n     \t\t\t\t\t\t1.Ruslan");

			printf("\n\n     \t\t\t\t\t\t2.Zaur");

			printf("\n\n     \t\t\t\t\t\t3.Sultan");	
			break;
		case 2:

			printf("\n\n     \t\t\t\t\t\t1.Nizami");

			printf("\n\n     \t\t\t\t\t\t2.Mahmud");

			printf("\n\n     \t\t\t\t\t\t3.Abbas");	
			break;
		case 3:

			printf("\n\n     \t\t\t\t\t\t1.Revan");

			printf("\n\n     \t\t\t\t\t\t2.Muhammed");

			printf("\n\n     \t\t\t\t\t\t3.Kenan\n");	

			break;
		case 4:

			printf("\n\n     \t\t\t\t\t\t1.Muslum");

			printf("\n\n     \t\t\t\t\t\t2.Ferdi");

			printf("\n\n     \t\t\t\t\t\t3.Ruslan\n");

			break;
	}
	int stylistNameChoose;
	
	printf("\n\n     \t\t\t\t\t\tEnter stylist name: ");
	scanf("%d",&stylistNameChoose);
	
	if(choose == 1)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Ruslan");
				break;
			case 2:
				strcpy(c.stylistName,"Zaur");
				break;
			case 3:
				strcpy(c.stylistName,"Sultan");
				break;
			default:
				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 2)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Nizami");
				break;
			case 2:
				strcpy(c.stylistName,"Mahmud");
				break;
			case 3:
				strcpy(c.stylistName,"Abbas");
				break;
			default:

				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 3)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Revan");
				break;
			case 2:
				strcpy(c.stylistName,"Kenan");
				break;
			case 3:
				strcpy(c.stylistName,"Muhammed");
				break;
			default:
				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
	else if(choose == 4)
	{
		switch(stylistNameChoose)
		{
			case 1:
				strcpy(c.stylistName,"Muslum");
				break;
			case 2:
				strcpy(c.stylistName,"Ferdi");
				break;
			case 3:
				strcpy(c.stylistName,"Ruslan");
				break;
			default:

				printf("\n\n     \t\t\t\t\t\tWrong input!");

				break;
		}
	}
}

void costInfoMale(){
	system("cls");
	header();
	int choose1,choose2;
	printf("\n\t\t\t\t\t\t1.Hair cut");
	printf("\n\t\t\t\t\t\t2.Tatoo");
	printf("\n\t\t\t\t\t\t3.Beard cut");
	printf("\n\t\t\t\t\t\t4.Mustache cut");
pay2:
	printf("\n\n\t\t\t\t\t\tSelect one service: ");
	scanf("%d",&(choose1));
pay:	
	switch(choose1)
	{
		case 1:			
			printf("\n\t\t\t\t\t\t1.Cut\n\t\t\t\t\t\t2.Paint\n\t\t\t\t\t\t3.Hair care");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));			
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tIt starts from 15 AZN\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 50 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 40 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto pay;
					break;
			}
			break;
		case 2:
			printf("\n\t\t\t\t\t\t1.Small Tatoo\n\t\t\t\t\t\t2.Middle Tatoo\n\t\t\t\t\t\t3.Large Tatoo");
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));		
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 50-100 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 200 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 250+ AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto pay;
					break;
			}
			break;
		case 3:			
			printf("\n\t\t\t\t\t\t1.Less than norm.\n\t\t\t\t\t\t2.Normal size\n\t\t\t\t\t\t3.Big size");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));
			
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 8 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 15 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 20 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto pay;
					break;
			}
			break;
		case 4:			
			printf("\n\t\t\t\t\t\t1.Small size\n\t\t\t\t\t\t2.Middle size\n\t\t\t\t\t\t3.Large size");			
			printf("\n\n\t\t\t\t\t\tSelect one service: ");
			scanf("%d",&(choose2));
			
			switch(choose2)
			{
				case 1:
					printf("\n\n\t\t\t\t\t\tYou will pay 5 AZN for this service\n");
					break;
				case 2:
					printf("\n\n\t\t\t\t\t\tYou will pay 10 AZN for this service\n");
					break;
				case 3:
					printf("\n\n\t\t\t\t\t\tYou will pay 15 AZN for this service\n");
					break;
				default:
					printf("\n\n\t\t\t\t\t\tWrong input\n");
					goto pay;
					break;
			}
			break;
		default:
			printf("\n\n\t\t\t\t\t\tWrong input\n");
			goto pay2;
			break;
	}	
	getch();
	mainMenuMale();	
};	
void staffMale()
{
	int chs,chs2;
		
	system("cls");
	header();
		
	gotoxy(47,14);
	printf("1.Hair cut");
	gotoxy(47,15);
	printf("2.Tatoo");
	gotoxy(47,16);
	printf("3.Beard cut");
	gotoxy(47,17);
	printf("4.Mustache cut");	
select:	
	printf("\n\n  \t\t\t\t\t\tSelect: ");
	scanf("%d",&chs);	
choose:
	switch(chs)
	{
		case 1:
			system("cls");
			header();		
			printf("\n  \t\t\t\t\t\t1.Ruslan\n  \t\t\t\t\t\t2.Zaur\n  \t\t\t\t\t\t3.Sultan\n");
			printf("\n  \t\t\t\t\t\tchoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Ruslan ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Ruslan Karimov");
					gotoxy(26,17);
					printf("Nasimi 92 A");
					gotoxy(46,17);
					printf("Karimov.Ruslan2022@beauty.org");
					gotoxy(80,17);
					printf("077-999-36-24");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Zaur ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Zaur Xosrovlu");
					gotoxy(26,17);
					printf("Nasimi st.32");
					gotoxy(46,17);
					printf("Zaur.Xosrovlu2022@beauty.org");
					gotoxy(80,17);
					printf("055-987-45-33");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();	
					break;
				case 3: 
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Sultan ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Sultan Muxtarzadeh");
					gotoxy(26,17);
					printf("Suraxani dist. ");
					gotoxy(46,17);
					printf("Sultan.Muxtarzadeh2022@beauty.org");
					gotoxy(80,17);
					printf("070-876-45-23");
					gotoxy(98,17);
					printf("All works on hair\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \t\t\t\t\t\tWrong input!");
					getch();
					goto choose;
					break;
			}
			break;
		case 2: 
			system("cls");
			header();
			printf("\n  \t\t\t\t\t\t1.Nizami\n  \t\t\t\t\t\t2.Mahmud\n  \t\t\t\t\t\t3.Abbas\n");
			printf("\n  \t\t\t\t\t\tChoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Nizami ====================");	
					staffHeader();					
					gotoxy(1,17);
					printf("Nizami Jabrayilov");
					gotoxy(26,17);
					printf("Sheyx Shamil str.");
					gotoxy(46,17);
					printf("Jabrayilov.Nizami2022@beauty.org");
					gotoxy(80,17);
					printf("055-456-51-22");
					gotoxy(98,17);
					printf("All works on Tatoo\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Mahmud ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Mahmud Ahmedli");
					gotoxy(26,17);
					printf("Lutfizadeh str.");
					gotoxy(46,17);
					printf("Mahmud.Ahmedli2022@beauty.org");
					gotoxy(80,17);
					printf("055-990-90-90");
					gotoxy(98,17);
					printf("All works on Tatoo\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3: 
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Abbas ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Abbas Ramazanli");
					gotoxy(26,17);
					printf("H.Aliyev pr., 72");
					gotoxy(46,17);
					printf("Abbas.Ramazanli2022@beauty.org");
					gotoxy(80,17);
					printf("077-898-43-89");
					gotoxy(98,17);
					printf("All works on Tatoo\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \t\t\t\t\t\tWrong input!");
					getch();
					goto choose;
					break;
			}
			break;
		case 3:
			system("cls");
			header();
			printf("\n  \t\t\t\t\t\t1.Revan\n  \t\t\t\t\t\t2.Kenan\n  \t\t\t\t\t\t3.Muhammed\n");
			printf("\n  \t\t\t\t\t\tChoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Revan ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Revan Aliyeva");
					gotoxy(26,17);
					printf("Bakixanov distr.");
					gotoxy(46,17);
					printf("Revan.Aliyev2022@beauty.org");
					gotoxy(80,17);
					printf("099-445-45-33");
					gotoxy(98,17);
					printf("All works on Beard\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Kenan ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Kenan Kabirov");
					gotoxy(26,17);
					printf("Q.Quliyev 1");
					gotoxy(46,17);
					printf("Kenan.Kabirov2022@beauty.org");
					gotoxy(80,17);
					printf("077-858-34-11");
					gotoxy(98,17);
					printf("All works on Beard\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Muhammed ====================");	
					staffHeader();
					gotoxy(1,17);
					printf("Muhammed Mahmudov");
					gotoxy(26,17);
					printf("I.Dadasov 109");
					gotoxy(46,17);
					printf("Muhammed.Mahmudov2022@beauty.org");
					gotoxy(80,17);
					printf("055-565-35-33");
					gotoxy(98,17);
					printf("All works on Beard\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \t\t\t\t\t\tWrong input");
					getch();
					goto choose;
					break;					
			}
			break;
		case 4:
			system("cls");
			header();
			printf("\n  \t\t\t\t\t\t1.Muslum\n  \t\t\t\t\t\t2.Ferdi\n  \t\t\t\t\t\t3.Ruslan\n");
			printf("\n  \t\t\t\t\t\tChoose: ");
			scanf("%d",&chs2);
			
			switch(chs2)
			{
				case 1:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Muslum ====================");	
					staffHeader();				
					gotoxy(1,17);
					printf("Muslum Rahimov");
					gotoxy(26,17);
					printf("S.Vurgun str., 179");
					gotoxy(46,17);
					printf("Muslum.Rahimov2022@beauty.org");
					gotoxy(80,17);
					printf("055-921-16-39");
					gotoxy(98,17);
					printf("All works on Mustache\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 2:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Ferdi ====================");	
					staffHeader();				
					gotoxy(1,17);
					printf("Ferdi Babali");
					gotoxy(26,17);
					printf("Cavansir 4");
					gotoxy(46,17);
					printf("Ferdi.Babali2022@beauty.org");
					gotoxy(80,17);
					printf("055-348-16-23");
					gotoxy(98,17);
					printf("All works on Mustache\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				case 3:
					system("cls");
					header();
					gotoxy(16,13);
					printf("====================== Information about our stylist Ruslan ====================");	
					staffHeader();				
					gotoxy(0,17);
					printf("Ruslan Karimov");
					gotoxy(26,17);
					printf("Azadliq pr., 107");
					gotoxy(46,17);
					printf("Ruslan.Karimov2022@beauty.org");
					gotoxy(80,17);
					printf("055-345-44-90");
					gotoxy(98,17);
					printf("All works on mustache\n");
					printf("------------------------------------------------------------------------------------------------------------------------\n\n\n");
					getch();
					main_menu();
					break;
				default:
					printf("\n  \t\t\t\t\t\tWrong input");
					getch();
					goto choose;
					break;					
			}
			break;
		default:
			printf("\n  \t\t\t\t\t\tWrong input");
			goto select;
			break;			
	}
	
	getch();
	main_menu();	
		
};	
void clientAddMale()
{
	system("cls");
	header();
		
	FILE *op;
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat","a");

	enteringMale();	
	fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);	
	
	fclose(op);
	
	system("cls");
	
	gotoxy(16,10);
	printf("====================== Successfully addition ====================");
	getch();
	mainMenuMale();	
};
void clientListMale()
{
	system("cls");
	header();
	
	int row,count;

	FILE *ok;
	
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat","r");
			
		gotoxy(28,14);
		printf("====================== LIST OF CLIENTS ====================");	
		listHeader();
		row = 18;
		count = 1;
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{	
		gotoxy(1,row);
		printf("%d.",count);
		gotoxy(6,row);
		printf("%s %s",c.name,c.secondName);
		gotoxy(25,row);
		printf("%s",c.adress);
		gotoxy(42,row);
		printf("%s",c.email);
		gotoxy(67,row);
		printf("%s",c.number);
		gotoxy(85,row);
		printf("%s",c.service);
		gotoxy(100,row);
		printf("%s\n",c.stylistName);
		printf("---------------------------------------------------------------------------------------------------------------------");
		row+=2;
		count++;		
	}
	fclose(ok);	
	getch();
	mainMenuMale();	
	};	
void clientEditMale()
{
	char name[20];
	
	int fnd,count,row;

	printf("\n\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	system("cls");
	header();
	
	name[0]=toupper(name[0]);
		
	FILE *ok;
	FILE *op;
	
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMaleEdit.dat","a");
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat","r");
	
			gotoxy(28,14);
			printf("====================== EXISTING INFORMATION OF CLIENTS ====================");	
			listHeader();
			row = 18;
			count = 1;
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)!=0)
		{
			fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);			
		}
		else
		{
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			fnd++;
			row++;
			count++;
		}		
	}
	if(fnd==0)
	{
		printf("Not found");
	}
	else
	{
		getch();
		system("cls");
		header();	
		gotoxy(28,11);
		printf("\n\n\n\n\t\t====================== ENTER NEW INFORMATION ABOUT CLIENT ====================\n\n");				
		enteringMale();
		fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);
	}		
	fclose(op);
	fclose(ok);
	remove("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat");
	rename("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMaleEdit.dat","D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat");	
	getch();
	mainMenuMale();		
	};	
void clientDeleteMale()
{	
	char name[20];
	int row=18,count=1,fnd=0;
	
deleting1:	
	printf("\n\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	name[0]=toupper(name[0]);
		
	FILE *ok;
	FILE *op;
	
	op = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMaleDelete.dat","a");
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat","r");
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)!=0)
		{
			fprintf(op,"%s %s %s %s %s %s %s\n",c.name,c.secondName,c.adress,c.email,c.number,c.service,c.stylistName);			
		}
		else
		{
			system("cls");
			header();
			listHeader();
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			fnd++;
			row++;
			count++;
		}		
	}
	if(fnd==0)
	{
		system("cls");
		gotoxy(28,14);
		printf("====================== Client not found ====================");
		goto deleting1;	
	}
		getch();
		fclose(op);
		fclose(ok);
		remove("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat");
		rename("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMaleDelete.dat","D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat");		
		system("cls");
		gotoxy(28,14);
		printf("====================== Successfully Delete Operation ====================");
		getch();
		mainMenuMale();
	};	
void clientSearchMale()
{
	system("cls");
	header();
	int fnd,row=18,count=1;
	char name[20];
	
	fnd = 0;
	
	printf("\n\t\t\t\t\tEnter the name: ");
	scanf("%s",&name);
	
	name[0]=toupper(name[0]);
		
	FILE *ok;
	
	ok = fopen("D:\\Projects\\Beauty\\BeautyWithMale\\ClientsMale.dat","r");
	
	while(fscanf(ok,"%s %s %s %s %s %s %s",&(c.name),&(c.secondName),&(c.adress),&(c.email),&(c.number),&(c.service),&(c.stylistName))!=EOF)
	{
		if(strcmp(name,c.name)==0)
		{
			system("cls");
			header();
			listHeader();
			gotoxy(1,row);
			printf("%d.",count);
			gotoxy(6,row);
			printf("%s %s",c.name,c.secondName);
			gotoxy(25,row);
			printf("%s",c.adress);
			gotoxy(42,row);
			printf("%s",c.email);
			gotoxy(67,row);
			printf("%s",c.number);
			gotoxy(85,row);
			printf("%s",c.service);
			gotoxy(100,row);
			printf("%s\n",c.stylistName);
			printf("---------------------------------------------------------------------------------------------------------------------");
			fnd++;
			row+=2;
			count++;
		}
	}
	if(fnd==0)
	{
		printf("\n\t\t\t\t\tNot found!");
	}
	fclose(ok);	
	getch();
	mainMenuMale();	
	};	
void maleClients(){				
			int keep_going = 0;
			char password[5];
			char user_name[15];
			// Reception's account information
			char original_password[15] = "2022"; 
			char original_username[15] = "groupA";	
	system("cls");
	header();
		
	int choice;
	clientMenuContent();	
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			clientAddMale();
			break;
		case 2:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");

			do{	
				printf("\n\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);
				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientListMale();					
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
				}		
			break;
		case 3:
			system("cls");
			header();			
			printf("\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");
			do{	
				printf("\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);	
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientEditMale();
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
		}		
			break;
		case 4:
			system("cls");
			header();			
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");
			do{	
				printf("\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);				
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n\n");
					getch();
					clientDeleteMale();
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
		}			
			break;
		case 5:
			system("cls");
			header();		
			printf("\n\n\t\t\t\t\t\t--------> SIGN IN <--------\n\n");
			do{	
				printf("\n\t\t\t\t\t\tPlease enter the username: ");
				scanf("%s",&user_name);		
				printf("\n\t\t\t\t\t\tPlease enter the password: ");		
				scanf("%s",&password);
				if(strcmp(user_name,original_username)==0 && strcmp(password,original_password)==0) //are they same?
				{
					printf("\n\n\t\t\t\t\t\tLogin succesfull...\n");
					getch();
					clientSearchMale();
					break;
				}
				else
				{
					printf("\n\n\t\t\t\t\t\tIncorrect password or username. Try again\n\n");
					keep_going++;
				}	
			}while(keep_going<=2);			
			if(keep_going>2){
			printf("\n\n\t\t\t\t\t\tYou enter wrong informations several times. You cannot login again..."); // limit for entring to account
			getch();
			ex_it();
		}	
			break;			
		default:
			printf("\n\n\t\t\t\t\t\t\tWrong input!\n");		
	}		
};		
void mainMenuMale(){	
	system("cls");
	headerMan();
	printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n\t\t\t\t\t\t%c    MAIN MENU    %c\n",186,186);
	printf("\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	
	printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n\t\t\t\t\t\t%c 1.Salon Details %c\n",186,186);
	printf("\t\t\t\t\t\t%c 2.Clients 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c 3.Cost info 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c 4.Staff         %c\n",186,186);
	printf("\t\t\t\t\t\t%c 5.Exit 	  %c\n",186,186);
	printf("\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
	   
	int choosing;
	
	printf("\n\n \t\t\t\t\t\tSelect operation:");
	scanf("%d",&choosing);

	switch(choosing)
	{	
		case 1:
			details();
			break;
		case 2:
			maleClients();
			break;
		case 3:
			costInfoMale();
			break;
		case 4:
			staffMale();
			break;
		case 5:
			ex_it();
			break;
		default:
			printf("t\t\t\tWrong select...\n\n");
	}	
}
int main(int argc, char *argv[]) {
	system("COLOR A");	
	welcome_screen();
		
	int gend;
agn:	
	printf("\n\n\n\t\t\t\t\t   1.Male services\n\t\t\t\t\t   2.Female services\n");
	printf("\n\n\t\t\t\t\t   Your choice: ");
	scanf("%d",&gend);

	switch(gend)
	{
		case 1:
			mainMenuMale();
			break;
		case 2:
			main_menu();
			break;
		default:
			printf("wrong input! Select again");
			goto agn;
			break;
	}
	return 0;
}

