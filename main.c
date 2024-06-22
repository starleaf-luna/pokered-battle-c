#include <stdio.h>
#include "stats.h"
#include "mons.h"
#include "msg.h"
#include "mon_stats.h"

void print_mon_base_stats(unsigned char mon_index);

int main() {
    // print start message
    printf(start_msg);
    
    // todo
    unsigned char index;
    printf(menu_msg);
    scanf("%d", &index);
    printf("\n");
    
    while (index) {
        switch (index) {
            case 0:
                return 0; // prevent a bug with invalid inputs
            case 1:
                // Set up a battle
                printf(setup_desc);
                printf(generic_error);
                break;
            case 2:
                // Options & settings
                printf(options_desc);
                printf(generic_error);
                break;
            case 3:
                // Pokedex
                printf(dex_desc);
                printf(dex_prompt_msg);
                scanf("%d", &index);
                print_mon_base_stats(index);
                break;
            default:
                printf(bad_choice, index);
                break;
        }
        printf(menu_msg);
        scanf("%d", &index);
    }
        
    return 0;
}

void print_mon_base_stats(unsigned char mon_index) {
    if (mon_index > (MON_AMOUNT - 1) || mon_index == 0) {
        printf(stat_error_msg, mon_index);
        return;
    }
    printf(
        stat_template_msg, 
        mon_index, 
        mon_names[mon_index], 
        mon_base_hp[mon_index], 
        mon_base_atk[mon_index],
        mon_base_def[mon_index],
        mon_base_spd[mon_index],
        mon_base_spc[mon_index]
    );
    /*
    printf("Name: %s\n", mon_names[mon_index]);
    printf("Base HP: %d\n", mon_base_hp[mon_index]);
    printf("Base Attack: %d\n", mon_base_atk[mon_index]);
    */
    printf("\n");
}
