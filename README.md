# Regex-Validation

## Newest Update
### [bool verifyPassword(string password)](VerifyPassword.cpp)
This function receives a string representing a user's password they are creating for a new account. This function will define multiple regular expressions to verify that the password matches the requirements. The password must be 12 or more characters long, including a lower and uppercase letter, a digit, and a special character. If one of these requirements is missing the function will display to the console specifying the missing requirements and will return false. This will also work if multiple criteria is missing and will inform the user of all the errors within the password. If the password meets all the requirements, the function will not display anything to the console and will return true.

## About
This program is a practical example and template on how to use the Regular Expression library using C++. This file contains functions that define the regular expressions needed to verify a standard email address or password, and will attempt to match the pattern the string passed through the function. If the regex pattern matches the string, the function will return true. Otherwise, the function will return false. The code in [main.cpp](main.cpp) is an example of how this function would be used in a program. 

## Output
```
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
```

## Functions
### [bool verifyEmail(string email)](VerifyEmail.cpp)
This function will receive a string representing an email and define a regex expression to verify the email to the standardized email address format. Since there is a standard format for valid email addresses this function does not need to describe to the user how to create a valid email address since it should already exist for the purpose of this function.

### [bool verifyPassword(string password)](VerifyPassword.cpp)
This function receives a string representing a user's password they are creating for a new account. This function will define multiple regular expressions to verify that the password matches the requirements. The password must be 12 or more characters long, including a lower and uppercase letter, a digit, and a special character. If one of these requirements is missing the function will display to the console specifying the missing requirements and will return false. This will also work if multiple criteria is missing and will inform the user of all the errors within the password. If the password meets all the requirements, the function will not display anything to the console and will return true.

## Regular Expressions (Regex)
```
regex expression("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
regex capitalLetter("[A-Z]+");
regex lowerLetter("[a-z]+");
regex digit("[0-9]+");
regex specialCharacter("[_\\.\\-*,!\\^%&$#@]+");
```
This library is used widely by almost all relevant programming language to "match" strings with a specified pattern. In this program the pattern was set to match a string with text in front of a '@' symbol following text afterwards in order to represent a valid email address. The valid characters for this pattern are all lower and uppercase letters, all digits 0 - 9, and special characters including '+', '-', '.' and '-'. This library can also use this pattern to find a substring within the given string matching the pattern and even replace said substring with new characters. 

### Formatting
#### Backslash Characters
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/4bb71a36-b31f-4df4-9fea-d906468c567a) [^1]

#### These character require nothing extra
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/cd523fbf-31b4-4722-a828-c277f7e01462) [^1]

#### Quantifiers
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/bcda122a-6239-48a7-a0bb-3922c3d005e0) [^1]
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/9063ee4f-1058-480a-a07f-5616117c25f7) [^1]

#### '|' means or
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/cf5b9631-c84e-4221-a786-10ad188294c7) [^1]

#### Start of a string
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/d7b65e1a-b931-4204-9566-3dfc6f1fda4f) [^1]

#### End of a string
![image](https://github.com/JusDooEt/Regex-Validation/assets/152052216/70b4b260-8b5a-4fad-a46c-b333488a958f) [^1]


[^1]: Dennis Rainey, Saddleback College, Mission Viejo.



