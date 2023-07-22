#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

    int x,y,z,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;
    int run=0;
    int wicket=0;
    int over=0;
    int ball=0;
    int dotball=0;
    string player1,player2,player3,player4,player5,player6,player7,player8,player9,player10,player11;
    string bowler_1,bowler_2,bowler_3,bowler_4,bowler_5,bowler_6;
    string bowler;
    int extra=0;
    int thisover;
    string battingTeam;
    string bollingTeam;
    char op;







void initial()
{

    cout<<"............................................................Welcome To MSPL_2023........................................................"<<endl;
    cout<<"................................................................ScoreBoard.............................................................."<<endl;
    cout<<"\n\nEnter Batting Team Name:";
    cin>>battingTeam;
    cout<<"Enter Bolling Team Name:";
    cin>>bollingTeam;
    cout<<"\nEnter Batsman info:";
    cout<<"\nEnter the name of player_1:"; cin>>player1;
    cout<<"Enter the name of player_2:"; cin>>player2;
    cout<<"Enter the name of player_3:"; cin>>player3;
    cout<<"Enter the name of player_4:"; cin>>player4;
    cout<<"Enter the name of player_5:"; cin>>player5;
    cout<<"Enter the name of player_6:"; cin>>player6;
    cout<<"Enter the name of player_7:"; cin>>player7;
    cout<<"Enter the name of player_8:"; cin>>player8;
    cout<<"Enter the name of player_9:"; cin>>player9;
    cout<<"Enter the name of player_10:"; cin>>player10;
    cout<<"Enter the name of player_11:"; cin>>player11;
    cout<<"\n\n";


    cout<<"Enter Bowlers info:";
    cout<<"\nEnter the name of bowler_1:"; cin>>bowler_1;
    cout<<"Enter the name of bowler_2:"; cin>>bowler_2;
    cout<<"Enter the name of bowler_3:"; cin>>bowler_3;
    cout<<"Enter the name of bowler_4:"; cin>>bowler_4;
    cout<<"Enter the name of bowler_5:"; cin>>bowler_5;
    cout<<"Enter the name of bowler_6:"; cin>>bowler_6;


}



void display(string battingTeam, string bollingTeam)
{
    cout<<"............................................................Welcome To MSPL_2023............................................................."<<endl;
    cout<<"..................................................................ScoreBoard................................................................."<<endl;
    cout<<"\n\n     To days Match: "<<battingTeam<<"  vs  "<<bollingTeam<<endl;

    cout<<"\n\n\n\nScore: "<<run<<"/"<<wicket<<" ("<<over<<"."<<ball<<")"<<"                                Extra: "<<extra<<"                   DotBall: "<<dotball<<endl;

    cout<<"\n\n\n\nBatting list:";                     cout<<"                                                                                                        Bowling list:"<<endl;
    cout<<"\n"<<player1<<"="<<a;                  cout<<"                                                                                                      "<<bowler_1<<"="<<endl;
    cout<<player2<<"="<<b;                        cout<<"                                                                                                       "<<bowler_2<<"="<<endl;
    cout<<player3<<"="<<c;                        cout<<"                                                                                                       "<<bowler_3<<"="<<endl;
    cout<<player4<<"="<<d;                        cout<<"                                                                                                       "<<bowler_4<<"="<<endl;
    cout<<player5<<"="<<e;                        cout<<"                                                                                                        "<<bowler_5<<"="<<endl;
    cout<<player6<<"="<<f;                        cout<<"                                                                                                        "<<bowler_6<<"="<<endl;
    cout<<player7<<"="<<g<<endl;
    cout<<player8<<"="<<h<<endl;
    cout<<player9<<"="<<i<<endl;
    cout<<player10<<"="<<j<<endl;
    cout<<player11<<"="<<k<<endl;

cout<<"\n\n\n\n";


        cout<<"\n\nUpdate Score:"<<endl;
		cout<<"\t\t1.Run   ";
		cout<<"\t\t2.Wicket";
		cout<<"\t\t3.WideBall ";
		cout<<"\t\t4.LegBy";
		cout<<"\t\t5.NoBall";
		cout<<"\t\t6.DotBall"<<endl;
		cout<<"Enter op:"; cin>>op;

		switch(op)
		{
			case '1':
			    cout<<"Enter Run:"; cin>>x;
                    run=run+x;
                    ball++;
				break;
		    case '2':
		        cout<<"Enter run(if required):"; cin>>x;
		        run=run+x;
                wicket++;
                ball++;
				break;
			case '3':
                    run++;
                    extra++;
				break;
            case '4':
                cout<<"Enter Extra run:";
                cin>>x;
                    run=run+x;
                    extra++;
                    ball++;
				break;
            case '5':
                cout<<"Enter Run:"; cin>>x; cout<<"Wicket(if required)"; cin>>y;
               run=run+x;
               wicket=wicket+y;
               extra++;
				break;
            case '6':
               ball++;
               dotball++;
				break;
			default:
				cout<<"\tInvalid number!";

		}
                if(ball==6)
                {
                    over++;
                    ball=0;
                }

                cout<<"\n\n\n\n";


}

int main()
{

initial();

while(1)
{
display(battingTeam,bollingTeam);
}

cout<<"\n\n\n\n";

return 0;
}




