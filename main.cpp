#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
    // instructions
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "#######################" << endl;
    cout << "RANDOM STRING GENERATOR" << endl;
    cout << "#######################" << endl;
    cout << endl;
    cout << "This program generates a random string without spaces." << endl;
    cout << "The characters used range from decimal values 33 to 126 on the ASCII table:" << endl;
    cout << "http://www.asciitable.com" << endl;
    cout << endl;
    cout << "WARNING: If you enter unexpected input, the program might go crazy." << endl;
    cout << "\t You can kill the program either by pressing \"ctrl + C\"" << endl;
    cout << "\t OR" << endl;
    cout << "\t you can terminate terminal with \"command + Q\"" << endl;
    cout << endl;
    
    // characters (in decimal) range from 33-126
    // create a random number generator for integers from 33-126
    srand(static_cast<unsigned int>(time(NULL))); // random seed

    string runAgain = "y";
    while (runAgain.compare("y") == 0) {
        vector<char> randomString;
        int strLength = 0;
    
        cout << "Desired string length: ";
        cin >> strLength;
    
        // start string generation
        for (int i = 0; i < strLength; ++i) {
            char generatedChar;
            generatedChar = ( rand() % (126 - 33) ) + 33;
            randomString.push_back(generatedChar);
        }
    
        for (int i = 0; i < strLength; ++i) {
            cout << randomString.at(i);
        }
        cout << endl << endl;
        
        // ask to run again
        runAgain = "a";
        while ( runAgain.compare("y") != 0 && runAgain.compare("n") != 0 ) {
            if (runAgain.compare("a") != 0) {
                cout << "Invalid response." << endl;
            }
            
            cout << "Would you like to run this again?(y/n): ";
            cin >> runAgain;
            cout << endl;
        }
    }
    
    cout << "Program ended..." << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;
    
    return 0;
}
