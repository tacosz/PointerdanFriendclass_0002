#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    string nama;

public:
    friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    std::cout << "Hello World!\n";
}