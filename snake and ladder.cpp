#include<iostream>
#include<time.h>
#include<string>
int player=1;
char sign;
int positions();
int add1(int);
int add2(int);
int a,b,c,d,sum=0,sum2=0,it,p1,p2,d1,d2,h=2,di,di2,w,w2;
int value(int);
int snakes2(int );
int ladders2(int );
int snakes(int );
int ladders(int );
using namespace std;
string arr[100]={"100", "99", "98", "97", "96", "95", "94", "93", "92", "91", "90", "89", "88", "87", "86", "85", "84", "83", "82", "81", "80", "79", "78", "77", "76", "75", "74", "73", "72", "71", "70", "69", "68", "67", "66", "65", "64", "63", "62", "61", "60", "59", "58", "57", "56", "55", "54", "53", "52", "51", "50", "49", "48", "47", "46", "45", "44", "43", "42", "41", "40", "39", "38", "37", "36", "35", "34", "33", "32", "31", "30", "29", "28", "27", "26", "25", "24", "23", "22", "21", "20", "19", "18", "17", "16", "15", "14", "13", "12", "11", "10", "9", "8", "7", "6", "5", "4", "3", "2", "1"};

int start();
int frame();
int inside();
int dis()
{
  if(player==1 )
  {
    it=d1;
    w=it;
    di=100-it;
    arr[di]="X";
    
  
      

  }
  else if(player==2)
  {
        it=d2;
        w2=it;
        di2=100-it;
        arr[100-it]="O";

  }


}

  string change,change2;

int main()
{
    start();
       inside();

}
int inside()
{

 do
 {
       system("cls"); 
      frame();

    if(player%2==1)
    {
    player=1;
    }
    else
    player=2;
   
   if(player==1)
   {
   cout<<"player 1 your sign is X\n";
   sign='X';


   }
   else
   {
   cout<<" player 2 your sign is O\n";
   sign='O';
    }
     change=to_string(w);
     change2=to_string(w2);
    if(player==1 && arr[di]=="X")
     arr[di]=change;
    else if(player==2 && arr[di2]=="O")
         arr[di2]=change2;

    srand(time (0));
    b=(rand()%6)+1;
     if(sign=='X')
  {
    d1=add1(b);
  d=d1 ;
  }
  else if(sign=='O'){
  d2=add2(b);
  d=d2;
  }
   

           dis();
       
      cout<<b<<endl;
     

     a=value(d);
++h;
     --player;
     
         system("pause");
        




 } 
 while (a==1);
}
int add1(int )
{
  if(sign=='X')
  { 
     sum=sum+b;
 sum=snakes(sum);
 sum=ladders(sum);
 return sum;
 

  }
 
}
int add2(int)
{
  if(sign=='O')
  cout<<"\n";
     sum2=sum2+b;
 sum2=snakes2(sum2);
 sum2=ladders2(sum2);
  return sum2;


 
}

int start()
{
	cout<<"\n\n\n\n      =======================================================================================================\n";
    cout<<"                                      SNAKE LADDER GAME                                                \n";
    cout<<"      =======================================================================================================\n\n\n";
    cout<<"      ( O ) for player 1 and ( X ) for player 2\n\n";
    
   system("pause");
     system("cls");

}

