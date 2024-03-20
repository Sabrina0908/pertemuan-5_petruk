#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nama, npm;
        
        mahasiswa(string nama, string b){
            this->nama = nama;
            npm = b;
        }
};

int main() {
    mahasiswa mhs("sabrina", "1234");
    
    cout<< " nama: "<< mhs.nama <<endl;
    cout<< " npm: "<< mhs.npm <<endl;

}