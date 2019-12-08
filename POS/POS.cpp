#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << " _________________________________________"<<endl;
    cout << "|           Point of Sale (POS) SYSTEM   |"<<endl;
    cout << " -----------------------------------------"<<endl;
    cout << "         Edin Zecevic - 140302157      "<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "       =================================================================="<<endl;
    cout << "       * This program is a cash register program. Cashier is entering   *"<<endl;
    cout << "       * an eight digit barcode which is consisted by the zeros (0) and *"<<endl;
    cout << "       * ones (1). You will terminate the process entering only zero.   *"<<endl;
    cout << "       * Entering the barcode you will get product and create a receipt *"<<endl;
    cout << "       * with a total price and other informations.                     *"<< endl;
    cout << "       =================================================================="<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "       CASHIER USERNAMES                SHOPPING CARD CODES              "<<endl;
    cout << "       =================================================================="<<endl;
    cout << "       * Edin - edin               * Premium Shopping Card  - p    *"<<endl;// -12%discount
    cout << "       * Aida - aida                 * Standard shopping card - s    *"<<endl;   // -5%discount      
    cout << "       * Edo - edo                  * No shopping card       - n    *"<<endl;// no discount
    cout << "       =================================================================="<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
   cout  << "       PRICE AND BARCODE TABLE                                           "<<endl;
    cout << "       =================================================================="<<endl;
    cout << "       * 10000001                                 Bread          0,50KM *"<<endl;
    cout << "       * 10000010                                 Milk           1,20KM *"<<endl;
    cout << "       * 10000100                                 Eggs           0,20KM *"<<endl;
    cout << "       * 10001000                                 Butter         1,00KM *"<<endl;
    cout << "       * 10010000                                 Beef          10,45KM *"<<endl;
    cout << "       * 10100000                                 Chicken        4,15KM *"<<endl;
    cout << "       * 11000000                                 Apple Juice    2,10KM *"<<endl;
    cout << "       * 11000001                                 Salad          0,30KM *"<<endl;
    cout << "       * 11000010                                 Salami         2,50KM *"<<endl;
    cout << "       * 11000100                                 Bananas        0,95KM *"<<endl;
    cout << "       * 11001000                                 Chocolate      0,80KM *"<<endl;
    cout << "       * 11010000                                 Flour         10,30KM *"<<endl;
    cout << "       =================================================================="<<endl;
    cout << endl;
    cout << endl;
    cout << endl;
string name, username;
int barcode, btemp, amount;
char card;
double price, tax, firstp=0, totalp;

ifstream file;
file.open("barcodes.txt");//opening the file with the bar codes
if(file.fail()){
    cerr<<"Could not open the file"<<endl;
}

cout<<"Hello cashier! Please enter the username: ";
cin>>username;

while (username != "edin" && username != "aida" && username != "edo"){  //Becouse of the we have only 3 cashier users
     cout<<endl;
    cout<<"Wrong username! Please enter again: ";
   cin>>username;
}

if (username == "edin"){
    cout<<endl;
    cout<<"  Hello Edin!"<<endl;
    cout<<endl;
}
else if (username == "aida"){
     cout<<endl;
    cout<<"  Hello Aida!"<<endl;
    cout<<endl;
}
else if (username == "edo"){
     cout<<endl;
    cout<<"  Hello Edo!"<<endl;
    cout<<endl;
}

cout<<"Which shopping card does customer use: ";
cin>>card;

while (card != 'p' && card != 's' && card != 'n'){  //premium, standard or you do not have
     cout<<endl;
    cout<<"Wrong input! Please enter again: ";
   cin>>card;
}
if (card == 'p'){
    cout<<endl;
    cout<<"  Customer is a Premium shopping card member."<<endl;
    cout<<endl;
}
else if (card == 's'){
     cout<<endl;
    cout<<"  Customer is Standard shopping card member."<<endl;
    cout<<endl;
}
else if (card == 'n'){
     cout<<endl;
    cout<<"  Customer doesn't use shopping card."<<endl;
    cout<<endl;
}


ofstream file1; //data and barkods which are enteret put in one text file for each person
if (username == "edin"){
    file1.open("edin.txt", ios::app);

    if(file1.fail()){
        cerr<<"Could not open the file"<<endl;
    }
}
else if (username == "aida"){
    file1.open("aida.txt", ios::app);

    if(file1.fail()){
        cerr<<"Could not open the file"<<endl;
    }
}
else if (username == "edo"){
    file1.open("edo.txt", ios::app);

    if(file1.fail()){
        cerr<<"Could not open the file"<<endl;
    }
}

