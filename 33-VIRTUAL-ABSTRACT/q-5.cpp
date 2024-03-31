/*Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy*/
#include<iostream>
#include <math.h>
using namespace std;
class Photon
{
    protected:
    double wavelength;
    public:
        Photon(double wavelength){
            this->wavelength = wavelength;
        }

};
class calculate_photonEnergy:public Photon
{
    double E;
    public:
        calculate_photonEnergy(double value_in_angstrom) : Photon(value_in_angstrom){}
        void calc_photonEnergy()
        {
            E = (6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength;
        }
        void display()
        {
            cout<<"Energy : "<<E;
        }
};
int main()
{
    
    calculate_photonEnergy c(1);
    c.calc_photonEnergy();
    c.display();
}