//This program will ask the user if they would like to add a note.
#include <iostream>
#include <string>

//This function will ask the user to enter a title and the message to be entered into the note.
void add_note()
{
  std::string title, note;
  std::cout << "Please enter the note's title: ";
  std::cin >> title;
  std::cout << "Please enter the note: ";
  std::cin >> note;
  std::cout << "\nNote added!\n\n";
}

//This function acts as the programs menu.
// This is where the user will choose whether they would like to enter a note or exit out of the program
void add_question()
{
  char choice;
  std::cout << "Welcome to TuffyNotes!\n";
  std::cout << "[C] Create a note\n";
  std::cout << "[E] Exit\n";
  std::cout << "Choice: ";
  std::cin >> choice;

  if(choice == 'c'||choice == 'C')
  {
    //This calls the add_note function which will allow access to note function.
    //The user then will be able to enter their message.
    add_note();
  }
  else if(choice == 'e'||choice == 'E')
  {
    std::cout << "\nThank you for choosing Tuffy Notes\n\n";
  }
  else
  {
    std::cout << "Invalid choice. Please try again.\n\n";
  }
}

int main()
{
  //This calls the add_question function which will allow access to the question function
  //This will then prompt the user to choose whether they would like to make a note or exit out of it
  //If the user chooses to make a note, then the add_question function will call the add_note function.
   add_question();
   return 0;
}
