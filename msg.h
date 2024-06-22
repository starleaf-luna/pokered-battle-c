// msg.h
// message definitions

#ifndef MSG_H
#define MSG_H

// message shown at the start
const char *start_msg = "Pokemon Red, Blue (International) Battle Engine\nPorted to C by Bellie, 2024\n"
                        "Pokemon is a trademark of Pokemon Company, not mine.\nThanks to pret for the disassembly!\n\n";
                        
// menu
const char *menu_msg = "What do you wish to do?:\n"
                       "(Input the number corresponding to the option [to the left]).\n\n"
                       "\t1. Set up a battle\n"
                       "\t2. Options & settings\n"
                       "\t3. Pokedex\n\n"
                       "\t0. Exit\n\n"
                       "Input your choice here... > ";
                       
const char *bad_choice = "%d is not a valid menu choice!\n\n";
           
// descriptions of the menu items           
const char *setup_desc = "Set up a battle by providing which Pokemon you want\n"
                         "to battle with and which Pokemon you want the opponent to have.\n\n"
                         "The \"Advanced\" mode lets you specify stats of each Pokemon,\n"
                         "while the default \"Basic\" mode only lets you specify the ID and the level,\n"
                         "which is used to calculate the Pokemon's stats.\n\n";
                         
const char *options_desc = "Change stuff like the Battle type, or whether bugs within the\n"
                           "battle engine should be fixed or not.\n\n";
                           
const char *dex_desc = "View the base stats of any Pokemon.\n"
                       "You'll only need to provide the index number of the Pokemon\n"
                       "you want to check, and you'll get back its name and base HP,\n"
                       "Attack, Defense, Speed and Special stats.\n\n";
                       
// generic error message
const char *generic_error = "This option is yet unimplemented. =( \n\n";

// dex prompt
const char *dex_prompt_msg = "Enter a Pokemon index... (1-151) > ";
                        
// stat printing messages
const char *stat_template_msg = "Index %d\n\n"
                                "Name: %s\n"
                                "Base HP: %d\n"
                                "Base Attack: %d\n"
                                "Base Defense: %d\n"
                                "Base Speed: %d\n"
                                "Base Special: %d\n";
                               
const char *stat_error_msg = "Invalid index %d!\n"
                             "This does not include Pokemon from Johto or later,\n"
                             "and Pokemon 0 is invalid.\n\n";

// test message
const char *test_prompt_msg = "Enter a number (1-151)... > ";

#endif