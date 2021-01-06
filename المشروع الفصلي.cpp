/*
Wael Ahmed Babiker Elkofey
alneelain university
Faculty of engineering
Computer engineering
Second class
*/
#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdlib>
using namespace std;
struct phone{    char name[50]; 
 char address[20];    long  number;} x[50];
  a,b=0,c=1,q=0;
  void input()
  {    int s;    
  do    {        b=b+1;        c=c+1;  
   for( a=b; a<c; a++)  :
    q=q+a;            
      cout<<"name ["<<a<<"]=";      
      cin>>x[a].name;      
      cout<<"address ["<<a<<"]=";       
      cin>>x[a].address;            
      cout<<"phone ["<<a<<"]=";            
      cin>>x[a].number;
      cout<<"---------------------------------------------\n";        }
      cout<<"\nPlease press [1] to add another user\nPlease press [0] to return to the main menu \n";      
        cin>>s;    }
          while(s==1);}ll
          void SearchName()
          {    int r;    
          char ser[20];    
          cin>>ser;   
           for(int j=0; j<q+1; j++)  
           {        r=strcmp(ser,x[j].name);
            if(r==0)       
             cout<<"ok\n";      
             cout<<"name          address       number\n";
             cout<<x[j].name<<"            ";          
             cout<<x[j].address<<"           ";       
             cout<<x[j].number<<"  \n";        }    }}
   void SearchTitle()
   {    
   int g;    
   char serr[20];    
   cin>>serr;    
   for(int h=0; h<q+1; h++)  
     {  
        g=strcmp(serr,x[h].address);   
          if(g==0)       
             cout<<"#######\n";         
              cout<<"   ok  \n";          
              cout<<"########\n\n";            
              cout<<"address              name                number\n";
              cout<<x[h].address<<"                    "<<x[h].name<<"                   "<<x[h].number<<"\n\n";        }    }}
void DataShow()
{    
      for(int a=0; a<q+1; a++)  
        {   
             cout<<x[a].name<<"               ";     
             cout<<x[a].address<<"             ";    
              cout<<x[a].number;
              cout<<"\n------------------------------------------";
              cout<<"\n\n";    }}
 void MainMenu()
 {   
              cout<<"       \n";   
               cout<<"          You are welcome to phone program   \n";
               cout<<"             << Main Menu >>                 \n";
               cout<<"***********************************\n"; 
               cout<<"* 1-Add a new user                        *\n";
               cout<<"* 2-To search for users                    *\n";
               cout<<"* 3-Show all users                         *\n";
               cout<<"* 4-Edit user data                         *\n"; 
               cout<<"* 5-Delete user data                       *\n";
              cout<<"*****************************\n";
              cout<<"Please enter the number[1-or-2-or-3-or-4-or-5] ";}
void edit()
{   
         int u;    cin>>u;    
         for(a=u; a<u+1; a++) 
            {  
              cout<<"name old= (* "<<a<<"  "<<x[a].name<<" *) new        name  = "; 
               cin>>x[a].name;        
               cout<<"address old= (* "<<a<<"  "<<x[a].address<<" *) new address = ";      
               cin>>x[a].address;        
               cout<<"numbre phone old= (* "<<a<<"  "<<x[a].number<<" \n*) new numbre phone = ";
               cin>>x[a].number;    }}
void MessageBack()
{    
cout<<"Back to the main menu press the number (0)\n";
}
void ForDelete()
{    
           cout<<"Select the User ID you want to delete \n";    
            int m;    
            cin>>m;    
            for(a=m; a<q; a++)
            {        
            strcpy(x[a].name,x[a+1].name);
            strcpy(x[a].address,x[a+1].address);          x[a].number=x[a+1].number;  
            }  
    Intmain()
    {    
      Int p;    
      do    {        int i,t,w;        MainMenu();        int g;        cin>>g;
      if(g!=1&&g!=2&&g!=3&&g!=4&&g!=5)
      {         
         cout<<"error\nExiting The program"<<endl;               exit(1);        }      
           switch(g)      
             {        case 1:          
               system("clr");         
                cout<<"Please enter data\n";            
                 input();           
 MessageBack();         
                 cin>>p;            
                     if(p!=0)        
                         {               
                    cout<<"error\nExiting The program"<<endl;
exit(1);         
   }         
                      break;        
                      case 2:           
                       system("clr");           
                       cout<<"search users \n";           
                        cout<<"To Search by Name Press [1]\nTo search by address Press [2]\n";            
                        cout<<"plese enter number [1-or-2]";            
                        int o;            
                        cin>>o;            
                if(o==1)           
                 {               
                        cout<<"Please enter the name you want that you're looking for \n";               
  SearchName();                
  MessageBack();            
      cin>>p;            }            
      else if(o==2)        
   {             
             cout<<"Please enter the address you want that you're looking for \n";                
   SearchTitle();                
   MessageBack();                
           cin>>p;            }            
           else if(o<0||o>2)           
 {               
              cout<<"not found\?";             
  MessageBack();               
              cin>>p;            }           
      break;        
      case 3:            
           system("clr");          
           cout<<"\n\n";            
           cout<<"name            address         number\n"; 
  DataShow();            
  MessageBack();            
           cin>>p;           
      break;        
       case 4:           
        system("clr");         
                 cout<<"\n\n";          
                 cout<<"name          address       number\n";
 DataShow();           
              cout<<"Modify the data user to select User ID number and then press\n";            
              edit();           
 MessageBack();            
             cin>>p;           
        break;       
        case 5:            
                 cout<<"name          address       number\n";
DataShow();            
ForDelete();           
                 cout<<"\n";            
                 cout<<"name          address       number\n";
DataShow();            
MessageBack();            
                 cin>>p;           
       break;       
        }       
        system("clr"); 
          }    
       while(p==0);}
Return 0;
}}}
