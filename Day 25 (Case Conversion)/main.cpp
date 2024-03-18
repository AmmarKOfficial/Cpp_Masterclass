// Basic Text Encryption/Decryption


#include <iostream>
#include <string>
using namespace std;

int main() {
    string Alpha = "Welcome to Coding Classes"; 
    cout << "Alpha String: " << Alpha << endl;
    int Length = Alpha.size();
    string Beta = Alpha; 
  

    for(int j = 0; j < Length; j++){
        char Val = Alpha[j];
        if(static_cast<int>(Val) == 32){
            continue;
        }
        if (static_cast<int>(Val) <= 90) {
            int New_Int = static_cast<int>(Val) + 32; // Added 32 to convert uppercase to lowercase
            Beta[j] = static_cast<char>(New_Int);
        }
        else if (static_cast<int>(Val) >= 97) {
            int New_Int = static_cast<int>(Val) - 32; // Subtracted 32 to convert lowercase to uppercase
            Beta[j] = static_cast<char>(New_Int);
        }
    }

    cout << "New Transformed String is: " << Beta << endl;


        // for(int j = 0; j < Length; j++){
    //     if(islower(Alpha[j])) // Checking if the character is already lowercase
    //         Beta[j] = toupper(Alpha[j]); // Converting lowercase to uppercase
    //     else if(isupper(Alpha[j])) // Checking if the character is already uppercase
    //         Beta[j] = tolower(Alpha[j]); // Converting uppercase to lowercase
    // }

    // cout << "New Transformed String is: " << Beta << endl;

    
    return 0;
}
