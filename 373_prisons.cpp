#include <iostream>
#include <string>
using namespace std;

// class PRISON
// {
//     public:
//         const int prison_cells = 40;
//         int getPrisoners() { return prisoners; }
//         int setPrisoners( int p ) { p = prisoners; }
//         int getBeds() { return beds; }
//         int setBeds( int b ) { b = beds; }
//     private:
//         int beds;
//         int prisoners;
// };

class PRISONERS
{
    public:
        int month_sentence, time_served, time_release,
            children, approve_visitors, hours_worked,
            balance, cell_number;
        string residence;
        float pay_rate;
        int health [ 5 ] = { 1, 2, 3, 4, 5 };
};

class GUARDS
{
    public:
        string weapon, beatings, gangs, contraband, probation;
        int infractions;
        int steroid [ 2 ] = { 0, 1 };
};

// int main()
// {
//     return 0;
// }
