/*
    learning istream operation
*/
#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int main ()
{

    // char buff[256];
    // char *val = getcwd(buff,sizeof(buff));
    // if(val){
    //     cout << buff << endl;
    // }


    // filename used the absulate pathname as the dir of generate the exec binary file diff with the source dir.
    ifstream is("/Users/xuyingyang/DEV/DEV_CPP/cpp_learning/source_IO/test.txt",ifstream::binary | istream::in);
    if(is.is_open()){
        // move the pointer to the stream end.
        // 0 is Offset value, relative to the way parameter. 
        is.seekg(0, is.end);
        // Returns the position of the current character in the input stream.
        int length = is.tellg();
        is.seekg(0, is.beg);

        cout << "the file in memory size is " <<  length << endl;

        // allocate memory
        char * buffer = new char [length];

        // read data as a block
        // Extracts n characters from the stream and stores them in the array pointed to by buffer.
        // This function simply copies a block of data, without checking its contents nor appending a null character at the end.
        is.read (buffer, length);

        is.close();

        //print the content
        cout.write(buffer,length);

        delete [] buffer;
    }else{
        cout << "the file open failed !" << endl;
    }

    return 0;
}