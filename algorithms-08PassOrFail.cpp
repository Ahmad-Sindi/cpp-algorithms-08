// Algorithm Challenge 
// 8 - Pass or Fail
#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Type your mark: ";
    cin >> mark;

    if (mark >= 50)
    {
        cout << "\nCongratulations! You passed the test." << endl;
    }
    else
    {
        cout << "\n===\t===\t===\t" << endl; // decorative line
        cout << "Result: You failed the final test." << endl;
        cout << "\"Study hard and diligently, or work harder next time!\"" << endl;
    }

    return 0;
}
