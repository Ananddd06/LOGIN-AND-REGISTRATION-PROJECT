# LOGIN-AND-REGISTRATION-PROJECT USING C++
The necessary header files are included: <iostream>, <stdlib.h>, <fstream>, and <string.h>.

Function prototypes for login(), registration(), and forgot() are declared.

#MAIN FUNCTION
* The main() function starts by displaying a menu for the user to choose from. 
* It prompts the user for an option and uses a switch statement to perform the corresponding action based on the input.

#LOGIN FUNCTION
* If the user selects option 1, the login() function is called. 
* It prompts the user to enter their username and password, and then reads the data from the data.txt file. 
* If a match is found, the login is successful, and the user is redirected to the main menu. Otherwise, an error message is displayed.

#REGISTARTION FUNCTION
* If the user selects option 2, the registration() function is called.
* It prompts the user to enter a username and password and then appends this data to the data.txt file. 
* The user is then informed that the registration was successful, and they are redirected to the main menu.

#FORGOT FUNCTION
* If the user selects option 3, the forgot() function is called. 
* It provides two options: to check the password by username or to go back to the main menu. 
* If the user chooses the first option, they are prompted to enter their username. 
* The data.txt file is searched for a match, and if found, the corresponding password is displayed. 
* If the username is not found, an error message is displayed, and the user is given the option to try again or return to the main menu.
* If the user selects option 4, a message is displayed, indicating that the program is exiting.
* If the user enters an invalid option, the screen is cleared, and the main() function is called again, displaying the menu.
