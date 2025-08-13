/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char a[9]="Sanidhya";
    char *aptr=&a[0];
    cout<<"Entered string: ";
    for (int i=1; i<=sizeof(a); i++){
        cout<<*aptr;
        aptr++;
    }
    return 0;
}

/*Output
Entered string: Sanidhya
*/