file1<<endl; //write in tex file the bill(barcode, item and price)
file1<<""Velepromet Visoko. doo<<endl; 
file1<<"_____________________________________"<<endl;
file1<<"Barcode"<<"    "<<"Item"<<"    "<<"Price"<<"    "<<"Amount"<<endl;
file1<<"_____________________________________"<<endl;

cout<<"Please enter the barcode: ";
cin>>barcode;
cout<<"Please enter the amount: ";
cin>>amount;
while (amount<0){
    cout<<endl;
    cout<<"Wrong input! Enter again: ";
    cin>>amount;
}

while(file>>btemp>>name>>price){
if (barcode != 0){
    while (btemp == barcode){


if (card == 'p'){
          firstp = firstp + (price*amount);
          firstp=firstp-(firstp*12/100);
           file1<<endl;
           cout<<endl;
           cout<<btemp<<"    "<<name<<"    "<<price-(price*12/100)<<" KM "<<"     "<<"x"<<amount<<endl;
           file1<<btemp<<"    "<<name<<"    "<<price-(price*12/100)<<" KM "<<"    "<<"x"<<amount<<endl;
        }
        else if (card == 's'){
             firstp=firstp+(price*amount);
             firstp=firstp-(firstp*5/100);
             file1<<endl;
             cout<<endl;
             cout<<btemp<<"    "<<name<<"    "<<price-(price*5/100)<<" KM "<<"     "<<"x"<<amount<<endl;
             file1<<btemp<<"    "<<name<<"    "<<price-(price*5/100)<<" KM "<<"    "<<"x"<<amount<<endl;

        }
        else if (card == 'n'){
             firstp=firstp+(price*amount);
             file1<<endl;
             cout<<endl;
             cout<<btemp<<"    "<<name<<"    "<<price<<" KM "<<"     "<<"x"<<amount<<endl;
             file1<<btemp<<"    "<<name<<"    "<<price<<" KM "<<"    "<<"x"<<amount<<endl;
        }

        cout<<endl;
        cout<<"Please enter the barcode: ";
        cin>>barcode;
        if (barcode != 0){
        cout<<"Please enter the amount: ";
        cin>>amount;}
        while (amount<0){
            cout<<endl;
            cout<<"Wrong input! Enter again: ";
            cin>>amount;
        }
        cout<<endl;
        file.clear(); 
        file.seekg(0, ios::beg);
}
}
}

tax=(firstp/100)*17;
totalp=firstp+tax;

cout<<endl;
cout<<endl;
cout<<"Velepromet Visoko. doo"<<endl;
cout<<"_____________________________________"<<endl;
cout<<endl;
cout<<"Time: "<< __TIMESTAMP__ << endl; // write the true time when buying is going
if (username == "edin"){
   cout<<endl;
    cout<<"Cashier: Edin"<<endl;
}
else if (username == "aida"){
     cout<<endl;
    cout<<"Cashier: Aida"<<endl;
}
else if (username == "edo"){
     cout<<endl;
    cout<<"Cashier: Edo"<<endl;
}
if (card == 'p'){
    cout<<"Card: Premium shopping card"<<endl;
}
else if (card == 's'){
    cout<<"Card: Standard shopping card"<<endl;
}
else if (card == 'n'){
    cout<<"Card: / "<<endl;
}

cout<<"_____________________________________"<<endl;
cout<<endl;
cout<<"Your price is: "<<firstp<<" KM"<<endl;
cout<<"Your tax is: "<<tax<<" KM"<<endl;
cout<<"_____________________________________"<<endl;
cout<<endl;
cout<<"Your TOTAL price is: "<<totalp<<" KM"<<endl;
cout<<endl;
cout<<endl;

file1<<"_____________________________________"<<endl;
file1<<endl;
file1<<"Time: "<< __TIMESTAMP__ << endl;
if (username == "edin"){
   file1<<endl;
   file1<<"Cashier: Edin"<<endl;
}
else if (username == "aida"){
    file1<<endl;
    file1<<"Cashier: Aida"<<endl;
}
else if (username == "edo"){
    file1<<endl;
    file1<<"Cashier: Edo"<<endl;
}
if (card == 'p'){
    file1<<"Card: Premium shopping card"<<endl;
}
else if (card == 's'){
    file1<<"Card: Standard shopping card"<<endl;
}
else if (card == 'n'){
    file1<<"Card: / "<<endl;
}
file1<<"_____________________________________"<<endl; //it write in text file the bill( price, tax and total price with tax)
file1<<endl;
file1 <<"Your price is: "<<firstp<<" KM"<<endl;
file1 <<"Your tax is: "<<tax<<" KM"<<endl;
file1<<"_____________________________________"<<endl;
file1 <<"Your TOTAL price is: "<<totalp<<" KM"<<endl;
file1<<endl;
file1<<endl;

file.close();
file1.close();
    return 0;
}
