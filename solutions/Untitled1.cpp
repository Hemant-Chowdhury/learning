#include <iostream>
using namespace std;
int main()
{
    int matchstick=21,user;
    cout<<"Pickup number of matches b/w 1 and 4\nThe computer also choses b/w 1-4 matchsticks\nThe last one to pickup matchstick loses the game\n";
    for(int i=0;i<4;i++)
    {
        cout<<"\nMatchsticks left :"<<21-(i*5)<<"\nEnter no.of matchsticks :";
        cin>>user;
        cout<<"Computer choses "<<(5-user)<<" matchsticks\n";
    }
    cout<<"You lose as there is only one matchstick left";
}
