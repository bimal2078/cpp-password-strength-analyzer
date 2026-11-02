#include<iostream>
#include<string>
using namespace std;

class PasswordAnalyzer{

    private:
    string password;


    public:

     void welcome(){

    
    cout << "====================================" << endl;
    cout << " Password Strength Checker" << endl;
    cout << "====================================" << endl;
    cout << "Welcome to my Cybersecurity project !" << endl;
    cout << "====================================" << endl;
    }

    void getPassword(){
        cout << "Please enter your password: ";
        cin >> password;
    }

    void displayPasswordLength(){
        cout << "Your password length is: " << password.length() << endl;
    }

    void AnalyzePassword(){
         bool hasUpper = false;
        bool hasLower = false;
        bool hasDigit = false;
        bool hasSpecial = false;

        for (char ch : password) {
            if (isupper(static_cast<unsigned char>(ch))) {
                hasUpper = true;
            }
            else if (islower(static_cast<unsigned char>(ch))) {
                hasLower = true;
            }
            else if (isdigit(static_cast<unsigned char>(ch))) {
                hasDigit = true;
            }
            else {
                hasSpecial = true;
            }
        }

          int score = 0;

    if (password.length() >= 8) {
        score++;
    }

    if (hasUpper) {
        score++;
    }

    if (hasLower) {
        score++;
    }

    if (hasDigit) {
        score++;
    }

    if (hasSpecial) {
        score++;
    }

        cout << "\nPassword Analysis:" << endl;

        cout << "Length: " << password.length() << endl;
        cout << "Uppercase: " << (hasUpper ? "Yes" : "No") << endl;
        cout << "Lowercase: " << (hasLower ? "Yes" : "No") << endl;
        cout << "Digits: " << (hasDigit ? "Yes" : "No") << endl;
        cout << "Special Characters: " << (hasSpecial ? "Yes" : "No") << endl;


        cout << "Score: " << score << "/5" << endl;

        if(score <=2){
            cout << "Password Strength: Weak" << endl;
        }
            else if(score <= 4)
            {
            cout << "Password Strength: Moderate" << endl;
            }
            else{
            cout << "Password Strength: Strong" << endl;
            }

cout << "====================================" << endl;

        }
    };


    int main(){

        PasswordAnalyzer analyzer;
         analyzer.welcome();
        analyzer.getPassword();
        analyzer.AnalyzePassword();
         return 0;


    }

    
