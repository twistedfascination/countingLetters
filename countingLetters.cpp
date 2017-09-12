/* C++ program that counts the letters in a sentence
and then prints them to the screen. The program itself
uses 
*/

#include "stdafx.h"	//MVS required header
#include <string>	//Self explanitory
#include <iostream> //cin and cout 

int main()
{
	//26 letters and 26 indices, initializing to 0
	int alphacount[26] = { 0 };
	
	//Initializing string that will be used for user input
    std::string customSentence = " ";

	/*Used for printing the array below, will get rid of it
	when optomizing code among other things*/
	char printer = NULL;
	printer = 'A';

	//Prompt user for sentence input
	std::cout << "Please enter a message: ";

	//getline to include spaces
	getline(std::cin, customSentence);
	
	
	//Prints the custom sentence, for testing
	//std::cout << "\n\n Your Custom Sentence: "<<customSentence << "\n" << std::endl;

	/*For loop that initiatilizes n to 0, checks for the legth of the string to n,
	and increments n. The loop iterates through an entire string including the NULL
	character.  */

	for (int n = 0; n <= customSentence.size(); n++)
	{

		if (customSentence[n] >= 'A' && customSentence[n] <= 'Z') 
		{
			/*Alright, prepare yourself.
			
			alphacount encases the nonsense inside, and then ++ at the end, incrememnts where the
			index lands. The function (int) allows you to pass a character literal and return the
			ASCII decimal value.
			
			Because Z is equivalent to 90 and we will be receiving a value from the next part....
			
			customSentence[n] will reference a char literal that is in turn changed into its literal value,
			and finally allows the proper math to take place to position alphacount, which then finally ++s
			and increments the value at the correct index.

			Why not the easy way of alphacount['A'-customsentence[n]]++;?

			It doesn't work correctly for some reason, so this works for now.
			*/
			alphacount[(int)('Z' - '0') - (int)(customSentence[n] - '0')]++;
			
																	   
			 //Test printing
			//std::cout << alphacount['Z' - customSentence[n]] << std::endl;
		}

		//IF statement for lower case addition to alphacount array
		if (customSentence[n] >= 'a' && customSentence[n] <= 'z')
		{
			alphacount[(int)('z' - '0') - (int)(customSentence[n] - '0')]++;
			//Test print
			//std::cout << alphacount['z' - customSentence[n]] << std::endl;
		}

	}


	//prints alphabet array
	for (int x = 25; x >= 0; x--)
	{

		std::cout << "There are " << alphacount[x] << "\t";
		std::cout << printer++ << "\(s\)" <<std::endl;
	}

	
	/*pause for testing
	std::cin.ignore();	
	*/
	return 0;
	
}

