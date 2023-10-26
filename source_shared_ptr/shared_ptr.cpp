#include "shared_ptr.hpp"




int main()
{
    shared_ptr<int> m_buffer(new int[16], default_delete<int[]>());

    temp ta_client("/root", "ta");
    ta_client.print_address();
    
    temp ta_client1("/tmp", "ta1", m_buffer);
    ta_client1.print_address();
    
    
}