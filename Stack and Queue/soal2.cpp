#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    int N; 
    cin >> N;
    cin.ignore();
    
    stack<int> Stack;
    
    for (int i = 0; i < N; i++){
        string p;
        cin >> p;
        
        if (p == "push"){
            int el;
            cin >> el;
            Stack.push(el);
        } else if (p == "pop"){
            if (!Stack.empty()){
                Stack.pop();
            }
        }
        
        stack<int> tempstack = Stack;
        while (!tempstack.empty()){
            cout << tempstack.top() << " ";
            tempstack.pop();
        }
        cout << endl;
    }
}