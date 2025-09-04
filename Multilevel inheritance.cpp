//Priyansha 
//24070123079
//ENTC-A3
//program -3
#include <iostream>
using namespace std;
class MPhone{
    public:
    string brand;
    string screen_type;
    int price;
    
    
    MPhone(){
        cout<<"enter brand of phone"<<endl;
        cin>>brand;
        cout<<"enter screen type of phone"<<endl;
        cin>>screen_type;
        cout<<"enter price of phone"<<endl;
        cin>>price;
       
        
    }
};

class Tphone: public MPhone{
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

class Sphone: public Tphone{
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
  cout<<"\n This phone is "<<newphone.brand<<" with "<<newphone.processor<<" and comes with vibrant "<<newphone.colour<<" colour. The price is only Rs."<<newphone.price<<" .The mobile number is "<<newphone.number<<" and connection type is "<<newphone.connection<<"the screen type of this phone is "<<newphone.screen_type<<endl;

    return 0;
}

//OUTPUT:
/*
enter brand of phone
Samsung
enter screen type of phone
touch
enter price of phone
70000
enter mobile number of phone
5763585
enter type of connection
wireless
enter colour of phone
black
enter processor of phone
bionic chip

 This phone is Samsung with bionic and comes with vibrant black colour. The price is only Rs.70000 .The mobile number is 5763585 and connection type is wirelessthe screen type of this phone is touch
*/
