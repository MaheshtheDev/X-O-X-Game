#include<iostream>
#include<cstdlib>
char m[3][3]={'1','2','3','4','5','6','7','8','9'};
{
    int i=0,j=0;
    cout<<"\n\n";
    cout<<"        "<<"-------------";
    cout<<"\n";
    for(i=0;i<3;i++)
    {
         cout<<"        | ";
        for(int j=0;j<3;j++)
        {
           cout<<m[i][j]<<" | ";
        }
        cout<<endl;
        cout<<"        "<<"-------------";
        cout<<endl;
    }
}
void player(char ch1,char ch2)
{
   cout<<"\n\tDear \""<<ch1<<"\"\n  Plz,Enter the Unoccupied Position :";
int main()
{
    char ch1,ch2;
    system("CLS");
    cout<<"\n\tEnter Your Option ,Dear "<<p1<<"(X/O):";
    cin>>ch1;
    cin>>ch2;
    if((ch1=='O'||ch1=='x'||ch2=='o'||ch2=='X')&&(ch1!=ch2))
    {
        cout<<"\n\n\t Let's Start Game \" ALL THE BEST TO YOU GUYS \"";
    }
    else
    {
        system("CLS");
        cout<<"\n\n\t \"PLEASE CHOOSE VALID OPTION\"";
        _sleep(2000);
        main();
    }
}