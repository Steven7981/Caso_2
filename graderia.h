#include <stack>
#include <iostream>
#include <fstream>
using namespace std;

class Graderia{
    private:
        stack<Fanatico> colaFan;

    public:
    //cuando termie el concierto, ir sacando a la gente de las graderias
        void salirGraderia(){
            colaFan.pop();
        }

};
