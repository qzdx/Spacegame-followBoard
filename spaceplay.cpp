#include<conio.h>
#include<windows.h>
#include<iostream>
using namespace std;
char map[20][20];
void say(string word)
{
    cout << "[story]"<< word <<endl;
}
void pstory()
{
    cout <<"[$]long long time ago..."<<endl;
    cout <<"[$]There were some new creature in space..."<<endl;
    say("when their plant is gone");
    say("they became looking for new home to be alive");
    say("your task was to look for the new home...");
    say("good luck my soilder");
    system("pause");
}
void pmap()
{
 for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }
    //绘制四周边框    
}
int main()
{
    pstory();
    int nani=5;
    int nanj=5;
    for(int i=0;i<19;i++)
    {
        for(int j=0;j<19;j++)
        {
            map[i][j]=' ';
        }
    }//初始化游戏地图
    map[nani][nanj]='a';
   //设置男主坐标
     for(int i=0;i<20;i++)
     {
        map[0][i] = '#';
     }
     for(int i=0;i<20;i++)
     {
        map[19][i] = '#';
     }
     for(int i=0;i<20;i++)
     {
        map[i][0] = '#';
     }
     for(int i=0;i<20;i++)
     {
        map[i][19] = '#';
     }
     map[19][7]='s';
      map[19][8]='p';
       map[19][9]='a';
        map[19][10]='c';
         map[19][11]='e';
     pmap();
    //绘制四周边框
    cout<<"[$]welcome,new guy"<<endl;
     cout<<"[~]spaceplay1.0"<<endl;
      cout<<"[+]loading complete..."<<endl;
       cout<<"[+]waiting for order"<<endl;
       
       char inp=' ';
       int heart = 5;
    while(heart >0)
    {
        inp = getch();
        if(inp == 'a')
        {
            if(nanj>1)
            {
            map[nani][nanj]='.';//基础移动
            nanj = nanj - 1;
            map[nani][nanj]='a';
            pmap();
            }
             else{
                heart--;
                pmap();
                cout <<"[!]ahh?!"<<endl;
            }
        }     
        if(inp == 'd')
        {   
            if(nanj<18)
            {
            map[nani][nanj]='.';//基础移动
            nanj = nanj + 1;
            map[nani][nanj]='a';
            pmap();
            }
             else{
                 heart--;
                pmap();
                cout <<"[!]ahh?!"<<endl;
            }
        }    
        if(inp == 'w')
        {   
            if(nani>1)
            {
            map[nani][nanj]='.';//基础移动
            nani = nani - 1;
            map[nani][nanj]='a';
            pmap();
            }
             else{
                 heart--;
                pmap();
                cout <<"[!]ahh?!"<<endl;
            }
        } 
        if(inp == 's')
        {   
            if(nani<18)
            {
            map[nani][nanj]='.';//基础移动
            nani = nani + 1;
            map[nani][nanj]='a';
            pmap();
            }
            else{
                heart--;
                pmap();
                cout <<"[!]ahh?!"<<endl;
            }
        } 
        fflush(stdin);
    }
    cout<<"[$]you died"<<endl;

}