#include<regex>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
bool Email_check(string);
class holder
{   protected:
    char name[100];
    char  phnum[15];
    string email;
    char pan[10];
    public :
   
    void getdata()
        {
            cout<<"ENTER YOUR NAME :"<<endl;
            cin>>name;
          
          
            A:cout<<"ENTER YOUR PHONE NUMBER :"<<endl;
            cin>>phnum;
            int length;
            length=strlen(phnum);
            if(length!=10)
           { printf("Enter a valid number\n\n");
             goto A;
           }
           
           
            B:cout<<"ENTER YOUR EMAIL ID :"<<endl;
            cin>>email;
             if(Email_check(email))
           {  cout<<"Your Email-Id is valid\n"<<endl;
             goto C; }
             else
           { cout<<"Your Email-Id is invalid\n"<<endl;
            goto B; }
            
            
            C:cout<<"ENTER YOUR PAN NUMBER :"<<endl;
            cin>>pan;
            int len;
            len=strlen(pan);
            if(len!=10)
            {printf("Enter valid pan number\n");
             goto C;}
            cout<<"\n Successfully sign in :)\n"<<endl;
          }
         virtual void info()
         {
             cout<<"base info";
         }
        virtual void compute(double)
        {
        cout<<"compute function";
        }
         virtual void basicinfo()
        {
         cout<<"basic info function";
        }
        virtual void calculate()
        {
        cout<<"caluclate function";
        }
 
};

bool Email_check(string email)
{
     const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return regex_match(email,pattern);
}

class nifty:public holder
{
    int choice;
    public : void info();
            void compute(double);
            void basicinfo();
            void calculate();
};

