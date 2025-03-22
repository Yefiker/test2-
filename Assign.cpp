#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Welcome to Product Sales and Inventory Analysis Program!"<<endl;
    cout<<"Note that C++ is a compiled language!"<<endl;
    
    
    string productName; // Assume single word
    int productCategory; //integer from 1 to 5
    int initialInventory; //integer from initial inventory quantity
    float productPrice; //Float for product price per unit
    int itemsold; //integer for number of items sold


    cout<<"Enter the product name:";
    cin>> productName;
    cout<<"Enter the product category(1-5):";
    cin>>productCategory;
    cout<<"Enter the initial inventory:";
    cin>>initialInventory;
    cout<<"Enter product price per unit:";
    cin>>productPrice;
    cout<<"Enter item sold:";
    cin>>itemsold;

    
    int newInventory= initialInventory - itemsold;
    float totalsales =  itemsold * productPrice;
    string inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    
    cout<< endl <<" Analysis result:"<<endl;
    cout<<"Product Name: "<< productName << endl;
    cout<<"Product Category:"<< productCategory<<endl;
    cout<<"Initial inventory:"<< initialInventory<<endl;
    cout<<"Total sales:"<< totalsales<<endl;
    cout<<"New Inventory:"<<newInventory<<endl;
    cout<<"Inventory Status:"<<inventoryStatus<<endl;

    
int a = 10;
double b = 30;
string c = "Hello, World!";


int arr[]= {1,2,3,4,5};
double arr2[] = {1.1,2.2,3.3,4.4,5.5};
string arr3[] = {"gapes","apple","pinapple","cheery","cookies"};

cout<<"Direct Initialization:"<<a<<" "<<b<<" "<<c<<endl;
cout<<"List Initialization:"<<arr[0]<<" "<<arr2[1]<<" "<<arr3[2]<<endl;

int main() 
{
    auto totalSales = 2000;
    decltype(initialInventory)taxRate = 0.4;

    cout<<"Total Sales:"<<totalSales<<endl;
    cout<<"TaxRate:"<<taxRate<<endl;

    #define TAX_RATE 0.4
    const double PI = 3.1419;
    const int DAYS_IN_WEEK = 7;

    cout<<"Tax Rate:"<<TAX_RATE<<endl;
    cout<<"Pi:"<<PI<<endl
    cout<<"Days in week:"<<DAYS_IN_WEEK<<endl;

    
    cout<<"Enter product name:";
    string productName;
    cin>>productName;
    cout<<"Enter product category:";
    string productCategory;
    cin>>productCategory;
    cout<<"Enter initial inventory quality:";
    int initialInventory;
    cin>>initialInventory;
    cout<<"Enter product price:";
    double productPrice;
    cin>>productPrice;
    cout<<"Enter number of items sold:";
    int itemSold;
    cin>>itemSold;

    
    if " product_category" < 1 or" product_category" > 5:
    print("Invalid product category")
    else:
    printf("Category 1: Electronics")
    printf("Category 2: Groceries")
    printf("Category 3: Clothing")
    printf("Category 4: Stationery")
    printf("Category 5: Miscellaneous")

    for i in range(1, item_sold+1):
     printf(product_price)
     
    
     const float PREPROCESSOR_CONSTANT= 0.2;
     const float const_variable= 0.3;

    std:: cout<<"Preprocessor constant tax rate:"<<PREPROCESSOR_CONSTANT<<std::endl;
    std::cout<<"Const variable tax rate:"<<const_variable<<std::endl;

    std::string product_name="Product A";
    std::string category="Category A";
    float initial_Inventory=100;
    float price=10.0;
    int items_sold=50;

    float new_Inventory=initial_Inventory-items_sold;
    float total_sales=price*items_sold;

    std::cout<<"Product details:"<<std::endl;
    std::cout<<"Name:"<<product_name<<std::endl;
    std::cout<<"Category:"<<category<<std::endl;
    std::cout<<"Initial inventory:"<<initial_Inventory<<std::endl;
    std::cout<<"Price:"<<price<<std::endl;
    std::cout<<"Items sold:"<<items_sold<<std::endl;

    std::cout<<"New inventory:"<<new_Inventory<<std::endl;
    std::cout<<"Total sales:"<<total_sales<<std::endl;

    float helper_variable1= static_cast<float>(PREPROCESSOR_CONSTANT);
    float helper_variable2= static_cast<float>(const_variable);
     
    std::cout<<"Helper variable 1:"<<helper_variable1<<std::endl;
    std::cout<<"Helper variable 2:"<<helper_variable2<<std::endl;




    return 0;
}
