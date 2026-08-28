#include<iostream>
using namespace std;
class customer{
    int Customer_id;
    string Name;
    string Email;
    long Phone_number;
    string address;


public:
customer(int id,string n,string e,long pn,string a){
    Customer_id=id;
    Name=n;
    Email=e;
    Phone_number=pn;
    address=a;

}

    void displaycustomerdetails(){
        cout<<"Customer_id: "<<Customer_id<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Email: "<<Email<<endl;
        cout<<"Phone number: "<<Phone_number<<endl;
        cout<<"Address: "<<address<<endl;
    }
    void updatedetails(){
        

        cout<<"enter new phone number: "<<endl;
        cin>>Phone_number;

        cout<<"enter new email id: "<<endl;
        cin>>Email;

    }

};
int main(){
customer c(101,"shalini","shalini123@gamil.com",4567887654
,"Hyderabad");
cout<<"customer details"<<endl;
c.displaycustomerdetails();
cout<<"updated customer details"<<endl;
c.updatedetails();


    
}