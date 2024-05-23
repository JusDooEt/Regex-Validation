# Regex-Validation

## About
This program is a practical example and template on how to use the Regular Expression library using C++. This file contains a [function](VerifyEmail.cpp) that defines the regular expression to verify a standard email address and will attempt to match the pattern the string passed through the function. If the regex pattern matches the string, the function will return true. Otherwise, the function will return false. The code in [main.cpp](main.cpp) is an example of how this function would be used in a program. 

## Output
```
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
```

## Regular Expressions (Regex)
```
regex expression("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
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
