// POP 2017-12-19 projekt 1 Nowakowski Piotr EiT Grupa 5 171561, CodeBlocks 13.12 for Mac, kompilator GNU GCC

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

char Plansza[15][15];

void Krawedz()
{
    cout<<"=========="<<endl;
}

void Puste()
{
    cout<<"|        |"<<endl;
}

void Dwa()
{
    cout<<"|  *  *  |"<<endl;
}

void Srodek()
{
    cout<<"|    *   |"<<endl;
}

int RysujKostke(int liczba_oczek)  //Funkcja rzucająca kostką i rysująca ją
{
    int a;
    cout<<"Wpisz 1, aby rzucic kostka: ";
    cin>>a;
    cout<<endl;

    while (a!=1)
    {
    cout<<"Wpisz 1, aby rzucic kostka: ";
    cin>>a;
    cout<<endl;
    }


        liczba_oczek = 1 + rand() % 6;
        cout<<"Liczba oczek = "<<liczba_oczek<<endl;

    if(liczba_oczek==1)
    {
        Krawedz();
        Puste();
        Puste();
        Srodek();
        Puste();
        Puste();
        Krawedz();
    }
    if(liczba_oczek==2)
    {
        Krawedz();
        Puste();
        Puste();
        Dwa();
        Puste();
        Puste();
        Krawedz();
    }
    if(liczba_oczek==3)
    {
        Krawedz();
        Srodek();
        Puste();
        Srodek();
        Puste();
        Srodek();
        Krawedz();
    }
    if(liczba_oczek==4)
    {
        Krawedz();
        Puste();
        Dwa();
        Puste();
        Dwa();
        Puste();
        Krawedz();
    }
    if(liczba_oczek==5)
    {
        Krawedz();
        Puste();
        Dwa();
        Srodek();
        Dwa();
        Puste();
        Krawedz();
    }
    if(liczba_oczek==6)
    {
        Krawedz();
        Dwa();
        Puste();
        Dwa();
        Puste();
        Dwa();
        Krawedz();
    }

    cout<<endl;

return liczba_oczek;

}

void RysujPlansze()
{
    cout<<endl;
    for (int i=0; i<11; i++)
    {
        for (int j=0; j<13; j++)
        {
            cout<<Plansza[i][j];
        }
        cout<<endl;
    }
}

int PoczatekGry(int liczba_oczek)
{

 for (int i=0;i<3;i++)
 {  int a=RysujKostke(liczba_oczek);
     if (a==6)
        {return a;
        break;}
 }
}

struct wspolrzedne
{
       int i1, j1, i2, j2, i3, j3, i4, j4;
}ruch1, ruch2, ruch3, ruch4;

void wyjscie1(char Plansza[15][15])
{
    if(Plansza[0][0]=='A')
    {
        Plansza[4][1]='A';
        Plansza[0][0]='O';
    }

    else if(Plansza[0][1]=='A')
    {
        Plansza[4][1]='A';
        Plansza[0][1]='O';
    }

    else if(Plansza[1][0]=='A')
    {
        Plansza[4][1]='A';
        Plansza[1][0]='O';
    }

    else if(Plansza[1][1]=='A')
    {
        Plansza[4][1]='A';
        Plansza[1][1]='O';
    }
}

void wyjscie2(char Plansza[15][15])
{
    if(Plansza[0][12]=='B')
    {
        Plansza[0][7]='B';
        Plansza[0][12]='O';
    }

    else if(Plansza[1][12]=='B')
    {
        Plansza[0][7]='B';
        Plansza[1][12]='O';
    }

    else if(Plansza[0][11]=='B')
    {
        Plansza[0][7]='B';
        Plansza[0][11]='O';
    }

    else if(Plansza[1][11]=='B')
    {
        Plansza[0][7]='B';
        Plansza[1][11]='O';
    }
}

void wyjscie3(char Plansza[15][15])
{
    if(Plansza[10][11]=='C')
    {
        Plansza[6][11]='C';
        Plansza[10][11]='O';
    }

    else if(Plansza[9][11]=='C')
    {
        Plansza[6][11]='C';
        Plansza[9][11]='O';
    }

    else if(Plansza[10][12]=='C')
    {
        Plansza[6][11]='C';
        Plansza[10][12]='O';
    }

    else if(Plansza[9][12]=='C')
    {
        Plansza[6][11]='C';
        Plansza[9][12]='O';
    }
}

void wyjscie4(char Plansza[15][15])
{
    if(Plansza[9][1]=='D')
    {
        Plansza[10][5]='D';
        Plansza[9][1]='O';
    }

    else if(Plansza[10][0]=='D')
    {
        Plansza[10][5]='D';
        Plansza[10][0]='O';
    }

    else if(Plansza[9][0]=='D')
    {
        Plansza[10][5]='D';
        Plansza[9][0]='O';
    }

    else if(Plansza[10][1]=='D')
    {
        Plansza[10][5]='D';
        Plansza[10][1]='O';
    }
}

void zbicie1 (char Plansza[15][15])
{
   if(Plansza[0][1]=='O') Plansza[0][1]='A';
   else if(Plansza[1][0]=='O') Plansza[1][0]='A';
   else if(Plansza[1][1]=='O') Plansza[1][1]='A';
   else if(Plansza[0][0]=='O') Plansza[0][0]='A';
}

void zbicie2 (char Plansza[15][15])
{
   if(Plansza[0][1]=='O') Plansza[0][1]='B';
   if(Plansza[0][11]=='O') Plansza[0][11]='B';
   else if(Plansza[1][12]=='O') Plansza[1][12]='B';
   else if(Plansza[1][11]=='O') Plansza[1][11]='B';
   else if(Plansza[0][12]=='O') Plansza[0][12]='B';
}

