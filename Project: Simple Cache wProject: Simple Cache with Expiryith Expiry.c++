#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t created=time(0);

    if(time(0)-created<5)
        cout<<"Cache valid";
    else
        cout<<"Expired";
}
