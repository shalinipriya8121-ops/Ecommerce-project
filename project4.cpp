#include<iostream>
using namespace std;

//product_category
enum product_category{
TOYS,
ELECTRONICS,
CLOTHING,
FURNITURE,
FOOTWEAR
};


//product_status
enum product_status{
    PRODUCT_DELIVERED,
    PRODUCT_CANCELLED,
    PRODUCT_PENDING,
    PRODUCT_CONFIRMED
    
    
};
enum product_payment{
    PAYMENT_PENDING,
    PAYMENT_PAID,
    PAYMENT_DECLINED

};
struct order{
   int  order_id;
     product_status status;
     product_payment payment;
     


order(int oid,product_status s,product_payment p){
    order_id=oid;
    status=s;
    payment=p;
    
}
};



//cancelorder
void cancelorder(order &o){
    if(o.status==PRODUCT_DELIVERED){
        cout<<"order cannot be cancelled"<<endl;
    }
    else if(o.status==PRODUCT_CANCELLED){
        cout<<"order cancelled successfully"<<endl;
    }
    
}






//paymentinfo
union payment_info{
   char CREDITCARD[3];
    double  CASH;
    char  UPI_ID[30];
   
};

//product
struct product{
    
         int product_id;
         int price;
         product_category category;
         int stock;

product(int id,int p,product_category c,int s){
            product_id=id;
            price=p;
            category=c;
            stock=s;
    }
};


//checking stocks
    bool  checkavailabilty(product &p){
        if(p.stock>0){
            cout<<"the Product is available."<<endl;
            return true;
        }
        else if(p.stock==0){
            cout<<"the Product is not available."<<endl;
            return false;
        }
        else{
            cout<<"Invalid stock value."<<endl;
            return false;
        }
    }

    //checking productid
    bool checkproductid(product &p,int enteredproductid){
        if(enteredproductid==p.product_id){
            return true;

        }
        else{
            return false;
        }

    }

    //customer
class customer{
     string customer_name;
     string  customer_phonenumber;
     string customer_address;

public:
     customer(string cn,string cp,string ca){
        customer_name=cn;
        customer_phonenumber=cp;
        customer_address=ca;

     }
};



//payment for a cancelled order
void cancelorderpayment(order &o){
    if(o.status==PRODUCT_CANCELLED){
        cout<<"cannot make payment for a cancelled  order"<<endl;
        

    }
    else if(o.status==PRODUCT_DELIVERED){

    
    cout<<"payment can be made"<<endl;
    }
}
void confirmorder(order &o){
    if(o.payment==PAYMENT_DECLINED){
        cout<<"order cannot be placed because payment failed"<<endl;
    }
    else if(o.payment==PAYMENT_PAID){
        cout<<"order confirmed successfully"<<endl;
    }
    
}

int main(){
    product p(123,34500,ELECTRONICS,1200);
    customer c("shalini priya","2345678923","Hyderabad");
    int enteredproductid;
    cin>>enteredproductid;
    order o(346,PRODUCT_DELIVERED,PAYMENT_PAID);
    cancelorderpayment(o);
    confirmorder(o);
    checkproductid(p,enteredproductid);


    

}