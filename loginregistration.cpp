#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();


int main(){
    int a;
    cout<<"\t\t\t --------------------WELCOME TO LOGIN AND REGISTRATION FORM -------------------------\n\n";
    cout<<"\n\t\t                                       MENU                                            \n";

    cout<<"\t\t\t --------------------------------------------------------------------------------------\n\n";
    cout<<"\t\t\t |1. IF U HAVE AN ACCOUNT LOGIN HERE                                                   |\n\n";
    cout<<"\t\t\t |2. IF U ARE NEW TO THE FORM REGISTER HERE !                                          |\n\n";
    cout<<"\t\t\t |3. FORGOT PASSWORD                                                                   |\n\n";
    cout<<"\t\t\t |4. EXIT                                                                              |\n\n";
    cout<<"\t\t\t --------------------------------------------------------------------------------------\n\n";

    cout<<"\t\t\t ENTER THE OPTION GIVEN ABOVE : ";
    cin>>a;
    cout<<endl;
    switch(a){
        case 1:
                login();
                break;
        
        case 2:
                registration();
                break;

        case 3:
                forgot();
                break;
        
        case 4:
                cout<<"\n\t\t\t  THANKS FOR REGISTERING US !!!  "<<endl;
                break;
        
        default:
                system("CLS");
                cout<<"\n HOME \n\n\n"<<endl;
                main();
    }
    return 0;
}

void login()
{
    int count;
    string loginuserid , Id, password, pass;
    cout<<"\t\t\t ENTER THE USERNAME : ";
    cin>>loginuserid;
    cout<<endl;
    cout<<"\t\t\t ENTER THE PASSWORD :  ";
    cin>>password;
    cout<<endl;
    fstream input("data.txt");

    while(input>>Id>>pass){
        if(Id==loginuserid && pass==password){
            count =1;
        }
    }
        input.close();

        if(count==1){
            cout<<"\t\t\t YOUR LOGIN IS SUCCESSFUL ! \n\n\n"<<endl;
            main();
        }
        else{
            cout<<"\t\t\t SORRY! INCOREECT PASSWORD  \n\n"<<endl;
            cout<<"\t\t\t  PLEASE CHECK YOUR USERNAME OR PASSWORD " <<endl;
        }
}


void registration()
{
    string ruserid,rpassword,rid,rpass;
    cout<<"\n\t\t\t ENTER THE USERNAME : ";
    cin>>ruserid;
    cout<<"\n";
    cout<<"\t\t\t ENTER THE PASSWORD : ";
    cin>>rpassword;
    cout<<'\n';

    ofstream f1("data.txt",ios::app);
    f1<<ruserid<<" "<<rpassword<<endl;

    cout<<"\t\t\t REGISTRATION IS SUCESSFUL ! \n\n\n"<<endl;
    main();
}



void forgot(){
    int option;
    cout<<"\t\t\t FORGOT YOUR PASSWORD ? \n\n "<<endl;
    cout<<"\t\t\t Press 1 to check your password by username  \n"<<endl;
    cout<<"\t\t\t Press 2 to go back to the home menu \n"<<endl;
    cout<<"\t\t\t choose 1 or 2 : ";
    cin>>option;
    switch(option){
        case 1:{
            int count =0;
            string fuserid,fid,fpass;
            cout<<"\ncl\t\t\t ENTER THE USERNAME TO BE SEARCHED : ";
            cin>>fuserid;


            ifstream f2("data.txt");
            while(f2>>fid>>fpass){
                if(fid==fuserid){
                    count=1;
                    break;
                }
            }
                f2.close();
                if(count==1)
                {
                    cout<<"\n\t\t\t YOUR ACCOUNT IS FOUND  \n"<<endl;
                    cout<<"\t\t\t YOUR PASSWORD IS : "<<fpass<<endl;
                    cout<<"\n";
                    main();
                }
                else{

                    cout<<"\t\t\t SORRY USER NOT FOUND "<<endl;
                    cout<<"\t\t\t     ßTRY AGAIN "<<endl;
                    forgot();
                }
                break;
        }

        case 2:{
            main();
        }
        default:{
            cout<<"\t\t\t GO TO MAIN MENU LOGIN AGAIN "<<endl;
            main();
        }
    }

}



