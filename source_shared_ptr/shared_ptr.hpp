#pragma once

#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class temp 
{
public:
    temp(string, string);
    temp(string, string, shared_ptr<int>);
    void print_address();


private:
    string m_ta_path;
    string m_ta_name;
    shared_ptr<int> m_buffer;
    int buffer_size;

};

inline temp::temp(string ta_path, string ta_name)
{
    m_ta_path = ta_path;
    m_ta_name = ta_name;
}

inline temp::temp(string ta_path , string ta_name , shared_ptr<int> buffer)
{
    m_ta_path = ta_path;
    m_ta_name = ta_name;
    m_buffer = buffer;
}

inline void temp::print_address()
{
    cout << "The value of shared_ptr<int> is : " << m_buffer << endl;
}