void nifty :: basicinfo()
{
    cout<<"PLEASE SELECT A COMPANY FROM GIVEN OPTIONS\n";
    cout<<"1.Reliance Industries ltd\n2.Tata Consultancy Services\n3.HDFC ltd\n4.Hindustan Unilever ltd\n5.ICICI Bank\n 6.ITC\n 7.Kotak Mahindra Bank\n 8.Infosys ltd\n 9.SBI\n 10.Bajaj Finance\n";

    cin>>choice;
}
void nifty:: info()
{
    switch(choice)
    {
        case 1:cout<<"------Relianve Industries itd---------\n";
                cout<<"------STOCK DATA.---------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Oil, gas and fuels \t 2372.25 Rs   \t 16,05,541 Cr     \t31      \t0.29 \n";
                break;
        case 2:   cout<<"--------Tata consultancy Services--------------\n";
                cout<<"---------STOCK DATA----------\n"<<endl;
                cout<<"Industry\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"IT services\t 3769.90RS\t 13,94,505 Cr\t        43.48\t        0.95\n";
                break;

        case 3:cout<<"----------Hindusthan Unilever-------------\n";
                 cout<<"---------STOCK DATA-----------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Personal products   \t 2327.25RS     \t 5,46,809 CR   \t68.39    \t1.28\n";
                break;
        
        case 4:cout<<"-----------HDFC Ltd------------\n";
                 cout<<"---------STOCK DATA-----------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Banking\t 2,530.60 RS\t 4,58,295 Cr\t        24.17\t        0.91\n";
                break;

        case 5:cout<<"--------------ICICI Bank----------\n";
                 cout<<"---------------STOCK DATA---------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Bnaking   \t 801.65     \t 5,56,678 Cr        \t29.83   \t0.25\n";
                break; 
        case 6:cout<<"--------------ITC Ltd----------\n";
                 cout<<"---------------STOCK DATA---------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Tobaco  \t 214.13 Rs    \t 2,64,076 Cr        \t20.03  \t5.02\n";
                break; 
        case 7:cout<<"--------------Kotak Mahindra Bank----------\n";
                 cout<<"---------------STOCK DATA--------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Bnaking   \t 1854.65 Rs    \t 3,68,394 Cr        \t36.58   \t0.05\n";
                break;  
        case 8:cout<<"--------------Infosys Ltd----------\n";
                 cout<<"---------------STOCK DATA---------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"IT Services  \t 1722.15 Rs    \t 7,21,374 Cr        \t37.83   \t1.74\n";
                break;                      
        case 9:cout<<"--------------SBI Ltd----------\n";
                 cout<<"---------------STOCK DATA---------\n"<<endl;
                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Bnaking   \t 514.65 Rs    \t 4,59,308 Cr        \t20.50   \t0.78\n";
                break; 
        case 10:cout<<"--------------bajaj finance Ltd----------\n";
                 cout<<"---------------STOCK DATA---------\n"<<endl;

                cout<<"INDUSTRY\t MARKET PRICE\t MARKET CAPACITY \tP/E RATIO\tDIVEDEND\n";
                cout<<"Finance   \t 6963 Rs     \t 4,19,913 Cr        \t95.40  \t  0.14\n";
                break;
         default :cout<<"Plaese enter the valid option"<<endl;                 
   
    }
}
void nifty :: compute(double r)
{
    int y,l,s;
    int amt=0;
    float temp;
    float res=0;
    int n;
    cout<<endl;
        cout<<"By Which means you would like to invest ?\n";
                cout<<"1.MONTHLY SIP\n";
                cout<<"2.LUMPSUM AMOUNT\n";
                cin>>n;
                if(n==1)
                {
                cout<<"Enter your monthly sip amount\n";
                cin>>amt;
                cout<<"Enter number of years you would like to invest :\n";
                cin>>y;
                amt=amt*y*12;
                temp=(1+r/12);
                res=pow(temp,12*y);
                res=res*amt;
                cout<<"INVESTMENT AMOUNT :"<<amt<<" \nRATE OF INTEREST :"<<r*100<<" \nNET PROFIT :"<<res-amt<<"\nTOTAL AMOUNT: "<<res<<endl;
                }
                else if(n==2)
                {
                cout<<"Enter your total amount to be invested :\n";
                cin>>amt;
                cout<<"Enter number of years you would like to invest ?\n";
                cin>>y;
                temp=(1+r/12);
                res=pow(temp,12*y);
                res=res*amt;
                cout<<"INVESTMENT AMOUNT :"<<amt<<" \nRATE OF INTEREST :"<<r*100<<" \nNET PROFIT :"<<res-amt<<"\nTOTAL AMOUNT: "<<res<<endl;
                }
    
}
void nifty :: calculate()
{
    switch(choice)
    {
        case 1: compute(.0852);
                break;
        case 2 : compute(.3803);
                    break;
        case 3: compute(.2861);
                break;
        case 4 : compute(.1649);
                    break;
        case 5 : compute(.1311);
                    break;
        case 6: compute(.2095);
                    break;
        case 7 : compute(.1315);
                    break;
        case 8 : compute(.2729);
                    break;
        case 9 : compute(.0851);
                    break;
       case 10 : compute(.1277);
                    break;
    }
}
class mutual:public holder
{
    int choice;
    public : void info();
    void compute(double);
    void basicinfo();
    void calculate();
};
void mutual::basicinfo()
{
    cout<<"PLEASE SELECT A COMPANY FROM GIVEN OPTIONS\n";
    cout<<"1.Tata Digital India Fund\n2.ICICI Technolocy Fund\n3.Axis Small Cap Fund\n4.Nippon India Small Cap Fund\n5.SBI Small Cap Fund\n";
    cin>>choice;
}
void mutual::info()
{
    switch(choice)
    {
        case 1:cout<<"------Tata Digital India Fund---------\n";
                cout<<"------MUTUAL FUND DATA.---------\n"<<endl;
                cout<<"TYPE OF FUND \t FUND SIZE \t MINIMUM AMOUNT REQ \n";
                cout<<"Equity \t 4,899 Cr  \t 150 Rs \n";
                break;
        case 2:cout<<"-------ICICI Technolocy Fund--------\n";
                cout<<"------MUTUAL FUND DATA.---------\n"<<endl;
                cout<<"TYPE OF FUND \t FUND SIZE \t MINIMUM AMOUNT REQ \n";
                cout<<"Equity \t 7,908 Cr  \t 100 Rs \n";
                break;  
         case 3:cout<<"-------Axis Small Cap Fund--------\n";
                cout<<"------MUTUAL FUND DATA.---------\n"<<endl;
                cout<<"TYPE OF FUND \t FUND SIZE \t MINIMUM AMOUNT REQ \n";
                cout<<"Debt \t 8,178 Cr  \t 500 Rs \n";
                break;          
        case 4:cout<<"-------Nippon India Small Cap Fund--------\n";
                cout<<"------MUTUAL FUND DATA.---------\n"<<endl;
                cout<<"TYPE OF FUND \t FUND SIZE \t MINIMUM AMOUNT REQ \n";
                cout<<"Other  \t 18,831 Cr  \t 100 Rs \n";
                break;    
        case 5:cout<<"-------SBI Small Cap Fund--------\n";
                cout<<"------MUTUAL FUND DATA.---------\n"<<endl;
                cout<<"TYPE OF FUND \t FUND SIZE \t MINIMUM AMOUNT REQ \n";
                cout<<"Equity  \t 11,250 Cr  \t 500 Rs \n";
                break;
        default:cout<<"Enter a valid option \n";
                break;
      } 
}
      
