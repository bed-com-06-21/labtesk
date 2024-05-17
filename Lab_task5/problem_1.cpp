#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
        srand(time(0));
        int daysUntilExpiration = rand() % 10+1 ;

        if(daysUntilExpiration <=10){
            cout<<"your subscription will expire soon.Renew now \n";
        }
            else if(daysUntilExpiration<=5){
                cout <<"your subscription expires in"<<daysUntilExpiration<<"Renew now and save 10%!\n";
                }
            else if(daysUntilExpiration<=1){
               cout<<"your subscription expires within a day! \n"<<"renew now and save 20%"; 
            }
            else if(daysUntilExpiration<=0){
                cout<<"your subscription has expired";
            }
            else if(daysUntilExpiration<=10){
                cout<<"you have an active subscription";

                return 0;
            }
    
}