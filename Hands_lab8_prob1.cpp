#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void computation(std::vector<double> &x)
{
    double sum = 0;
    double mean;
    for (int i = 0; i < x.size(); i++)
    {
        sum += x[i]; // adding the vector spaces together 
        mean = sum / x.size(); // total sum of the vecotor numbers added over the size of the vector 
    }
    cout << "Mean of the array: " << mean << endl;

    sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum += (x[i] - mean) * (x[i] - mean); // the (x[i] - mean )^2
    }
    double standard = sqrt(sum / (x.size() - 1)); // formula for standard deviation
    cout << "Standard deviation of the array: " << standard << endl;
}

int main()
{
    vector<double> x = {1.5, 5.5, -1.7, 9.6, 0, -2.7, 18.5};
    computation(x);
    return 0;
}