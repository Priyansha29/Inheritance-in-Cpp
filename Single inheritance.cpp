//Priyansha 
//24070123079
//ENTC-A3
//program-1
#include <iostream>
using namespace std;
class Phone{
    public:
    string brand;
    string type;
    int price;
    int model_no;
    
    Phone(){
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

class Sphone: public Phone{
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
  cout<<"this phone is "<<newphone.brand<<" with "<<newphone.processor<<" Model number"<<newphone.model_no<<" .Colour is "<<newphone.colour<<" and price is only "<<newphone.price<<endl;

    return 0;
}

//OUTPUT:
/*
enter brand of phone
Samsung
enter type of phone
5G
enter price of phone
20000
enter model number of phone
4567
enter colour of phone
RED
enter processor of phone
snapdragon
this phone is Samsung with snapdragon Model number4567 .Colour is RED and price is only 20000
*/
