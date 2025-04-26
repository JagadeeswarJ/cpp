#include <iostream>
using namespace std;

class Logger
{
    int mutable logCount = 0;

public:
    void logMessage(string msg) const
    {
        logCount++; // Allowed because logCount is mutable
        cout << "Log [" << logCount << "]: " << msg << endl;
    }
};

int main()
{
    const Logger logger;
    // Implications of Declaring an Object as const:
    // Member Functions: A const object can only call const member functions. This ensures that calling a member function won't modify the state of the object.
    // Member Variables: You cannot modify non-mutable member variables of a const object. Only mutable member variables can be modified inside const member functions.
    logger.logMessage("Starting program...");
    logger.logMessage("Running...");
    logger.logMessage("Finished.");
    return 0;
}
