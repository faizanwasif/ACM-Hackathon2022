#include<iostream>
#include<fstream>
using namespace std;


int operations(int num)
{
    int num_op = 0;
    if(num > 0){
        while(num != 1){
            if(num%2 != 0)
            {
                num = 3*(num) + 1;
                num_op++;
            }
            else
            {
                num = num/2;
                num_op++;
            }
        }
        return num_op;
    }
    else{
        return -1;
    }
}



int main()
{
    fstream inputfile, outputfile;
    int num;
   
    try
    {
        inputfile.open("input_g.txt", ios::in);
    }catch(exception e)
    {
        printf("error reading file");
    }

    inputfile >> num;
    inputfile.close();
    try
    {
        outputfile.open("output_g.txt", ios::out);
    }catch(exception e)
    {
        printf("error writing in file");
    }
    outputfile<<operations(num);
    outputfile.close();
    return 0;
}