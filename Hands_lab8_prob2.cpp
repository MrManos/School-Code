#include <iostream>
#include <vector>
#include <iomanip> 
using namespace std;

vector<int> uniqueElements(std::vector<int> &x)
{
    vector<int> y;
    for (int i = 0; i < x.size(); i++)
    {
        if( x[i] != x[i + 1]){ // if the vector spot does not equal the vector 1 spot ahead the if statement triggers
        y.push_back(x[i]); // add num into the final y[i], increases y[i] size by 1
        }
    }
    return y; 
}

void printuniqueElements(vector<int> &x){
    cout << "vecIn: ";
    for ( int i = 0; i < x.size(); i++){
        cout << x[i] << setw(2);
    }
    cout << endl;

    cout << "VectOut: "; 
    x = uniqueElements(x);
    for ( int i = 0; i < x.size(); i++ ){
        cout << x[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vecIn = {1,2,2,5,6};
    vector<int> vecIn1 = {1,2,4,4,4,4};
    vector<int> vecIn2 = {1,2,3,4};
    vector<int> vecIn3 = {};
    printuniqueElements(vecIn);
    printuniqueElements(vecIn1);
    printuniqueElements(vecIn2);
    printuniqueElements(vecIn3);
    return 0;
}