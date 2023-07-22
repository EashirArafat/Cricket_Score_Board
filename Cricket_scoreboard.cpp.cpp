#include<iostream>
#include<string>
#include <windows.h>
#include <iomanip>

using namespace std;

class ScoreBoard {
private:
    int innings;
    float s1=0, s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,s9=0,s10=0,s11=0;
    int w1=0,w2=0,w3=0,w4=0,w5=0,w6=0;
    int x,X,Y, y,W,Z, ovr, wkt;
    int z = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l=0, m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0,ii=0;
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G=0, H=0, I=0, J=0, K=0, L=0, M=0, N=0, O=0;
    int last_over_run = 0, run = 0;
    int last_over_wicket = 0, wicket = 0;
    int target=0, over = 0;
    int ball = 0;
    int dotball = 0;
    float runrate=0, rrr=0;
    string player1, player2, player3, player4, player5, player6, player7, player8, player9, player10, player11;
    string bowler_1, bowler_2, bowler_3, bowler_4, bowler_5, bowler_6;
    int bat1,bat2,bat3,bat4,bowler1;
    int extra = 0;
    int ttt, match_no;
    string date;
    string tournament,selection,toss;
    string Team1,Team2;
    char op;

public:
    void initial()
    {
        cout << "..............................................................Welcome To Cricket Tournament........................................................" << endl;
        cout << "......................................................................ScoreBoard...................................................................." << endl;
        cout<<"Do You Want To See Ball By Ball Record? \nPres '1' for yes and '2' for no:"; cin>>ttt;
        cout<<"Enter Your Tournament Name: ";  cin>>tournament; cin.ignore();
        cout << "Enter match no:"; cin >> match_no; cout << "Enter Date:"; cin >> date;
        cout<<"Enter Total Over:"; cin>>ovr;
        cout<<"Enter Total Wicket:"; cin>>wkt;
        cout << "\n\nEnter Two Team Name:"<<endl;
        cout<<"Team_1: "; cin>>Team1;
        cout<<"Team_2: "; cin>>Team2;
        cout<<"Toss: "; cin>>toss;
        cout<<"Selected To: "; cin>>selection;
        cout << "\nEnter Batting Team info(with out space and 6 charecter):";
        cout << "\nEnter the name of player_1:"; cin >> player1;
        cout << "Enter the name of player_2:"; cin >> player2;
        cout << "Enter the name of player_3:"; cin >> player3;
        cout << "Enter the name of player_4:"; cin >> player4;
        cout << "Enter the name of player_5:"; cin >> player5;
        cout << "Enter the name of player_6:"; cin >> player6;
        cout << "Enter the name of player_7:"; cin >> player7;
        cout << "Enter the name of player_8:"; cin >> player8;
        cout << "Enter the name of player_9:"; cin >> player9;
        cout << "Enter the name of player_10:"; cin >> player10;
        cout << "Enter the name of player_11:"; cin >> player11;
        cout << "\n\n";

        cout << "Enter Bowlers info:";
        cout << "\nEnter the name of bowler_1:"; cin >> bowler_1;
        cout << "Enter the name of bowler_2:"; cin >> bowler_2;
        cout << "Enter the name of bowler_3:"; cin >> bowler_3;
        cout << "Enter the name of bowler_4:"; cin >> bowler_4;
        cout << "Enter the name of bowler_5:"; cin >> bowler_5;
        cout << "Enter the name of bowler_6:"; cin >> bowler_6;

        cout << "Enter Innings:"; cin >> innings;
        if (innings!=1 && innings!=2)
        {
          cout << "Enter Valid Innings:"; cin >> innings;
        }
        if(innings==2)
            {
                cout<<"Target: ";
                cin>>target;
            }
        cout<<"Opening Batsman:-"<<endl;
        cout<<"Strike Batsman no:"; cin>>bat1; X=bat1;
        cout<<"Non_strike Batsman no:"; cin>>bat2;

        if (bat1==bat2)
        {
           cout<<"Valid Strike Batsman no:"; cin>>bat1; X=bat1;
           cout<<"Valid Non_strike Batsman no:"; cin>>bat2;
        }
        cout<<"Opening Bowler:"; cin>>bowler1; Y=bowler1;
        if(bowler1!=1 && bowler1!=2 && bowler1!=3 && bowler1!=4 && bowler1!=5 && bowler1!=6 )
        {
            cout<<"Enter Valid Opening Bowler no:"; cin>>bowler1; Y=bowler1;
        }
}

