#include<iostream>

using namespace std;

class Product{
    private:
    static int nextId;
    static int TotalProduct;

    public:

    int ProductId;
    string ProductName;
    float Price;
    int quantity;
    bool isDeleted;

    Product()
    {
        ProductId = 0;
        ProductName = " ";
        Price = 0;;
        quantity = 0;
        bool isDeleted = true;

    }
    void addProduct(){
        ProductId = ++nextId;
        cout<<"Add Product Name";
        cin>>ProductName;

        cout<<"Enter Price";
        cin>>Price;

        cout<<"Quantity of prod";
        cin>>quantity;

        isDeleted = false;

        TotalProduct++;
    }

    void displayProduct()
    {
        if(!isDeleted){

            cout<<"==========================Product details are================= "<<endl;
            cout<<"Product Id"<<ProductId<<endl;
            cout<<"ProductName: "<<ProductName<<endl;
            cout<<"Price: "<<Price<<endl;
            cout<<"Quantity"<<quantity<<endl;
        }
       
    }

    static int showAllProduct()
    {
        return TotalProduct++;
    }
     void decreaseCount()
    {
       TotalProduct--;
    }

 

};


   int Product :: nextId = 0;
    int Product :: TotalProduct = 0;
int main()
{
    const int SIZE = 100;
    Product prod[SIZE];

    int choice;
    int count = 0;


    do{
        cout<<"\n=================Product Detail=================";
        cout<<"\n1. Add Product";
        cout<<"\n 2. Display Inventory";
        cout<<"\n 3. Search Product";
        cout<<"\n 4. Udate Quantity";
        cout<<"\n5. Exit"<<endl;
        cout<<"Enter your choice";
        cin>>choice;




        switch(choice)
        {
            case 1:
            {
                if(count < SIZE)
                {
                    prod[count].addProduct();
                    count++;
                }
                break;
            }

            case 2:
            {
                bool found = false;

                for(int i = 0; i< count; i++)
                {
                    if(!prod[i].isDeleted){

                        prod[i].displayProduct();
                        found = true;
                        

                    }
                }
                break;
            }
            case 3:
            {
                bool found = false;
                int searchId;
                cout<<"Enter searchId";
                cin>>searchId;

                for(int i = 0; i<count; i++)
                {
                    if(prod[i].ProductId == searchId)
                    {
                        cout<<"Product found"<<endl;
                        prod[i].displayProduct();
                        found = true;

                    }
                }
                break;
            }

            case 5:
            {
                cout<<"Exiting The program";
                break;
            }
        }
    }while(choice!=5);

    return 0;
}