#include <iostream>

class SerialObject {
private:
    int serialNumber;
    static int count; // Static count for tracking object creation

public:
    // Constructor increments count and assigns serial number
    SerialObject() {
        serialNumber = ++count;
    }

    // Function to display serial number
    void showSerialNumber() const {
        std::cout << "I am object number " << serialNumber << std::endl;
    }
};

// Initialize static member
int SerialObject::count = 0;

int main() {
    SerialObject obj1, obj2, obj3; // Creating three objects

    obj1.showSerialNumber();
    obj2.showSerialNumber();
    obj3.showSerialNumber();

    return 0;
}
