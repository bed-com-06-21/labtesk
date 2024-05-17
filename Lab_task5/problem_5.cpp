#include <iostream>
#include <string>
using namespace std;

int main(){
    string shape ;
    double Area ;
    string square , rectangle ,triangle , quitprogram ;
    cout<<"please select the area of the shape to be calculated "<< endl ;
    cout << "1.square" <<endl<<"2.rectangle"<<endl<<"3.triangle"<<endl<<"4.quit program" <<endl;
    cout<<"ENTER SHAPE"<< " : "<<endl ;

    


    cin>> shape;

    if(shape == "square"){

        cout<<"ENTER LENGTH"<<" : "<<endl ;
        double length ;

        cin>> length ;

        Area = length * length ;

        cout<<"THE AREA OF THE SQUARE IS"<<" " <<Area ;

    }else if(shape=="rectangle"){
        double length ;
        double width ;
        cout <<"ENTER LENGTH"<<" : " <<endl;

        cin >>length ; 

        cout <<"ENTER WIDTH"<<" : "<<endl ;

         cin >>width ; 

         Area = length * width ;

        cout<<"THE AREA OF THE RECTANGLE IS"<<" " <<Area ;
    }else if (shape=="triangle"){
        cout <<"ENTER THE HEIGHT OF THE TRIANGLE"<<" : "<<endl ;
        double height;

        cin>>height ;

        cout <<"ENTER THE BASE OF THE TRIANGLE"<<" : "<<endl ;
        double base ;

        cin>>base ;
        Area = 0.5 * base * height ;

        cout<<"THE AREA OF THE TRIANGLE IS"<<" " <<Area ;
     }else if (shape == "quitprogram"){
        cout<<"Exiting the program... " ;

     }else{
        cout<<"INVALID INPUT !" ;
     }
    
return 0 ;

}