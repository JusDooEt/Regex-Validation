#include <iostream>
#include <string>
#include <regex>
using namespace std;

bool verifyEmail(string email);
bool verifyPassword(string password);

int main()
{ 
    string email;
    string password;
    char   selection;
    selection = 'Y';
    
    while (toupper(selection) == 'Y')
    {
        cout << "Enter your email: ";
        getline(cin, email);
        cout << endl;

        cout << "Enter your password: ";
        getline(cin, password);
        cout << endl;

        /*cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;*/

        if (verifyEmail(email))
        {
            cout << email << " is a valid email.";
        }
        else
        {
            cout << email << " is not valid.";
        }
        cout << endl;
        if (verifyPassword(password))
        {
            cout << password << " is a valid password.\n";
        }
        cout << endl;

        cout << "Would you like to validate another account? (Y / N): ";
        cin.get(selection);
        cin.ignore();
        cout << endl;
    }


    
    
}
/* ---- OUTPUT ---------------
Enter your email: cabo9123@yahoo.com

Enter your password: discoDancing9872364

cabo9123@yahoo.com is a valid email.

        < Your password needs a special character! >


Would you like to validate another account? (Y / N): Y

Enter your email: berf1@saddleback.edu

Enter your password: computersciencenerd_

berf1@saddleback.edu is a valid email.

        < Your password needs a capital letter! >


        < Your password needs a number! >


Would you like to validate another account? (Y / N): y

Enter your email: 123%&*@a*Tw/.coolaid

Enter your password: garbageEater8347!

123%&*@a*Tw/.coolaid is not valid.
garbageEater8347! is a valid password.

Would you like to validate another account? (Y / N): n

*/
