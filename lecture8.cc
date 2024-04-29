#include <iostream>
using namespace std;
// power function 
// function signature
int power (int a , int b ){
    // function statements
    int po = 1;
    for (int i = 1 ; i <= b ; i++){
        po *= a;
    }
    return po;
}// void return nothing 
void changevalue(int z){
    z = 100;
}
void changevalue2(int &j){
    j = 100;
}
// default parameter in function 
int add(int a2 , int b2 = 0 , int c2 = 0 ){
    return (a2+b2+c2);
}

int a1 = 3;// global variable 
int main (){    
    int a1 = 5; // local variable 
    cout<<"local variable - "<<a1<<endl; // local variable print 
    // scope resolution 
    cout<<"global variable - "<<::a1<<endl; // global varibale accesable 
    
//  calling a function 
    int a , b ;
    cout<<"enter a no - ";
    cin>>a;
    cout<<"enter a no - ";
    cin>>b;
    cout<<power(a,b)<<endl;
    
   // switch case 
    int c ;
    cout<<"enter a no - ";
    cin>>c;
    switch (c){
        case 1: 
        cout<<"no 1 "<<endl;
        break;
        case 2:
        cout<<"no 2 "<<endl;
        break;
        case 3 :
        cout<<"no 3 "<<endl;
        // without break;
        case 4 :
        cout<<"no 4 "<<endl;
        // continue; // continue statement gives error
        break; 
        case 5 :// nested switch case 
        switch (2*a){// using expression
            case 1 :
            cout<<"yo yo honey singh"<<endl;
            break;
            case 2 :
            cout <<"badshah"<<endl;
            break ;
            default :
            cout<<"no singer only bhajhan "<<endl;
        }
        default :
        cout<<"no number  "<<endl;
    }

    // switch case calculator
    int d ;
    cout<<"enter a no - ";
    cin>>d;
    int e = 0;
    switch (1){
        case 1:
        e = d/100;
        cout<<"100 rs note - "<<e<<endl;
        d = d- e*100;
        case 2 :
        e = d/50;
        cout<<"50 rs note - "<<e<<endl;
        d = d - e*50;
        case 3 :
        e = d/20;
        cout<<"20 rs note - "<<e<<endl;
        d = d - e*20;
        case 4 :
        e = d;
        cout<<"1 rs note - "<<e<<endl;
    }
    // ampresend operator 
    int f = 2;
    int &g = f; // ampersend operator // &g is also accessing the same memmory location as the f 
    g++ ; // f value also change as they both stored in the same memmory location
    cout<<f<<endl;

    // memory location 
    cout<<&f<<endl;
    cout<<&g<<endl;

    // pass by value
    int z1 = 3;
    changevalue(z1); // pass by value a copy of z has created in which the value of z1 has pass  
    cout<<z1<<endl;

    // pass by reference
    int j1 = 5;
    changevalue2(j1);
    cout<<j1<<endl; // it will change the value of j1 as it is pass by reference

    // default parameter 
    cout<<add(j1,z1)<<endl;    


   
}
