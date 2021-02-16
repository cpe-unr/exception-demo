#include <iostream>
using namespace std;


class Animal {
    string message = "I am animal";
public:
    virtual const string &getMessage() const {
        return message;
    }

};

class Cat : public Animal {
    string message = "I am a cat";
public:
    const string &getMessage() const {
        return message;
    }
};
int main() {
    try {
        throw runtime_error("Cat done throwed up");
    }
    catch(runtime_error &e) {
        cout << e.what() << endl;
    }
    return 0;
}
