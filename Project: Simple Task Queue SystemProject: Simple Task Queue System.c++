#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> tasks;

    tasks.push(1);
    tasks.push(2);

    while(!tasks.empty()){
        cout<<"Processing "<<tasks.front()<<endl;
        tasks.pop();
    }
}
