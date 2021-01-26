//header for "car" class
#include <string>

class car
{
    std::string make;
    std::string model;
    int year;
    double speed;
    int maxSpeed;

public:

    car();

    std::string getFullName(int, std::string, std::string);

    void Accelerate(double);
    void Decelerate(double);


};