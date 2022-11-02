#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

void countDoc(const string &filename, int &wordCount, int &charCount)
{
    ifstream fin;       // labeling
    string word;        // labeling
    fin.open(filename); // open file
    if (fin.is_open())
    {
        while (fin >> word)
        {
            wordCount++;                         // counts word
            charCount = charCount + word.size(); // word.size() is the size of word = amount of characters a word has
        }
    }
    else
    {
        cout << "Failed to open file" << endl;
        exit(-1);
    }
    fin.close();
}
int main()
{
    int wordCount = 0;
    int charCount = 0;
    string filename = "dat_hw7_prob1.txt"; // labeling & assigning file 
    countDoc(filename, wordCount, charCount);
    cout << "Number of words in the File: " << wordCount << endl;
    cout << "Number of characters, exculding spaces, in the File: " << charCount << endl;
    return 0;
}
