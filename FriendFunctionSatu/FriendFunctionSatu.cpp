#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    string nama;

public:
    friend void setNama(mahasiswa &a, string);
};

int main()
{
    std::cout << "Hello World!\n";
}