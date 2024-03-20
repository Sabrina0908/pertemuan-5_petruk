#include <iostream>
using namespace std;

class mahasiswa{
    private:
        string nama;
        
    public:
        void setNama(string nama){
            this->nama = nama;
        }
};

int main() {
    mahasiswa mhs;
    
    mhs.setNama("sabrina");

}