#include <iostream>
using namespace std;
enum Category{
    Food,
    Books,
    Cloths,
    Electronics,
    Furniture
};
class Product{
    int Productid;
    string Name;
    int Price;
    int stock;
    Category category;
    
public:
    
        Product(int id,string n,int  p,int  s,Category c){
        
        Productid=id;
         Name=n;
        Price=p;
        stock=s;
        category=c;
}
    



void displayProduct(){
    cout<<"the productid is: "<<Productid<<endl;;
    cout<<"product name is: "<<Name<<endl;
    cout<<"product price is: "<<Price<<endl;
    cout<<"stock: "<<stock<<endl;
    cout<<"category: "<<category<<endl;
}

void updatestock(int quantity){
    stock=stock+quantity;
    cout<<"\nthe stock is updated successfully";
}
void checkAvailability(){
    if(stock>0){
        cout<<endl<<"it is available";
    }
    else{
        cout<<"not available";
    }
}};
int main(){
    Product p1(345,"Smart Phone",90000,19,Electronics);
    p1.displayProduct();
    p1.updatestock(10);
    p1.checkAvailability();
    
}

