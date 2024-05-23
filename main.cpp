#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool verifyEmail(string str1);

int main()
{ 
    string email;
    string password;
    char   selection;
    selection = 'Y';
    
    while (selection == 'Y')
    {
        cout << "Enter your email: ";
        getline(cin, email);

        cout << "Email: " << email << endl;

        if (verifyEmail(email))
        {
            cout << email << " is a valid email.";
        }
        else
        {
            cout << email << " is not valid.";
        }
        cout << endl << endl;

        cout << "Would you like to validate another email? (Y / N): ";
        cin.get(selection);
        cin.ignore();
        cout << endl;
    }


    
    
}
/* ---- OUTPUT ---------------
Enter your email: cabo9123@yahoo.com
Email: cabo9123@yahoo.com
cabo9123@yahoo.com is a valid email.

Would you like to validate another email? (Y / N): Y

Enter your email: berf1@saddleback.edu
Email: berf1@saddleback.edu
berf1@saddleback.edu is a valid email.

Would you like to validate another email? (Y / N): Y

Enter your email: 123%&*@a*Tw/.coolaid
Email: 123%&*@a*Tw/.coolaid
123%&*@a*Tw/.coolaid is not valid.

Would you like to validate another email? (Y / N): n
*/
