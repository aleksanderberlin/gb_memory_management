#include <iostream>

using namespace std;

uint32_t make_uint32(unsigned char *array) {
    uint32_t value;
    
    cout << "Values in char: ";
    for (int i = 0; i < 4; i++)
    {
        cout << static_cast<int>(array[i]) << " ";
        if (i == 3) cout << endl;
    }
    
    value = (array[3]<<0) | (array[2]<<8) | (array[1]<<16) | (array[0]<<24);
    cout << "Value in uint_32t: " << value << endl;
    
    return value;
}

int main(int argc, const char * argv[]) {
    unsigned char array_of_uchars[4] = { 234, 56, 97, 9 };
    uint32_t value;
    value = make_uint32(array_of_uchars);
    return 0;
}
