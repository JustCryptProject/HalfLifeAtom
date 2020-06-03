#include <iostream>
#include <ctime>
using namespace std;

int ExpD = 0, ExpXout = 0, Iterations = 0, Coin = 128, ada = 0;

int flip(int Coin)
{
    int ExpXout = 0;
    int exp[Coin];
    for (int i = 0; i < Coin; i++)
    {
        exp[i] = rand() % 2;
    }
    for (int i = 0; i < Coin; i++)
    {
        if (exp[i] == 0)
        {
            ExpXout++;
        }
    }
    return ExpXout;
}

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    
{cout << "\n"<< endl;   
cout<<" __    _  __   __  _______  ___      _______  _______  ______      ______   _______  _______  _______  __   __ "<<endl;
cout<<"|  |  | ||  | |  ||       ||   |    |       ||   _   ||    _ |    |      | |       ||       ||   _   ||  | |  |"<<endl;
cout<<"|   |_| ||  | |  ||       ||   |    |    ___||  |_|  ||   | ||    |  _    ||    ___||       ||  |_|  ||  |_|  |"<<endl;
cout<<"|       ||  |_|  ||       ||   |    |   |___ |       ||   |_||_   | | |   ||   |___ |       ||       ||       |"<<endl;
cout<<"|  _    ||       ||      _||   |___ |    ___||       ||    __  |  | |_|   ||    ___||      _||       ||_     _|"<<endl;
cout<<"| | |   ||       ||     |_ |       ||   |___ |   _   ||   |  | |  |       ||   |___ |     |_ |   _   |  |   |  "<<endl;
cout<<"|_|  |__||_______||_______||_______||_______||__| |__||___|  |_|  |______| |_______||_______||__| |__|  |___|  "<<endl;
cout<<"\n\n";
cout<<"[Default atom value: 128]\t\t\t | percent destroyed atoms | percent survived atoms | percent of decay \n"<<endl;}

    for (Iterations; Iterations < 8 && flip(Coin) != 0; Iterations++)
    { 
        cout << "[Surviving atoms " << Coin << "]"; 

       if (Coin<10) { cout << "   &&   ";}                              //корректировка пробелов
       else {cout<<"  &&   ";}

        cout << "[Decayed atoms: " << ExpD << "]\t\t    "; 
                 
        ada = ada + ExpD;                                               //блок считающий PDA 
        int pda = (double) 100 / 128 * ada;
        cout << pda  << "%\t\t\t\t";

        int psa = (double) 100 / 128 * Coin;                            //блок считающий PSA
        cout << psa  << "%\t\t     ";

        int pod = (double) ExpD / Coin * 100;                           //блок считающий POD
        cout << pod  << "%"<<endl;

        int FlipResult = flip(Coin);                                    //генерация следуйщено этапа
        ExpD = Coin - FlipResult;
        Coin = FlipResult;

    }
    {cout<<"[Surviving atoms 0]"<<endl;
    cout<<"\n";
    cout << "[Iterations: " << Iterations << "]" << endl;
    cout<<"\n\n";}
    system ("pause");
}
