#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "birthday.h" //needed to store birthday object in this class

using namespace std;

class people
{
    public:
        people(string x, birthday bo);
        void dateprint();
    protected:
    private:
    string name;
    birthday dob; //borthday object
};

#endif // PEOPLE_H
