#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream inputfile, outputfile;
    try
    {
        inputfile.open("input_f.txt", ios::in);
    }catch(exception e)
    {
        printf("error reading file");
    }
}