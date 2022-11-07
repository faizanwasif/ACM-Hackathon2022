#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream inputfile, outputfile;
    int len, i, count = 0;
   
    try
    {
        inputfile.open("input_h.txt", ios::in);
    }catch(exception e)
    {
        printf("error reading file");
    }

    inputfile>>len;
    inputfile.close();

    int lockers[len] = {};

    for(i = 0; i< len; i++)
        i%2 == 1 ? lockers[i] = 0 : lockers[i] = 1;

    for(i = 0; i< len; i++)
    {
        if (i<=len-3)
        {
            i = i+3;
            cout<<i<<" ";
            lockers[i] = 0;
        }
        // cout<<lockers[i];
    }

    for(i = len; i > 0; i--)
    {
        if (i >= 2)
        {
            i = i - 4;
            lockers[i] = 0;
        }
    }
    
    for(i = 0; i< len; i++)
    {
        if (i%2 == 1)
        {
            if(lockers[i] == 0)
                lockers[i] = 1;
            else lockers[i] = 0;
        }
        cout<<lockers[i];
    }

    for(i = 0; i< len; i++)
    {
        
        if(lockers[i] == 0){
            lockers[i] = 1;
            count++;
        }
        else lockers[i] = 0;
    }

    try
    {
        outputfile.open("output_h.txt", ios::out);
    }catch(exception e)
    {
        printf("error writing in file");
    }
    outputfile<<count;
    outputfile.close();


}