void mutual :: compute(double r)
{
    int y;
    int amt=0;
    float temp;
    float res=0;
    int n;
    cout<<endl;
        cout<<"By Which means you would like to invest ?\n";
                cout<<"1.MONTHLY SIP\n";
                cout<<"2.LUMPSUM AMOUNT\n";
                cin>>n;
                if(n==1)
                {
                cout<<"Enter your monthly sip amount\n";
                cin>>amt;
                cout<<"Enter number of years you would like to invest :\n";
                cin>>y;
                amt=amt*y*12;
                temp=(1+r/12);
                res=pow(temp,12*y);
                res=res*amt;
                cout<<"INVESTMENT AMOUNT :"<<amt<<" \nRATE OF INTEREST :"<<r*100<<" \nNET PROFIT :"<<res-amt<<"\nTOTAL AMOUNT: "<<res<<endl;
                }
                else if(n==2)
                {
                cout<<"Enter your total amount to be invested :\n";
                cin>>amt;
                cout<<"Enter number of years you would like to invest ?\n";
                cin>>y;
                temp=(1+r/12);
                res=pow(temp,12*y);
                res=res*amt;
                cout<<"INVESTMENT AMOUNT :"<<amt<<" \nRATE OF INTEREST :"<<r*100<<" \nNET PROFIT :"<<res-amt<<"\nTOTAL AMOUNT: "<<res<<endl;
                }
    
}
void mutual :: calculate()
{
    switch(choice)
    {
        case 1: compute(.4982);
                    break;
        case 2 : compute(.3971);
                    break;
        case 3: compute(.3409);
                break;
        case 4 : compute(.3109);
                    break;
        case 5 : compute(.2957);
                    break;
    }
}    
      

int main()
{
    holder a,*p;
    nifty n;
    mutual m;
    char ch;
    int b;
    int i=0;
    do{
       cout<<"where do you want to invest ? \n";
       cout<<"1.STOCKS"<<endl;
       cout<<"2.MUTUAL FUNDS"<<endl;
       cin>>b;
       if(b==1)
       {  
        a.getdata();
          p=&n;
          p->basicinfo();
          p->info();
          p->calculate();
          i++;
        }
        if(b==2)
        
       {  a.getdata();
          p=&m;
          p->basicinfo();
          p->info();
          p->calculate();
         
       }
       i++;
        cout<<"DO YOU WANT TO EXIT Y/N"<<endl;
        cin>>ch;
       }while(ch!='y'&&ch!='Y');
       cout<<"\n--------------Thank you--------------\n";
}