    void display()
    {
        if(ttt==2)
        {
          system("cls");
        }

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "\n...................................................................Welcome To "<<tournament<<".................................................................." << endl;
        cout << ".........................................................................ScoreBoard........................................................................." << endl;
        cout << "Match no:" << match_no << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate:" << date << endl;
        cout<< "Innings: " << innings << endl;
        cout<<toss<<" Win The Toss And Selected To "<<selection<<" First."<<endl;

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "\n\n                                                                 " << Team1 << "  vs  " << Team2 << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "\n\nScore: " << run << "/" << wicket << " (" << over << "." << ball << ")" << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tExtra: " << extra <<endl;
        cout<<"Run Rate:"<<runrate<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tDotBall: " << dotball << endl;
        if(innings==2)
        {
            cout<<"\nTarget: "<<target; rrr=(target-run)/(ovr-(over+(float)ball/6));
            cout<<"\t\t\t\t\t\tNeed "<<target-run<<" Run To Win From "<<(ovr*6-(6*over+ball))<<" Ball"<<endl;
            cout<< std::fixed << std::setprecision(2) <<"Required Run Rate: "<< std::fixed << std::setprecision(2) <<rrr<<endl;
        }
        cout<<"\033[1m    \033[0m";
        cout << "\n\n\n   Batting list:   r/b  Strike Rate";                                                    cout << "\t\t\t\t\t\t\t    Bowling list: r/w (b)" << endl;
        cout <<" ";if(X==1){cout<<"*";}else {cout<<" ";}cout<< " 1. " << player1 << "-"<<"\t   " << a <<"/"<< l <<"\t";if(a!=0 && l!=0){cout<< std::fixed << std::setprecision(2) <<s1;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==1){cout<<"*";}else {cout<<" ";} cout << " 1. " << bowler_1 << "-    " << A <<"/"<<w1<<" ("<< H <<")"<< endl;
        cout <<" ";if(X==2){cout<<"*";}else {cout<<" ";}cout<< " 2. " << player2 << "-"<<"\t   " << b <<"/"<< m <<"\t";if(b!=0 && m!=0){cout<< std::fixed << std::setprecision(2) <<s2;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==2){cout<<"*";}else {cout<<" ";} cout << " 2. " << bowler_2 << "-    " << B <<"/"<<w2<<" ("<< I <<")"<< endl;
        cout <<" ";if(X==3){cout<<"*";}else {cout<<" ";}cout<< " 3. " << player3 << "-"<<"\t   " << c <<"/"<< n <<"\t";if(c!=0 && n!=0){cout<< std::fixed << std::setprecision(2) <<s3;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==3){cout<<"*";}else {cout<<" ";} cout << " 3. " << bowler_3 << "-    " << C <<"/"<<w3<<" ("<< J <<")"<< endl;
        cout <<" ";if(X==4){cout<<"*";}else {cout<<" ";}cout<< " 4. " << player4 << "-"<<"\t   " << d <<"/"<< o <<"\t";if(d!=0 && o!=0){cout<< std::fixed << std::setprecision(2) <<s4;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==4){cout<<"*";}else {cout<<" ";} cout << " 4. " << bowler_4 << "-    " << D <<"/"<<w4<<" ("<< K <<")"<< endl;
        cout <<" ";if(X==5){cout<<"*";}else {cout<<" ";}cout<< " 5. " << player5 << "-"<<"\t   " << e <<"/"<< p <<"\t";if(e!=0 && p!=0){cout<< std::fixed << std::setprecision(2) <<s5;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==5){cout<<"*";}else {cout<<" ";} cout << " 5. " << bowler_5 << "-    " << E <<"/"<<w5<<" ("<< L <<")"<< endl;
        cout <<" ";if(X==6){cout<<"*";}else {cout<<" ";}cout<< " 6. " << player6 << "-"<<"\t   " << f <<"/"<< q <<"\t";if(f!=0 && q!=0){cout<< std::fixed << std::setprecision(2) <<s6;} cout << "\t\t\t\t\t\t\t\t  ";if(Y==6){cout<<"*";}else {cout<<" ";} cout << " 6. " << bowler_6 << "-    " << F <<"/"<<w6<<" ("<< M <<")"<< endl;
        cout <<" ";if(X==7){cout<<"*";}else {cout<<" ";}cout<< " 7. " << player7 << "-"<<"\t   " << g <<"/"<< r <<"\t";if(g!=0 && r!=0){cout<< std::fixed << std::setprecision(2) <<s7;} cout<< endl;
        cout <<" ";if(X==8){cout<<"*";}else {cout<<" ";}cout<< " 8. " << player8 << "-"<<"\t   " << h <<"/"<< s <<"\t";if(h!=0 && s!=0){cout<< std::fixed << std::setprecision(2) <<s8;} cout<< endl;
        cout <<" ";if(X==9){cout<<"*";}else {cout<<" ";}cout<< " 9. " << player9 << "-"<<"\t   " << i <<"/"<< t <<"\t";if(i!=0 && t!=0){cout<< std::fixed << std::setprecision(2) <<s9;} cout<< endl;
        cout <<"";if(X==10){cout<<"*";}else {cout<<" ";}cout<< " 10. " << player10 << "-"<<"\t   " << j <<"/"<< u <<"\t";if(j!=0 && u!=0){cout<< std::fixed << std::setprecision(2) <<s10;} cout<< endl;
        cout <<"";if(X==11){cout<<"*";}else {cout<<" ";}cout<< " 11. " << player11 << "-"<<"\t   " << k <<"/"<< v <<"\t";if(k!=0 && v!=0){cout<< std::fixed << std::setprecision(2) <<s11;} cout<< endl;


        if (innings==1 && over==ovr-1 && ball==6 )
             {
                 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                 SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                 cout<<"\t\t\t\t\t\t\t\t1st Innings Successfully End"<<endl;
                 SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                 cout<<"\n\t\t\t\t\t\t\t\tTarget: "<<run+1<<" Run";
             }
         if (innings==1 && wicket==wkt )
            {
               HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
               cout<<"\t\t\t\t\t\t\t\t1st Innings Successfully End"<<endl;
               SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
               cout<<"\n\t\t\t\t\t\t\t\tTarget: "<<run+1<<" Run";
            }
         if(innings==2 && run>=target && run!=0 && target!=0)
            {
              HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
              SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
              cout<<"\t\t\t\t\t\t\t\t\tCongratulations...."<<endl;
              SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
              cout<<"\n\t\t\t\t\t\t\t\t"<<Team2<<" Won BY "<<wkt-wicket<<" Wicket"<<endl;
            }
         if(innings==2 && wicket==wkt)
             {
               HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
               SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
               cout<<"\t\t\t\t\t\t\t\tCongratulations...."<<endl;
               SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
               cout<<"\n\t\t\t\t\t\t\t\t"<<Team1<<" Won By "<<target-(run+1)<<" Run"<<endl;
            }

          if(innings==2 && over==ovr-1 && ball==6 && run<target && target!=0)
               {
                  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                  SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                  cout<<"\t\t\t\t\t\t\tCongratulations...."<<endl;
                  SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                  cout<<"\n\t\t\t\t\t\t\t\t"<<Team1<<" Won By "<<target-(run+1)<<" Run"<<endl;
               }



        if(innings==1)
        {
            cout<<"\n\n\n\n";
        }
        if (ball == 6 && over!=ovr-1)
        {
            over++; ball=0;
            int ss;
            ss=bat1;
            bat1=bat2;
            bat2=ss;
            X=bat1;
            cout<<"Enter New Bowler no:"; cin>>bowler1; Y=bowler1;
        }

        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------\033[1m-\033[0mdipu" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "Update Score:" << endl;
        cout << " 1.Run   ";
        cout << "\t2.Wicket";
        cout << "\t3.WideBall ";
        cout << "\t4.LegBy";
        cout << "\t\t5.NoBall";
        cout << "\t6.DotBall";
        cout << "\t7.Change Strike";
        cout << "\t\t8.Run Out";
        cout << "\t9.Edit Score"<<endl;
        cout<<"Enter op:"; cin >> op;

        /*if (op!=1 && op!=2 && op!=3 && op!=4 && op!=5  && op!=6 && op!=7 && op!=8)
        {
            cout<<"Enter Valid op:"; cin >> op;
        }  */

        switch (op)
        {
        case '1':

            cout << "Run="; cin >> x;
            z=X;
            if (z == 1) { a = a + x; l++; }
            else if (z == 2) { b = b + x; m++;} else if (z == 3) { c = c + x; n++;} else if (z == 4) { d = d + x; o++;} else if (z == 5) { e = e + x; p++;} else if (z == 6) { f = f + x; q++;} else if (z == 7) { g = g + x; r++;} else if (z == 8) { h = h + x; s++;} else if (z == 9) { i = i + x; t++;} else if (z == 10) { j = j + x; u++;} else if (z == 11) { k = k + x; v++;} else { cout << "Enter correct no!"; }
            run = run + x; ball++;
            w=x;
            if(x==1 || x==3 || x==5)
            {
            int ss;
            ss=bat1;
            bat1=bat2;
            bat2=ss;
            X=bat1;
            }


            Y=bowler1;
            y=Y;
            if (y == 1) { A = A + x; H++;}
            else if (y == 2) { B = B + x; I++; } else if (y == 3) { C = C + x; J++;} else if (y == 4) { D = D + x; K++;} else if (y == 5) { E = E + x; L++;} else if (y == 6) { F = F + x; M++; } else { cout << "Enter correct no!"; }
            break;
        case '2':
            cout << "Run="; cin >> x;
            wicket++;
            ball++; run=run+x;
            z=X;
            if (z == 1) { a = a + x; l++; }
            else if (z == 2) { b = b + x; m++;} else if (z == 3) { c = c + x; n++;} else if (z == 4) { d = d + x; o++;} else if (z == 5) { e = e + x; p++;} else if (z == 6) { f = f + x; q++;} else if (z == 7) { g = g + x; r++;} else if (z == 8) { h = h + x; s++;} else if (z == 9) { i = i + x; t++;} else if (z == 10) { j = j + x; u++;} else if (z == 11) { k = k + x; v++;} else { cout << "Enter correct no!"; }

            y=Y;
            if (y == 1) {A=A+x; H++; w1++;}
            else if (y == 2) {B=B+x; I++; w2++;} else if (y == 3) {C=C+x; J++; w3++;} else if (y == 4) {D=D+x; K++; w4++;} else if (y == 5) {E=E+x; L++; w5++;} else if (y == 6) {F=F+x; M++; w6++;} else { cout << "Enter correct no!"; }

            cout<<"Enter New Batsman no:"; cin>>bat1; X=bat1;
            break;
        case '3':
            cout<<"Enter total Run:"; cin>>x;
            Y=bowler1;
            y=Y;
            if (y == 1) { A++;}
            else if (y == 2) { B++; } else if (y == 3) { C++;} else if (y == 4) { D++;} else if (y == 5) { E++;} else if (y == 6) { F++ ;} else { cout << "Enter correct no!"; }

            run=run+x;
            extra=extra+x;
            break;
        case '4':
            cout << "Enter LegBy run:";
            cin >> x;
            run = run + x;
            z=X;
            if (z == 1) { l++; }
            else if (z == 2) { m++;} else if (z == 3) { n++;} else if (z == 4) { o++;} else if (z == 5) { p++;} else if (z == 6) { q++;} else if (z == 7) { r++;} else if (z == 8) { s++;} else if (z == 9) { t++;} else if (z == 10) { u++;} else if (z == 11) { v++;} else { cout << "Enter correct no!"; }
            if(x==1 || x==3 || x==5)
            {
            int ss;
            ss=bat1;
            bat1=bat2;
            bat2=ss;
            X=bat1;
            }
            Y=bowler1;
            y=Y;
            if (y == 1) { A = A + x; H++;}
            else if (y == 2) { B = B + x; I++; } else if (y == 3) { C = C + x; J++;} else if (y == 4) { D = D + x; K++;} else if (y == 5) { E = E + x; L++;} else if (y == 6) { F = F + x; M++; } else { cout << "Enter correct no!"; }


            extra=extra+x;
            ball++;
            break;
        case '5':
           z=X; y=Y; cout << "Run="; cin >> x;
            if (z == 1) { a = a + x-1; }
            else if (z == 2) { b = b + x-1; } else if (z == 3) { c = c + x-1; } else if (z == 4) { d = d + x-1; } else if (z == 5) { e = e + x-1;} else if (z == 6) { f = f + x-1; } else if (z == 7) { g = g + x-1; } else if (z == 8) { h = h + x-1; } else if (z == 9) { i = i + x-1; } else if (z == 10) { j = j + x-1; } else if (z == 11) { k = k + x-1; } else { cout << "Enter correct no!"; }
            run = run + x;
            if(x==2 || x==4 )
            {
            int ss;
            ss=bat1;
            bat1=bat2;
            bat2=ss;
            X=bat1;
            }

            if (y == 1) { A = A + x; }
            else if (y == 2) { B = B + x;  } else if (y == 3) { C = C + x; } else if (y == 4) { D = D + x; } else if (y == 5) { E = E + x; } else if (y == 6) { F = F + x; } else { cout << "Enter correct no!"; }
            extra++;
            break;
        case '6':
            z=X;
            if (z == 1) { l++; }
            else if (z == 2) { m++;} else if (z == 3) { n++;} else if (z == 4) { o++;} else if (z == 5) { p++;} else if (z == 6) { q++;} else if (z == 7) { r++;} else if (z == 8) { s++;} else if (z == 9) { t++;} else if (z == 10) { u++;} else if (z == 11) { v++;} else { cout << "Enter correct no!"; }

            y=Y;
            if (y == 1) { H++;}
            else if (y == 2) { I++; } else if (y == 3) { J++;} else if (y == 4) { K++;} else if (y == 5) { L++;} else if (y == 6) { M++; } else { cout << "Enter correct no!"; }

            ball++;
            dotball++;
            break;
        case '7':
            int ss;
            ss=bat1;
            bat1=bat2;
            bat2=ss;
            X=bat1;
            break;
        case '8':
            cout<<"Run:"; cin>>x;
                z=X;
                if (z == 1) { a = a + x; l++; }
                else if (z == 2) { b = b + x; m++;} else if (z == 3) { c = c + x; n++;} else if (z == 4) { d = d + x; o++;} else if (z == 5) { e = e + x; p++;} else if (z == 6) { f = f + x; q++;} else if (z == 7) { g = g + x; r++;} else if (z == 8) { h = h + x; s++;} else if (z == 9) { i = i + x; t++;} else if (z == 10) { j = j + x; u++;} else if (z == 11) { k = k + x; v++;} else { cout << "Enter correct no!"; }
                run = run + x; ball++;
                Y=bowler1;
                y=Y;
                if (y == 1) { A = A + x; H++;}
                else if (y == 2) { B = B + x; I++; } else if (y == 3) { C = C + x; J++;} else if (y == 4) { D = D + x; K++;} else if (y == 5) { E = E + x; L++;} else if (y == 6) { F = F + x; M++; } else { cout << "Enter correct no!"; }

                wicket++;
                cout<<"Enter current 2 Batsman no:"<<endl;
                cout<<"Strike:"; cin>>bat1; X=bat1;
                cout<<"Non-Strike:"; cin>>bat2;

            break;


        case '9':
            char OP;
            cout << " 1.Run   ";
            cout << "\t2.Wicket";
            cout << "\t3.Extra ";
            cout << "\t4.DotBall";
            cout << "\t5.Personal_Batting";
            cout << "\t6.Personal_Bowling";
            cout << "\t7.Ball";
            cout << "\t\t8.Over";
            cout << "\t\t9.Target"<<endl;
            cout << "Enter op:"; cin >> OP;
           /* if (OP!=1 && OP!=2 && OP!=3 && OP!=4 && OP!=5  && OP!=6 && OP!=7 && OP!=8 && OP!=9)
               {
                   cout<<"Enter Valid op:"; cin >> OP;
               } */

                  switch (OP)
                            {
                             case '1':
                                       cout << "Run(+/-)="; cin >> x;
                                       run=run+x;
                                     break;
                                 case '2':
                                        cout<<"wicket(+/-)="; cin>>x;
                                        wicket=wicket+x;
                                      break;
                                case '3':
                                       cout << "Extra Run(+/-)="; cin >> x;
                                       extra=extra+x;
                                    break;
                                case '4':
                                      cout<<"Enter DotBall(+/-)="; cin>> x;
                                      dotball=dotball+x;
                                    break;
                                case '5':
                                        cout << "Enter Batsman_no:"; cin >> z; cout << "Run(+/-)="; cin >> x; cout<<"Ball(+/-)="; cin>>ii;
                                        if (z == 1) { a = a + x; l=l+ii;}
                                        else if (z == 2) { b = b + x; m=m+ii;} else if (z == 3) { c = c + x; n=n+ii;} else if (z == 4) { d = d + x; o=o+ii;} else if (z == 5) { e = e + x; p=p+ii;} else if (z == 6) { f = f + x; q=q+ii;} else if (z == 7) { g = g + x; r=r+ii;} else if (z == 8) { h = h + x; s=s+ii;} else if (z == 9) { i = i + x; t=t+ii;} else if (z == 10) { j = j + x; u=u+ii;} else if (z == 11) { k = k + x; v=v+ii;} else { cout << "Enter correct no!"; }
                                    break;
                                case '6':
                                        cout << "Enter Bowlers no:"; cin >> y; cout << "Run(+/-)="; cin >> x; cout<<"Ball(+/-)="; cin >> z;
                                        if (y == 1) { A = A + x; H=H+z; }
                                        else if (y == 2) { B = B + x; I=I+z; } else if (y == 3) { C = C + x; J=J+z; } else if (y == 4) { D = D + x; K=K+z; } else if (y == 5) { E = E + x; L=L+z; } else if (y == 6) { F = F + x; M=M+z; } else { cout << "Enter correct no!"; }
                                    break;
                                case '7':
                                      cout<<"Enter Ball(+/-)="; cin>> x;
                                      ball=ball+x;
                                    break;
                                case '8':
                                      cout<<"Enter over(+/-)="; cin>> x;
                                      over=over+x;
                                    break;
                                case '9':
                                      cout<<"Enter Target="; cin>> target;
                                    break;
                                default:
                                        cout<<"Enter Valid no:"; cin>>OP;

                    }

                break;

            default:
                cout << "\tInvalid number!";cin>>op;

        }

        runrate=(double)run/(over+(double)ball/6);


        if (a!=0 || l!=0){s1=((float)a/(float)l)*100;}
        if (b!=0 || m!=0){s2=((float)b/(float)m)*100;}
        if (c!=0 || n!=0){s3=((float)c/(float)n)*100;}
        if (d!=0 || o!=0){s4=((float)d/(float)o)*100;}
        if (e!=0 || p!=0){s5=((float)e/(float)p)*100;}
        if (f!=0 || q!=0){s6=((float)f/(float)q)*100;}
        if (g!=0 || r!=0){s7=((float)g/(float)r)*100;}
        if (h!=0 || s!=0){s8=((float)h/(float)s)*100;}
        if (i!=0 || t!=0){s9=((float)i/(float)t)*100;}
        if (j!=0 || u!=0){s10=((float)j/(float)u)*100;}
        if (k!=0 || v!=0){s11=((float)k/(float)v)*100;}

  }
};

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    ScoreBoard scoreboard;
    scoreboard.initial();
    while (true) {
        scoreboard.display();
    }
    return 0;
}
