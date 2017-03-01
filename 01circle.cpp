#include <iostream>
#include <cmath>
using namespace std;
class CircleType
{
    private:
        int iRadius;
        double dCirc, dArea;
        
    public:
        void fnSetRadius(int);
        void fnShowDetails();
        void fnCalcCirc();
        void fnCalcArea();
};

CircleType :: CircleType()
{

}

void CircleType :: fnSetRadius(int iR)
{
    iRadius = iR;
}
    
void CircleType :: fnShowDetails()
{
    cout << "\nRadius : " << iRadius;
    cout << "\nCircumference : " << dCirc;
    cout << "\nArea : " << dArea;
}

void CircleType :: fnCalcCirc()
{
    dCirc = 2 * M_PI * iRadius;
}

void CircleType :: fnCalcArea()
{
    dArea = M_PI * iRadius * iRadius;
}

int main(void)
{
    CircleType c1, c2;
    
    c1.fnSetRadius(7);
    
    c1.fnCalcCirc();
    
    c1.fnCalcArea();
    
    c1.fnShowDetails();
    
    return 0;
}








