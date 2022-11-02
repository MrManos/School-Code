#include <iostream>
#include <vector>
using namespace std;

  bool containsDuplicate(std::vector<int> &x)
{

    for (int i = 0; i < int (x.size()) - 1; i++)
    {
        for (int j = i + 1; j < x.size(); j++)
        {
            if (x[i] == x[j]){
                return true;
            }
        } 
    }  
    return false;
    if (x.size() == 0 || x.size() == 1){
        return false;
    }
}
int main()
{   
    vector<int> x= {3,5, -1, 9, -3, 8};
    bool z = containsDuplicate(x);
    if ( z == false){
        cout << "false" << endl;
    } else { 
        cout << "true" << endl; 
    }
    return 0;
}