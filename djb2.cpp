#include <iostream>
#include <time.h>

using namespace std;

unsigned long djb2_hash(unsigned char *str)
{

    unsigned long hash = 5381;
    
    int c;
    
    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
                
    return hash;
}



int main(void){

    unsigned char *str;

    cin >> str;
    cout << "tag : " <<  str << endl;
    
    unsigned long hash_result = djb2_hash(str);
    
    cout << "Hash : " << hash_result << endl;
    return 0;
}
