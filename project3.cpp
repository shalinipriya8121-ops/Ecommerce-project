#include<iostream>
using namespace std;
enum orderstatus{
confirmed,
cancelled,
pending
};
enum Paymentstatus{
    payment_pending,
    payment_declined,
    payment_successfull
};
enum Paymentmethod{
    Credit_Card,
    UPI,
    Cash
};
struct Order{
int order_id;
int customer_id;
int totalamount;
orderstatus Orderstatus;
Paymentstatus paymentstatus;
Paymentmethod paymentmethod;

void displayorder(){
    cout<<"Order id: "<<order_id<<endl;
    cout<<"customer_id: "<<customer_id<<endl;
    cout<<"totalamount: "<<totalamount<<endl;
    
    cout<<"orderstatus: ";
    if(Orderstatus==confirmed){
        cout<<"confirmed"<<endl;
    }
    else if(Orderstatus==cancelled){
    cout<<"cancelled"<<endl;
    }
    else{
        cout<<"pending"<<endl;
    }

    cout<<"paymentstatus: ";
    if(paymentstatus==payment_pending){
        cout<<"pending"<<endl;
    } 
    else if(paymentstatus==payment_declined){
        cout<<"declined"<<endl;
    }
    else{
        cout<<"successfull";
    }
    cout<<"Paymentmethod: ";
    if(paymentmethod==Credit_Card){
        cout<<"credit card"<<endl;
    }
    else if(paymentmethod==UPI){
        cout<<"upi"<<endl;
    }
    else{
        cout<<"cash";
    }

}

};
int main(){
    Order o;
    o.order_id=456;
    o.customer_id=321;
    o.totalamount=23888;
    o.Orderstatus=confirmed;
    o.paymentstatus=payment_pending;
    o.paymentmethod=UPI;
    o.displayorder();


}