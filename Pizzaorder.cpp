#include <iostream>
#include <cstring>
using namespace  std;

int main(){
    

    char Brand[100];
    cout << "Cheezious Pizza!" << endl;
    cout << "Pizza order: ";
    cin.getline(Brand, 100);
    
    if(strcmp(Brand,"Crown Crust")== 0){
        cout<<"Sir,Order is ready"<<endl;
    }
    else{
        cout<<"Sir,Invalid order"<<endl;
    }


    return 0;
}