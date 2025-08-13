/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
int main(){
    int a=50;
    float b=10.2;
    double c=30.33;
    bool d=true;
    int *aptr=&a;
    float *bptr=&b;
    double *cptr=&c;
    bool *dptr=&d;
    cout<<"pointer before increment \n \n"<<"int "<<aptr<<"\n"<<"float "<<bptr<<"\n"<<"double "<<cptr<<"\n"<<"bool "<<dptr<<"\n"<<endl;
    aptr++;
    bptr++;
    cptr++;
    dptr++;
    cout<<"pointer after increment \n \n"<<"int "<<aptr<<"\n"<<"float "<<bptr<<"\n"<<"double "<<cptr<<"\n"<<"bool "<<dptr<<endl;
    return 0;
}


/*Output
pointer before increment 
 
int 0x7fff72f30e5c
float 0x7fff72f30e58
double 0x7fff72f30e50
bool 0x7fff72f30e4f

pointer after increment 
 
int 0x7fff72f30e60
float 0x7fff72f30e5c
double 0x7fff72f30e58
bool 0x7fff72f30e50
*/
