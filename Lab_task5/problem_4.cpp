#include <iostream>
#include <string>
using namespace std;

int main(){

cout<< "ENTER INTEGER VALUE" << " : " ;

int value ;

cin>> value ;

if (value <5 || value >10){

    cout<<"INVALID INPUT \n" <<"PLEASE ENTER NUMBER BETWEEN 5 AND 10" ;
}
else {
    cout <<"YOUR NUMBER HAS BEEN ACCEPTED" ;
}


return 0 ;


}