void zbicie3 (char Plansza[15][15])
{
    if(Plansza[10][11]=='O') Plansza[10][11]='C';
    else if(Plansza[9][12]=='O') Plansza[9][12]='C';
    else if(Plansza[9][11]=='O') Plansza[9][11]='C';
    else if(Plansza[10][12]=='O') Plansza[10][12]='C';
}

void zbicie4 (char Plansza[15][15])
{
    if(Plansza[9][1]=='O') Plansza[9][1]='D';
    else if(Plansza[10][0]=='O') Plansza[10][0]='D';
    else if(Plansza[10][1]=='O') Plansza[10][1]='D';
    else if(Plansza[9][0]=='O') Plansza[9][0]='D';
};

int main()
{
    for (int i=0; i<12; i++)
    {
        for (int j=0; j<13; j++)
        {
            Plansza[0][0]='A';
            Plansza[0][1]='A';
            Plansza[1][0]='A';
            Plansza[1][1]='A';

            Plansza[0][12]='B';
            Plansza[0][11]='B';
            Plansza[1][12]='B';
            Plansza[1][11]='B';

            Plansza[10][11]='C';
            Plansza[10][12]='C';
            Plansza[9][12]='C';
            Plansza[9][11]='C';

            Plansza[9][1]='D';
            Plansza[10][0]='D';
            Plansza[10][1]='D';
            Plansza[9][0]='D';

            Plansza[4][j]='O';
            Plansza[5][j]='O';
            Plansza[6][j]='O';
            Plansza[i][5]='O';
            Plansza[i][6]='O';
            Plansza[i][7]='O';

            Plansza[5][2]='1';
            Plansza[5][3]='1';
            Plansza[5][4]='1';
            Plansza[5][5]='1';

            Plansza[2][6]='2';
            Plansza[3][6]='2';
            Plansza[4][6]='2';
            Plansza[1][6]='2';

            Plansza[5][7]='3';
            Plansza[5][8]='3';
            Plansza[5][9]='3';
            Plansza[5][10]='3';

            Plansza[9][6]='4';
            Plansza[6][6]='4';
            Plansza[7][6]='4';
            Plansza[8][6]='4';

            Plansza[5][6]=' ';
            Plansza[5][0]=' ';
            Plansza[6][0]=' ';
            Plansza[4][0]=' ';
            Plansza[5][12]=' ';
            Plansza[6][12]=' ';
            Plansza[4][12]=' ';
            Plansza[i][j]=' ';
        }
    }
    srand(time(NULL));

    // Wypisywanie tablicy struktur zawierającej wspolrzedne kolejnych pozycji każdego gracza

    wspolrzedne wspolrzedne[65];

    wspolrzedne[10].i4=wspolrzedne[20].i3=wspolrzedne[30].i2=wspolrzedne[0].i1=4;
    wspolrzedne[10].j4=wspolrzedne[20].j3=wspolrzedne[30].j2=wspolrzedne[0].j1=1;
    wspolrzedne[11].i4=wspolrzedne[21].i3=wspolrzedne[31].i2=wspolrzedne[1].i1=4;
    wspolrzedne[11].j4=wspolrzedne[21].j3=wspolrzedne[31].j2=wspolrzedne[1].j1=2;
    wspolrzedne[12].i4=wspolrzedne[22].i3=wspolrzedne[32].i2=wspolrzedne[2].i1=4;
    wspolrzedne[12].j4=wspolrzedne[22].j3=wspolrzedne[32].j2=wspolrzedne[2].j1=3;
    wspolrzedne[13].i4=wspolrzedne[23].i3=wspolrzedne[33].i2=wspolrzedne[3].i1=4;
    wspolrzedne[13].j4=wspolrzedne[23].j3=wspolrzedne[33].j2=wspolrzedne[3].j1=4;
    wspolrzedne[14].i4=wspolrzedne[24].i3=wspolrzedne[34].i2=wspolrzedne[4].i1=4;
    wspolrzedne[14].j4=wspolrzedne[24].j3=wspolrzedne[34].j2=wspolrzedne[4].j1=5;
    wspolrzedne[15].i4=wspolrzedne[25].i3=wspolrzedne[35].i2=wspolrzedne[5].i1=3;
    wspolrzedne[15].j4=wspolrzedne[25].j3=wspolrzedne[35].j2=wspolrzedne[5].j1=5;
    wspolrzedne[16].i4=wspolrzedne[26].i3=wspolrzedne[36].i2=wspolrzedne[6].i1=2;
    wspolrzedne[16].j4=wspolrzedne[26].j3=wspolrzedne[36].j2=wspolrzedne[6].j1=5;
    wspolrzedne[17].i4=wspolrzedne[27].i3=wspolrzedne[37].i2=wspolrzedne[7].i1=1;
    wspolrzedne[17].j4=wspolrzedne[27].j3=wspolrzedne[37].j2=wspolrzedne[7].j1=5;
    wspolrzedne[18].i4=wspolrzedne[28].i3=wspolrzedne[38].i2=wspolrzedne[8].i1=0;
    wspolrzedne[18].j4=wspolrzedne[28].j3=wspolrzedne[38].j2=wspolrzedne[8].j1=5;
    wspolrzedne[19].i4=wspolrzedne[29].i3=wspolrzedne[39].i2=wspolrzedne[9].i1=0;
    wspolrzedne[19].j4=wspolrzedne[29].j3=wspolrzedne[39].j2=wspolrzedne[9].j1=6;
    wspolrzedne[20].i4=wspolrzedne[30].i3=wspolrzedne[0].i2=wspolrzedne[10].i1=0;
    wspolrzedne[20].j4=wspolrzedne[30].j3=wspolrzedne[0].j2=wspolrzedne[10].j1=7;
    wspolrzedne[21].i4=wspolrzedne[31].i3=wspolrzedne[1].i2=wspolrzedne[11].i1=1;
    wspolrzedne[21].j4=wspolrzedne[31].j3=wspolrzedne[1].j2=wspolrzedne[11].j1=7;
    wspolrzedne[22].i4=wspolrzedne[32].i3=wspolrzedne[2].i2=wspolrzedne[12].i1=2;
    wspolrzedne[22].j4=wspolrzedne[32].j3=wspolrzedne[2].j2=wspolrzedne[12].j1=7;
    wspolrzedne[23].i4=wspolrzedne[33].i3=wspolrzedne[3].i2=wspolrzedne[13].i1=3;
    wspolrzedne[23].j4=wspolrzedne[33].j3=wspolrzedne[3].j2=wspolrzedne[13].j1=7;
    wspolrzedne[24].i4=wspolrzedne[34].i3=wspolrzedne[4].i2=wspolrzedne[14].i1=4;
    wspolrzedne[24].j4=wspolrzedne[34].j3=wspolrzedne[4].j2=wspolrzedne[14].j1=7;
    wspolrzedne[25].i4=wspolrzedne[35].i3=wspolrzedne[5].i2=wspolrzedne[15].i1=4;
    wspolrzedne[25].j4=wspolrzedne[35].j3=wspolrzedne[5].j2=wspolrzedne[15].j1=8;
    wspolrzedne[26].i4=wspolrzedne[36].i3=wspolrzedne[6].i2=wspolrzedne[16].i1=4;
    wspolrzedne[26].j4=wspolrzedne[36].j3=wspolrzedne[6].j2=wspolrzedne[16].j1=9;
    wspolrzedne[27].i4=wspolrzedne[37].i3=wspolrzedne[7].i2=wspolrzedne[17].i1=4;
    wspolrzedne[27].j4=wspolrzedne[37].j3=wspolrzedne[7].j2=wspolrzedne[17].j1=10;
    wspolrzedne[28].i4=wspolrzedne[38].i3=wspolrzedne[8].i2=wspolrzedne[18].i1=4;
    wspolrzedne[28].j4=wspolrzedne[38].j3=wspolrzedne[8].j2=wspolrzedne[18].j1=11;
    wspolrzedne[29].i4=wspolrzedne[39].i3=wspolrzedne[9].i2=wspolrzedne[19].i1=5;
    wspolrzedne[29].j4=wspolrzedne[39].j3=wspolrzedne[9].j2=wspolrzedne[19].j1=11;
    wspolrzedne[30].i4=wspolrzedne[0].i3=wspolrzedne[10].i2=wspolrzedne[20].i1=6;
    wspolrzedne[30].j4=wspolrzedne[0].j3=wspolrzedne[10].j2=wspolrzedne[20].j1=11;
    wspolrzedne[31].i4=wspolrzedne[1].i3=wspolrzedne[11].i2=wspolrzedne[21].i1=6;
    wspolrzedne[31].j4=wspolrzedne[1].j3=wspolrzedne[11].j2=wspolrzedne[21].j1=10;
    wspolrzedne[32].i4=wspolrzedne[2].i3=wspolrzedne[12].i2=wspolrzedne[22].i1=6;
    wspolrzedne[32].j4=wspolrzedne[2].j3=wspolrzedne[12].j2=wspolrzedne[22].j1=9;
    wspolrzedne[33].i4=wspolrzedne[3].i3=wspolrzedne[13].i2=wspolrzedne[23].i1=6;
    wspolrzedne[33].j4=wspolrzedne[3].j3=wspolrzedne[13].j2=wspolrzedne[23].j1=8;
    wspolrzedne[34].i4=wspolrzedne[4].i3=wspolrzedne[14].i2=wspolrzedne[24].i1=6;
    wspolrzedne[34].j4=wspolrzedne[4].j3=wspolrzedne[14].j2=wspolrzedne[24].j1=7;
    wspolrzedne[35].i4=wspolrzedne[5].i3=wspolrzedne[15].i2=wspolrzedne[25].i1=7;
    wspolrzedne[35].j4=wspolrzedne[5].j3=wspolrzedne[15].j2=wspolrzedne[25].j1=7;
    wspolrzedne[36].i4=wspolrzedne[6].i3=wspolrzedne[16].i2=wspolrzedne[26].i1=8;
    wspolrzedne[36].j4=wspolrzedne[6].j3=wspolrzedne[16].j2=wspolrzedne[26].j1=7;
    wspolrzedne[37].i4=wspolrzedne[7].i3=wspolrzedne[17].i2=wspolrzedne[27].i1=9;
    wspolrzedne[37].j4=wspolrzedne[7].j3=wspolrzedne[17].j2=wspolrzedne[27].j1=7;
    wspolrzedne[38].i4=wspolrzedne[8].i3=wspolrzedne[18].i2=wspolrzedne[28].i1=10;
    wspolrzedne[38].j4=wspolrzedne[8].j3=wspolrzedne[18].j2=wspolrzedne[28].j1=7;
    wspolrzedne[39].i4=wspolrzedne[9].i3=wspolrzedne[19].i2=wspolrzedne[29].i1=10;
    wspolrzedne[39].j4=wspolrzedne[9].j3=wspolrzedne[19].j2=wspolrzedne[29].j1=6;
    wspolrzedne[0].i4=wspolrzedne[10].i3=wspolrzedne[20].i2=wspolrzedne[30].i1=10;
    wspolrzedne[0].j4=wspolrzedne[10].j3=wspolrzedne[20].j2=wspolrzedne[30].j1=5;
    wspolrzedne[1].i4=wspolrzedne[11].i3=wspolrzedne[21].i2=wspolrzedne[31].i1=9;
    wspolrzedne[1].j4=wspolrzedne[11].j3=wspolrzedne[21].j2=wspolrzedne[31].j1=5;
    wspolrzedne[2].i4=wspolrzedne[12].i3=wspolrzedne[22].i2=wspolrzedne[32].i1=8;
    wspolrzedne[2].j4=wspolrzedne[12].j3=wspolrzedne[22].j2=wspolrzedne[32].j1=5;
    wspolrzedne[3].i4=wspolrzedne[13].i3=wspolrzedne[23].i2=wspolrzedne[33].i1=7;
    wspolrzedne[3].j4=wspolrzedne[13].j3=wspolrzedne[23].j2=wspolrzedne[33].j1=5;
    wspolrzedne[4].i4=wspolrzedne[14].i3=wspolrzedne[24].i2=wspolrzedne[34].i1=6;
    wspolrzedne[4].j4=wspolrzedne[14].j3=wspolrzedne[24].j2=wspolrzedne[34].j1=5;
    wspolrzedne[5].i4=wspolrzedne[15].i3=wspolrzedne[25].i2=wspolrzedne[35].i1=6;
    wspolrzedne[5].j4=wspolrzedne[15].j3=wspolrzedne[25].j2=wspolrzedne[35].j1=4;
    wspolrzedne[6].i4=wspolrzedne[16].i3=wspolrzedne[26].i2=wspolrzedne[36].i1=6;
    wspolrzedne[6].j4=wspolrzedne[16].j3=wspolrzedne[26].j2=wspolrzedne[36].j1=3;
    wspolrzedne[7].i4=wspolrzedne[17].i3=wspolrzedne[27].i2=wspolrzedne[37].i1=6;
    wspolrzedne[7].j4=wspolrzedne[17].j3=wspolrzedne[27].j2=wspolrzedne[37].j1=2;
    wspolrzedne[8].i4=wspolrzedne[18].i3=wspolrzedne[28].i2=wspolrzedne[38].i1=6;
    wspolrzedne[8].j4=wspolrzedne[18].j3=wspolrzedne[28].j2=wspolrzedne[38].j1=1;
    wspolrzedne[9].i4=wspolrzedne[19].i3=wspolrzedne[29].i2=wspolrzedne[39].i1=5;
    wspolrzedne[9].j4=wspolrzedne[19].j3=wspolrzedne[29].j2=wspolrzedne[39].j1=1;

    wspolrzedne[40].i1=5;
    wspolrzedne[40].j1=2;
    wspolrzedne[41].i1=5;
    wspolrzedne[41].j1=3;
    wspolrzedne[42].i1=5;
    wspolrzedne[42].j1=4;
    wspolrzedne[43].i1=5;
    wspolrzedne[43].j1=5;

    wspolrzedne[40].i2=1;
    wspolrzedne[40].j2=6;
    wspolrzedne[41].i2=2;
    wspolrzedne[41].j2=6;
    wspolrzedne[42].i2=3;
    wspolrzedne[42].j2=6;
    wspolrzedne[43].i2=4;
    wspolrzedne[43].j2=6;

    wspolrzedne[40].i3=5;
    wspolrzedne[40].j3=7;
    wspolrzedne[41].i3=5;
    wspolrzedne[41].j3=8;
    wspolrzedne[42].i3=5;
    wspolrzedne[42].j3=9;
    wspolrzedne[43].i3=5;
    wspolrzedne[43].j3=10;

    wspolrzedne[40].i4=6;
    wspolrzedne[40].j4=6;
    wspolrzedne[41].i4=7;
    wspolrzedne[41].j4=6;
    wspolrzedne[42].i4=8;
    wspolrzedne[42].j4=6;
    wspolrzedne[43].i4=9;
    wspolrzedne[43].j4=6;



    int liczba_graczy, oczka, kolej, wybor, odl, jest_na_planszy1=0, jest_na_planszy2=0, jest_na_planszy3=0, jest_na_planszy4=0, miejsce=1, w_domku1=0, w_domku2=0, w_domku3=0, w_domku4=0;
    bool gra=1, w_grze1, w_grze2, w_grze3, w_grze4;

    ruch1.i1=0;  //Zmienne zawierajace pozycje startowe graczy
    ruch1.j1=0;

    ruch2.i2=0;
    ruch2.j2=0;

    ruch3.i3=0;
    ruch3.j3=0;

    ruch4.i4=0;
    ruch4.j4=0;


    cout<<"Podaj liczbe graczy (maksymalnie 4): ";
    cin>>liczba_graczy;

    while (liczba_graczy>4)
    {
        cout<<"Podaj liczbe graczy (maksymalnie 4): ";
        cin>>liczba_graczy;
    }

    if (liczba_graczy==1) w_grze1=1;
    if (liczba_graczy==2) {w_grze1=1; w_grze2=1;}
    if (liczba_graczy==3) {w_grze1=1; w_grze2=1; w_grze3=1;}
    if (liczba_graczy==4) {w_grze1=1; w_grze2=1; w_grze3=1; w_grze4=1;}


    for(int i=0; i<liczba_graczy+1; i++)  //---Wychodzenie pionkiem ze schowka na początku gry
    {
        if(i==liczba_graczy) i=0;

        cout<<"Rzuca gracz: "<<i+1<<endl;
        if (PoczatekGry(oczka)==6)
            {cout<<endl<<"Gracz "<<i+1<<" wykonuje ruch"<<endl;

            kolej=i+1;

            if(i+1==1)  {wyjscie1(Plansza);
                        jest_na_planszy1=1;}

            else if (i+1==2) {wyjscie2(Plansza);
                              jest_na_planszy2=1;}

            else if (i+1==3) {wyjscie3(Plansza);
                              jest_na_planszy3=1;}

            else if (i+1==4) {wyjscie4(Plansza);
                              jest_na_planszy4=1;}

            RysujPlansze();

            break;}
        cout<<endl;
    }

    while(gra==1)    // pętla gry
{
    if(w_grze1)
    {
        if(kolej==1)
        {
            if((jest_na_planszy1)>=1)
            {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            oczka=RysujKostke(oczka);

            while(oczka==6)
            {
                 cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                 cin>>wybor;

                while(wybor!=1 && wybor!=2)
                {   cout<<"Bledny wybor!"<<endl;
                    cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                    cin>>wybor;
                }

            if (wybor==2)
            {
                if ((Plansza[wspolrzedne[0].i1][wspolrzedne[0].j1]=='A') || (w_domku1+jest_na_planszy1==4))
                {cout<<"Nie mozesz wystawic pionka!"<<endl;
                wybor=1;}

                else
                {
                 wyjscie1(Plansza);
                 jest_na_planszy1++;
                 RysujPlansze();
                 oczka=RysujKostke(oczka);
                }
            }

           if (wybor==1)
                {
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]!='A')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch1.i1=odl+oczka;
                ruch1.j1=odl+oczka;

                if(ruch1.i1>43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]!='A') {ruch1.i1=43; ruch1.j1=43;} // warunki zabezpieczajace przed wyjscietablice struktur
                if((ruch1.i1>43 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]!='A') || (ruch1.i1==43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]=='A')) {ruch1.i1=42; ruch1.j1=42;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]!='A') || (ruch1.i1==42 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]=='A')) {ruch1.i1=41; ruch1.j1=41;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[40].i1][wspolrzedne[40].j1]!='A')  || (ruch1.i1==41 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]=='A')) {ruch1.i1=40; ruch1.j1=40;}

                while(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='A')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                    while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]!='A')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch1.i1=odl+oczka;
                ruch1.j1=odl+oczka;
            }

                if(ruch1.i1>43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]!='A') {ruch1.i1=43; ruch1.j1=43;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]!='A') || (ruch1.i1==43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]=='A')) {ruch1.i1=42; ruch1.j1=42;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]!='A') || (ruch1.i1==42 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]=='A')) {ruch1.i1=41; ruch1.j1=41;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[40].i1][wspolrzedne[40].j1]!='A')  || (ruch1.i1==41 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]=='A')) {ruch1.i1=40; ruch1.j1=40;}

                if(odl>39) Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]='1';
                else Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]='O';

                if(ruch1.i1>39 && odl<40) {jest_na_planszy1--; w_domku1++;}

                if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

                if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

                if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

                Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]='A';

                RysujPlansze();
                oczka=RysujKostke(oczka);
            }
            }

        if(oczka!=6)
        {
            cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]!='A')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch1.i1=odl+oczka;
                ruch1.j1=odl+oczka;

                if(ruch1.i1>43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]!='A') {ruch1.i1=43; ruch1.j1=43;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]!='A') || (ruch1.i1==43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]=='A')) {ruch1.i1=42; ruch1.j1=42;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]!='A') || (ruch1.i1==42 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]=='A')) {ruch1.i1=41; ruch1.j1=41;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[40].i1][wspolrzedne[40].j1]!='A')  || (ruch1.i1==41 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]=='A')) {ruch1.i1=40; ruch1.j1=40;}

                while(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='A')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                    while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]!='A')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch1.i1=odl+oczka;
                ruch1.j1=odl+oczka;
            }

                if(ruch1.i1>43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]!='A') {ruch1.i1=43; ruch1.j1=43;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]!='A') || (ruch1.i1==43 && Plansza[wspolrzedne[43].i1][wspolrzedne[43].j1]=='A')) {ruch1.i1=42; ruch1.j1=42;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]!='A') || (ruch1.i1==42 && Plansza[wspolrzedne[42].i1][wspolrzedne[42].j1]=='A')) {ruch1.i1=41; ruch1.j1=41;}
                if((ruch1.i1>43 && Plansza[wspolrzedne[40].i1][wspolrzedne[40].j1]!='A')  || (ruch1.i1==41 && Plansza[wspolrzedne[41].i1][wspolrzedne[41].j1]=='A')) {ruch1.i1=40; ruch1.j1=40;}

            if(odl>39) Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]='1';
            else Plansza[wspolrzedne[odl].i1][wspolrzedne[odl].j1]='O';

            if(ruch1.i1>39 && odl<40) {jest_na_planszy1--; w_domku1++;}


             if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

            if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

            if(Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

            Plansza[wspolrzedne[ruch1.i1].i1][wspolrzedne[ruch1.j1].j1]='A';
        }

            RysujPlansze();

            if((w_domku1)==4)
                {
                    cout<<endl<<"Gracz "<<kolej<<" zakonczyl gre na "<<miejsce<<" miejscu"<<endl;
                    w_grze1=0;
                    miejsce++;
                }



        if (kolej+1>liczba_graczy) kolej=1;
        else kolej++;
        }

        else
        {
         cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            for (int i=0; i<3; i++)
                {oczka=RysujKostke(oczka);
                    if(oczka==6)
                        {
                        wyjscie1(Plansza);
                        jest_na_planszy1=1;
                        RysujPlansze();
                        kolej=1;
                        break;
                        }
                    else
                    {
                        if (w_grze2==0 && w_grze3==0 && w_grze4==0) kolej=1;
                        else
                        {
                        if (kolej+1>4) kolej=1;
                        else kolej=2;
                        }
                    }
                }
        }

    }
    }

    if(w_grze2)
    {
      if(kolej==2)
      {
        if(jest_na_planszy2>=1)
        {
        cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
        oczka=RysujKostke(oczka);

           while(oczka==6)
            {

                 cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                 cin>>wybor;

                while(wybor!=1 && wybor!=2)
                {   cout<<"Bledny wybor!"<<endl;
                    cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                    cin>>wybor;
                }

            if (wybor==2)
            {
                if ((Plansza[wspolrzedne[0].i2][wspolrzedne[0].j2]=='B') || (jest_na_planszy2+w_domku2==4))
                {cout<<"Nie mozesz wystawic pionka!"<<endl;
                wybor=1;}

                else
                {
                 wyjscie2(Plansza);
                 jest_na_planszy2++;
                 RysujPlansze();
                 oczka=RysujKostke(oczka);
                }
            }

           if (wybor==1)
                {
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]!='B')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

            ruch2.i2=odl+oczka;
            ruch2.j2=odl+oczka;

            if(ruch2.i2>43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]!='B') {ruch2.i2=43; ruch2.j2=43;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]!='B') || (ruch2.i2==43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]=='B')) {ruch2.i2=42; ruch2.j2=42;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]!='B') || (ruch2.i2==42 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]=='B')) {ruch2.i2=41; ruch2.j2=41;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[40].i2][wspolrzedne[40].j2]!='B') || (ruch2.i2==41 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]=='B')) {ruch2.i2=40; ruch2.j2=40;}

            while(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='B')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                    while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]!='B')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch2.i2=odl+oczka;
                ruch2.j2=odl+oczka;
            }

            if(ruch2.i2>43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]!='B') {ruch2.i2=43; ruch2.j2=43;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]!='B') || (ruch2.i2==43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]=='B')) {ruch2.i2=42; ruch2.j2=42;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]!='B') || (ruch2.i2==42 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]=='B')) {ruch2.i2=41; ruch2.j2=41;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[40].i2][wspolrzedne[40].j2]!='B') || (ruch2.i2==41 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]=='B')) {ruch2.i2=40; ruch2.j2=40;}

            if(odl>39) Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]='2';
            else Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]='O';

            if(ruch2.i2>39 && odl<40) {jest_na_planszy2--; w_domku2++;}

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

            Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]='B';

            RysujPlansze();
            oczka=RysujKostke(oczka);
            }
            }
        if(oczka!=6)
        {
        cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]!='B')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch2.i2=odl+oczka;
                ruch2.j2=odl+oczka;

            if(ruch2.i2>43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]!='B') {ruch2.i2=43; ruch2.j2=43;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]!='B') || (ruch2.i2==43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]=='B')) {ruch2.i2=42; ruch2.j2=42;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]!='B') || (ruch2.i2==42 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]=='B')) {ruch2.i2=41; ruch2.j2=41;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[40].i2][wspolrzedne[40].j2]!='B') || (ruch2.i2==41 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]=='B')) {ruch2.i2=40; ruch2.j2=40;}

                while(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='B')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                    while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]!='B')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch2.i2=odl+oczka;
                ruch2.j2=odl+oczka;
            }


            if(ruch2.i2>43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]!='B') {ruch2.i2=43; ruch2.j2=43;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]!='B') || (ruch2.i2==43 && Plansza[wspolrzedne[43].i2][wspolrzedne[43].j2]=='B')) {ruch2.i2=42; ruch2.j2=42;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]!='B') || (ruch2.i2==42 && Plansza[wspolrzedne[42].i2][wspolrzedne[42].j2]=='B')) {ruch2.i2=41; ruch2.j2=41;}
            if((ruch2.i2>43 && Plansza[wspolrzedne[40].i2][wspolrzedne[40].j2]!='B') || (ruch2.i2==41 && Plansza[wspolrzedne[41].i2][wspolrzedne[41].j2]=='B')) {ruch2.i2=40; ruch2.j2=40;}

           if(odl>39) Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]='2';
            else Plansza[wspolrzedne[odl].i2][wspolrzedne[odl].j2]='O';

            if(ruch2.i2>39 && odl<40) {jest_na_planszy2--; w_domku2++;}

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

            if(Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

        Plansza[wspolrzedne[ruch2.i2].i2][wspolrzedne[ruch2.j2].j2]='B';
        }
        RysujPlansze();

        if((w_domku2)==4)
                {
                    cout<<endl<<"Gracz "<<kolej<<" zakonczyl gre na "<<miejsce<<" miejscu"<<endl;
                    w_grze2=0;
                    miejsce++;
                }


        if (kolej+1>liczba_graczy) kolej=1;
        else kolej++;
        }

          else
        {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            for (int i=0; i<3; i++)
                {oczka=RysujKostke(oczka);
                    if(oczka==6)
                        {
                        wyjscie2(Plansza);
                        jest_na_planszy2=1;
                        RysujPlansze();
                        kolej=2;
                        break;
                        }
                    else
                        {
                        if (kolej+1>4) kolej=1;
                        else kolej=3;
                        }
                }
          }
      }
    }

    if(w_grze3)
    {
        if(kolej==3)
        {
            if(jest_na_planszy3>=1)
            {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            oczka=RysujKostke(oczka);

            while(oczka==6)
            {

                 cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                 cin>>wybor;

                while(wybor!=1 && wybor!=2)
                {   cout<<"Bledny wybor!"<<endl;
                    cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                    cin>>wybor;
                }

            if (wybor==2)
            {
                if ((Plansza[wspolrzedne[0].i3][wspolrzedne[0].j3]=='C') || (w_domku3+jest_na_planszy3==4))
                {cout<<"Nie mozesz wystawic pionka!"<<endl;
                wybor=1;
                }

                else
                {
                 wyjscie3(Plansza);
                 jest_na_planszy3++;
                 RysujPlansze();
                 oczka=RysujKostke(oczka);
                }
            }

           else if (wybor==1)
                {
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]!='C')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch3.i3=odl+oczka;
                ruch3.j3=odl+oczka;

            if(ruch3.i3>43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]!='C') {ruch3.i3=43; ruch3.j3=43;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]!='C') || (ruch3.i3==43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]=='C')) {ruch3.i3=42; ruch3.j3=42;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]!='C') || (ruch3.i3==42 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]=='C')) {ruch3.i3=41; ruch3.j3=41;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[40].i3][wspolrzedne[40].j3]!='C')  || (ruch3.i3==41 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]=='C')) {ruch3.i3=40; ruch3.j3=40;}

                 while(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='C')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]!='C')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch3.i3=odl+oczka;
                ruch3.j3=odl+oczka;
            }

            if(ruch3.i3>43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]!='C') {ruch3.i3=43; ruch3.j3=43;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]!='C') || (ruch3.i3==43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]=='C')) {ruch3.i3=42; ruch3.j3=42;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]!='C') || (ruch3.i3==42 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]=='C')) {ruch3.i3=41; ruch3.j3=41;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[40].i3][wspolrzedne[40].j3]!='C')  || (ruch3.i3==41 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]=='C')) {ruch3.i3=40; ruch3.j3=40;}

            if(odl>39) Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]='3';
            else Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]='O';

            if(ruch3.i3>39 && odl<40) {jest_na_planszy3--; w_domku3++;}

            if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

            if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

             if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

        Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]='C';

            RysujPlansze();
            oczka=RysujKostke(oczka);
        }
        }
        if(oczka!=6)
        {
        cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]!='C')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch3.i3=odl+oczka;
                ruch3.j3=odl+oczka;

            if(ruch3.i3>43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]!='C') {ruch3.i3=43; ruch3.j3=43;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]!='C') || (ruch3.i3==43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]=='C')) {ruch3.i3=42; ruch3.j3=42;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]!='C') || (ruch3.i3==42 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]=='C')) {ruch3.i3=41; ruch3.j3=41;}
            if((ruch3.i3>43 && Plansza[wspolrzedne[40].i3][wspolrzedne[40].j3]!='C')  || (ruch3.i3==41 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]=='C')) {ruch3.i3=40; ruch3.j3=40;}

                while(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='C')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]!='C')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch3.i3=odl+oczka;
                ruch3.j3=odl+oczka;
            }

        if(ruch3.i3>43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]!='C') {ruch3.i3=43; ruch3.j3=43;}
        if((ruch3.i3>43 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]!='C') || (ruch3.i3==43 && Plansza[wspolrzedne[43].i3][wspolrzedne[43].j3]=='C')) {ruch3.i3=42; ruch3.j3=42;}
        if((ruch3.i3>43 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]!='C') || (ruch3.i3==42 && Plansza[wspolrzedne[42].i3][wspolrzedne[42].j3]=='C')) {ruch3.i3=41; ruch3.j3=41;}
        if((ruch3.i3>43 && Plansza[wspolrzedne[40].i3][wspolrzedne[40].j3]!='C')  || (ruch3.i3==41 && Plansza[wspolrzedne[41].i3][wspolrzedne[41].j3]=='C')) {ruch3.i3=40; ruch3.j3=40;}

        if(odl>39) Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]='3';
        else Plansza[wspolrzedne[odl].i3][wspolrzedne[odl].j3]='O';

        if(ruch3.i3>39 && odl<40) {jest_na_planszy3--; w_domku3++;}

        if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

            if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='D')
                {
                    zbicie4 (Plansza);
                    jest_na_planszy4--;
                }

             if(Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

        Plansza[wspolrzedne[ruch3.i3].i3][wspolrzedne[ruch3.j3].j3]='C';
        }

        RysujPlansze();

        if((w_domku3)==4)
                {
                    cout<<"Gracz "<<kolej<<" zakonczyl gre na "<<miejsce<<" miejscu";
                    w_grze3=0;
                    miejsce++;
                }

        if (kolej+1>liczba_graczy) kolej=1;
        else kolej++;
        }
          else
        {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            for (int i=0; i<3; i++)
                {oczka=RysujKostke(oczka);
                    if(oczka==6)
                        {
                        wyjscie3(Plansza);
                        jest_na_planszy3=1;
                        RysujPlansze();
                        kolej=3;
                        break;
                        }
                    else
                    {
                        if (kolej+1>4) kolej=1;
                        else kolej=4;
                    }
                }

             }
         }
    }

    if(w_grze4)
    {
        if(kolej==4)
        {
            if(jest_na_planszy4>=1)
            {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            oczka=RysujKostke(oczka);

            while(oczka==6)
            {
            cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                 cin>>wybor;

                while(wybor!=1 && wybor!=2)
                {   cout<<"Bledny wybor!"<<endl;
                    cout<<"Jesli chcesz wyjsc pionkiem wpisz 2, jesli chcesz ruszyc pionkiem wpisz 1 ";
                    cin>>wybor;
                }

            if (wybor==2)
            {
                if ((Plansza[wspolrzedne[0].i4][wspolrzedne[0].j4]=='D') || (jest_na_planszy4+w_domku4==4))
                {cout<<"Nie mozesz wystawic pionka!"<<endl;
                wybor=1;}

                else
                {
                 wyjscie4(Plansza);
                 jest_na_planszy4++;
                 RysujPlansze();
                 oczka=RysujKostke(oczka);
                }
            }

            if (wybor==1)
                {
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]!='D')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

            ruch4.i4=odl+oczka;
            ruch4.j4=odl+oczka;

            if(ruch4.i4>43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]!='D') {ruch4.i4=43; ruch4.j4=43;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]!='D') || (ruch4.i4==43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]=='D')) {ruch4.i4=42; ruch4.j4=42;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]!='D') || (ruch4.i4==42 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]=='D')) {ruch4.i4=41; ruch4.j4=41;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[40].i4][wspolrzedne[40].j4]!='D')  || (ruch4.i4==41 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]=='D')) {ruch4.i4=40; ruch4.j4=40;}

            while(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='D')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                 while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]!='D')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch4.i4=odl+oczka;
                ruch4.j4=odl+oczka;
            }

            if(ruch4.i4>43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]!='D') {ruch4.i4=43; ruch4.j4=43;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]!='D') || (ruch4.i4==43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]=='D')) {ruch4.i4=42; ruch4.j4=42;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]!='D') || (ruch4.i4==42 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]=='D')) {ruch4.i4=41; ruch4.j4=41;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[40].i4][wspolrzedne[40].j4]!='D')  || (ruch4.i4==41 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]=='D')) {ruch4.i4=40; ruch4.j4=40;}

            if(odl>39) Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]='4';
            else Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]='O';

            if(ruch4.i4>39 && odl<40) {jest_na_planszy4--; w_domku4++;}

              if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

             if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

            if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

        Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]='D';

            RysujPlansze();
            oczka=RysujKostke(oczka);
        }
        }
    if(oczka!=6)
    {
        cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;

                while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]!='D')
                {
                cout<<"Nie ma takiego pionka!"<<endl;
                cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                cin>>odl;
                }

                ruch4.i4=odl+oczka;
                ruch4.j4=odl+oczka;

            if(ruch4.i4>43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]!='D') {ruch4.i4=43; ruch4.j4=43;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]!='D') || (ruch4.i4==43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]=='D')) {ruch4.i4=42; ruch4.j4=42;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]!='D') || (ruch4.i4==42 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]=='D')) {ruch4.i4=41; ruch4.j4=41;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[40].i4][wspolrzedne[40].j4]!='D')  || (ruch4.i4==41 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]=='D')) {ruch4.i4=40; ruch4.j4=40;}

                while(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='D')
            {
                cout<<"Twoj pionek juz jest na tym polu! Wybierz inny: ";
                cin>>odl;
                 while(odl>44 || odl<0 || Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]!='D')
                    {
                    cout<<"Nie ma takiego pionka!"<<endl;
                    cout<<"Podaj odleglosc od miejsca startowego pionka ktorym chcesz sie poruszyc "<<endl;
                    cin>>odl;
                    }
                ruch4.i4=odl+oczka;
                ruch4.j4=odl+oczka;
            }

            if(ruch4.i4>43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]!='D') {ruch4.i4=43; ruch4.j4=43;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]!='D') || (ruch4.i4==43 && Plansza[wspolrzedne[43].i4][wspolrzedne[43].j4]=='D')) {ruch4.i4=42; ruch4.j4=42;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]!='D') || (ruch4.i4==42 && Plansza[wspolrzedne[42].i4][wspolrzedne[42].j4]=='D')) {ruch4.i4=41; ruch4.j4=41;}
            if((ruch4.i4>43 && Plansza[wspolrzedne[40].i4][wspolrzedne[40].j4]!='D')  || (ruch4.i4==41 && Plansza[wspolrzedne[41].i4][wspolrzedne[41].j4]=='D')) {ruch4.i4=40; ruch4.j4=40;}

            if(odl>39) Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]='4';
            else Plansza[wspolrzedne[odl].i4][wspolrzedne[odl].j4]='O';

            if(ruch4.i4>39 && odl<40) {jest_na_planszy4--; w_domku4++;}

              if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='A')
                {
                    zbicie1 (Plansza);
                    jest_na_planszy1--;
                }

             if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='B')
                {
                    zbicie2 (Plansza);
                    jest_na_planszy2--;
                }

            if(Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]=='C')
                {
                    zbicie3 (Plansza);
                    jest_na_planszy3--;
                }

        Plansza[wspolrzedne[ruch4.i4].i4][wspolrzedne[ruch4.j4].j4]='D';
        }

        RysujPlansze();

        if((w_domku2)==4)
                {
                    cout<<endl<<"Gracz "<<kolej<<" zakonczyl gre na "<<miejsce<<" miejscu"<<endl;
                    w_grze2=0;
                    miejsce++;
                }

        kolej=1;
        }
         else
        {
            cout<<endl<<"Gracz "<<kolej<<" wykonuje ruch"<<endl;
            for (int i=0; i<3; i++)
                {oczka=RysujKostke(oczka);
                    if(oczka==6)
                        {
                        wyjscie4(Plansza);
                        jest_na_planszy4=1;
                        RysujPlansze();
                        kolej=4;
                        break;
                        }
                    else kolej=1;
                }
            }
        }

    }
    if (w_grze1==0 && w_grze2==0 && w_grze3==0 && w_grze4==0) gra=0;
  }

    cout<<endl<<"KONIEC GRY";

     return 0;
}


