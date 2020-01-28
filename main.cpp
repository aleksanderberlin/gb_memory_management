#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Current environment: ";
    #if defined _WIN64
        cout << "Windows x64" << endl;
    #elif defined _WIN32
        cout << "Windows x32" << endl;
    #elif defined __APPLE__
        cout << "MacOS" << endl;
    #elif defined __linux__
        cout << "Linux" << endl;
    #endif
    cout << "Last compiled: " << __DATE__ << " " << __TIME__ << endl;
    return 0;
}
