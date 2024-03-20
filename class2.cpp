#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nama, npm;
        
        void perkenalan(){
            cout << "nama: "<<nama<<endl;
            cout <<"npm: "<<npm<<endl;
        }
};

int main() {
    mahasiswa mhs;
    
    cin>>mhs.nama;
    cin>>mhs.npm;
    
    mhs.perkenalan();
}

