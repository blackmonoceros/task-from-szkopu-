#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n;
    cin>>n;

    stack<int> glebokiStack;
    stack<int> plytkiStack;
    int talerzeWydane[505];
    int index=0;

    for (int i=0; i<n; i++){
        string dzialanie, rodzaj;
        cin>>dzialanie>>rodzaj;

        if (dzialanie=="dziekuje"){
            int id;
            cin>>id;
            if (rodzaj=="gleboki"){
                glebokiStack.push(id);
            } else if (rodzaj=="plytki"){
                plytkiStack.push(id);
            }
        } else
        if(dzialanie=="prosze"){
            if (rodzaj=="gleboki"&&!glebokiStack.empty()){
                talerzeWydane[index++]=glebokiStack.top();
                glebokiStack.pop();
            } else
            if(rodzaj=="plytki"&&!plytkiStack.empty()){
                talerzeWydane[index++]=plytkiStack.top();
                plytkiStack.pop();
            }
        }
    }

    for (int i=0; i<index; i++){
        cout<<talerzeWydane[i]<<endl;
    }

    return 0;
}