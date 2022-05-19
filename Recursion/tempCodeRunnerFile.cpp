#include <iostream>
using namespace std;

void tower_of_hanoi(int n, char from_rod, char to_rod, char extra_rod) {
    if(n==0) {
        return;
    }
    tower_of_hanoi(n-1, from_rod, extra_rod, to_rod);

    cout << "Move disk " << n << " from rod "<< from_rod << " to rod " <<  to_rod << endl;

    tower_of_hanoi(n-1, extra_rod, to_rod, from_rod);
}
int main()
{
    int n=4;
    tower_of_hanoi(n,'A', 'C', 'B');
    return 0;
}