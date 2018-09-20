//building block...class objectifying an idea


#include <string>
#include <ctime>
#include <vector>
using namespace std;

class Idea {
    protected:
    string value;
    time_t date;
    

    public:
    Idea();
        
    string getString();
};


     Idea::Idea(){
        value = "Here goes nothing";
        time_t date = time(0);
        }


  string Idea::getString(){
        return value;
    }
