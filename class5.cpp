#include <iostream>
using namespace std;

class mahasiswa{
    private:
        string nama;
        
    public:
        void setNama(string nama){
            this->nama = nama;
        }
        
        string getNama(){
            return nama;
        }
};

int main() {
    mahasiswa mhs;
    
    mhs.setNama("sabrina");
    cout<<mhs.getNama();

}