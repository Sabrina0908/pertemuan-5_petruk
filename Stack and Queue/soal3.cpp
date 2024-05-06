#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    cin.ignore();
    
    queue<int> Queue;
    
    for (int i = 0; i < N; i++){
        string p;
        cin >> p;
        
        if (p == "push"){
            int el;
            cin >> el;
            Queue.push (el);
        } else if (p == "pop"){
            if (!Queue.empty()){
                Queue.pop();
            }
        }
        
        queue<int> tempqueue = Queue;
        while (!tempqueue.empty()){
            cout << tempqueue.front() << " ";
            tempqueue.pop();
        }
        cout << endl;
    }
}