int frame()
{
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |"<<"                  ";positions();cout<<endl;
 cout<<"|  "<<arr[0]<< "  |   "<<arr[1]<<"  |   "<<arr[2]<<"  |   "<<arr[3]<<"  |   "<<arr[4]<<"  |   "<<arr[5]<<"  |   "<<arr[6]<<"  |   "<<arr[7]<<"  |   "<<arr[8]<<  "  |   "<<arr[9]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|   "<<arr[10]<<  "   |   "<<arr[11]<< "  |   "<<arr[12]<<"  |   "<<arr[13]<<"  |   "<<arr[14]<<"  |   "<<arr[15]<<"  |   "<<arr[16]<<"  |   "<<arr[17]<<"  |   "<<arr[18]<<  "  |   "<<arr[19]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[20]<<  "   |   "<<arr[21]<< "  |   "<<arr[22]<<"  |   "<<arr[23]<<"  |   "<<arr[24]<<"  |   "<<arr[25]<<"  |   "<<arr[26]<<"  |   "<<arr[27]<<"  |   "<<arr[28]<<  "  |   "<<arr[29]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[30]<<  "   |   "<<arr[31]<< "  |   "<<arr[32]<<"  |   "<<arr[33]<<"  |   "<<arr[34]<<"  |   "<<arr[35]<<"  |   "<<arr[36]<<"  |   "<<arr[37]<<"  |   "<<arr[38]<<  "  |   "<<arr[39]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[40]<<  "   |   "<<arr[41]<< "  |   "<<arr[42]<<"  |   "<<arr[43]<<"  |   "<<arr[44]<<"  |   "<<arr[45]<<"  |   "<<arr[46]<<"  |   "<<arr[47]<<"  |   "<<arr[48]<<  "  |   "<<arr[49]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[50]<<  "   |   "<<arr[51]<< "  |   "<<arr[52]<<"  |   "<<arr[53]<<"  |   "<<arr[54]<<"  |   "<<arr[55]<<"  |   "<<arr[56]<<"  |   "<<arr[57]<<"  |   "<<arr[58]<<  "  |   "<<arr[59]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[60]<<  "   |   "<<arr[61]<< "  |   "<<arr[62]<<"  |   "<<arr[63]<<"  |   "<<arr[64]<<"  |   "<<arr[65]<<"  |   "<<arr[66]<<"  |   "<<arr[67]<<"  |   "<<arr[68]<<  "  |   "<<arr[69]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[70]<<  "   |   "<<arr[71]<< "  |   "<<arr[72]<<"  |   "<<arr[73]<<"  |   "<<arr[74]<<"  |   "<<arr[75]<<"  |   "<<arr[76]<<"  |   "<<arr[77]<<"  |   "<<arr[78]<<  "  |   "<<arr[79]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[80]<<  "   |   "<<arr[81]<< "  |   "<<arr[82]<<"  |   "<<arr[83]<<"  |   "<<arr[84]<<"  |   "<<arr[85]<<"  |   "<<arr[86]<<"  |   "<<arr[87]<<"  |   "<<arr[88]<<  "  |   "<<arr[89]<<"  |\n";
 cout<<"---------------------------------------------------------------------------------\n";
 cout<<"|   "          "    |   "          "    |   "         "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "          "    |   "         "    |\n";
 cout<<"|  "<<arr[90]<<  "   |   "<<arr[91]<< "   |   "<<arr[92]<<"   |   "<<arr[93]<<"   |   "<<arr[94]<<"   |   "<<arr[95]<<"   |   "<<arr[96]<<"   |   "<<arr[97]<<"   |   "<<arr[98]<<  "   |   "<<arr[99]<<"   |\n";
 cout<<"---------------------------------------------------------------------------------\n";
   ///system("cls");



 
}

 int value(int)
{
  if(d<=100 && d>=1 )
  return 1;
   
  if(d1==100 && sign=='X')
    {
    cout<<"-------Player 1 (X) is win-------- ";
       return 0;}
    
  else if(d2==100 && sign=='O')
     {
    cout<<"-------Player 2 (O) is win--------";
       return 0;}
    

  }

   

int snakes(int)
{
 if(sum==27)
 {
  sum=9;
  return sum;
 }
  else if(sum==52)
  {
  sum=25;
  return sum;
  }
   
  else if(sum==95)
  {
  sum=59;
  return sum;
  }

}
int ladders2(int)
{
    if(sum2==8)
    {
    sum2=30;
    return sum2;
    }
    else if(sum2==34)
   {
    sum2=56;
    return sum2;
   }
   else if(sum2==66)
   {
    sum2=99;
    return sum2;
   }


}
int snakes2(int)
{
 if(sum2==27)
 {
  sum2=9;
  return sum2;
 }
  else if(sum2==52)
  {
  sum2=25;
  return sum2;
  }
   
  else if(sum2==95)
  {
  sum2=59;
  return sum2;
  }

}
int ladders(int)
{
    if(sum==8)
    {
    sum=30;
    return sum;
    }
    else if(sum==34)
   {
    sum=56;
    return sum;
   }
   else if(sum==66)
   {
    sum=99;
    return sum;
   }


}
int positions()
{ if(h==8)
{
   if(player==1)
  cout<<"---------position of playr 1 (X)------------"<<sum;
  else
  cout<<"---------positiom of playr 2 (O)------------"<<sum2;
}
else
{
  if(player==1)
  cout<<"---------position of player 1 (X)------------"<<d1;
  else
  cout<<"---------positiom of player 2 (O)------------"<<d2;
}
}

  

