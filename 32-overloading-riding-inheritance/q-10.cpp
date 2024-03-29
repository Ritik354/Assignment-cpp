/*Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically*/
#include <iostream>
using namespace std;
class Player
{

    int player_NO;
    char name[20];
    int numberofMatches;
    int *goals;
    public :
    Player()
    {
        cout<<"\nEnter player No. : ";
        cin>>player_NO;
        cout<<"\nEnter Player Name : ";
        cin>>name;
        cout<<"\nEnter No. of Matches : ";
        cin>>numberofMatches;
        goals = new int[numberofMatches];
        for(int i =1;i<=numberofMatches;i++)
        {
            cout<<"\n Enter No. of Goals in match "<<i<<" : ";
            cin>>goals[i];
        }

    }
    void display()
    {
        cout<<"\nPlayer name : "<<name;
        cout<<"\nPlayer number : "<<player_NO;
        cout<<"\nNo. of Matches Playes : "<<numberofMatches;
        for(int i =1;i<=numberofMatches;i++)
        {
            cout<<"\n Match "<<i<<" Goals : "<<goals[i];
            
        }
    }
};  
int main()
{
    Player P;
    P.display();
 
}