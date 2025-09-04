//Priyansha 
//24070123079
//ENTC-A3
//program -2 
#include <iostream>
using namespace std;
class MPhone{
    public:
    string brand;
    string type;
    int price;
    int model_no;
    
    MPhone(){
        cout<<"enter brand of phone"<<endl;
        cin>>brand;
        cout<<"enter type of phone"<<endl;
        cin>>type;
        cout<<"enter price of phone"<<endl;
        cin>>price;
        cout<<"enter model number of phone"<<endl;
        cin>>model_no;
        
    }
};

class Tphone{
    public:
    int number;
    string connection;
    
    Tphone(){
        cout<<"enter mobile number of phone"<<endl;
        cin>>number;
        cout<<"enter type of connection"<<endl;
        cin>>connection;
        
    }
};

class Sphone: public MPhone, public Tphone{
    public:
    string colour;
    string processor;
    
    Sphone(){
        cout<<"enter colour of phone"<<endl;
        cin>>colour;
        cout<<"enter processor of phone"<<endl;
        cin>>processor;
        
    }
    
};

int main() {
  Sphone newphone;
  cout<<"\n This phone is "<<newphone.brand<<" with "<<newphone.processor<<" . It's Model number is "<<newphone.model_no<<" and comes with vibrant "<<newphone.colour<<" colour. The price is only Rs."<<newphone.price<<" .The mobile number is "<<newphone.number<<" and connection type is "<<newphone.connection<<endl;

    return 0;
}

//OUTPUT:
/*
enter brand of phone
iPhone
enter type of phone
5G
enter price of phone
60000
enter model number of phone
9008
enter mobile number of phone
68558487
enter type of connection
Wireless
enter colour of phone
Pink
enter processor of phone
A13 bionic chip

 This phone is iPhone with A13 . It's Model number is 9008 and comes with vibrant Pink colour. The price is only Rs.60000 .The mobile number is 68558487 and connection type is Wireless

*/
