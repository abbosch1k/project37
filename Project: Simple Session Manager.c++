#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,bool> sessions;

    sessions["user1"]=true;

    if(sessions["user1"])
        cout<<"Active";
}
