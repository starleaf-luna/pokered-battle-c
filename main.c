#include <stdio.h>
#include "stats.h"
#include "mons.h"
#include "msg.h"
#include "mon_stats.h"

void print_mon_base_stats(unsigned char mon_index);
void handle_fight_menu();

char state = 0;

int main() {
    // print start message
    printf(start_msg);

    while (1) {
        switch (state) {
            case 0:
                // menu
                unsigned char index;

                // menu options
                while (!state) {
                    printf(menu_msg);
                    scanf("%d", &index);
                    switch (index) {
                        case 0:
                            return 0; // prevent a bug with invalid inputs
                        case 1:
                            // Set up a battle
                            printf(setup_desc);
                            state = 1;
                            break;
                        case 2:
                            // Options & settings
                            printf(options_desc);
                            printf(generic_error);
                            break;
                        case 3:
                            // Pokédex
                            printf(dex_desc);
                            printf(dex_prompt_msg);
                            scanf("%d", &index);
                            print_mon_base_stats(index);
                            break;
                        default:
                            printf(bad_choice, index);
                            break;
                    }
                }
                break;
            case 1:
                // fight setup
                handle_fight_menu();
                break;
            default: return 0;
        }
    }
        
    return 0;
}

void print_mon_base_stats(unsigned char mon_index) {
    if (mon_index > MON_AMOUNT || mon_index == 0) {
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

void handle_fight_menu() {
    unsigned char index  = 0;

    printf(fight_setup_msg);
    printf(fight_setup_basic_msg);
    printf(dex_prompt_msg);
    scanf("%d", &index);
    printf("\n");

    if (index > MON_AMOUNT || index == 0) {
        printf(stat_error_msg, index);
        printf(fight_setup_failsafeID_msg);
        index = 1;
        return;
    }

    plr_mon.index = index;

    printf(fight_setup_level_prompt);
    scanf("%d", &index);
    printf("\n");

    if (index > 100 || index == 0) {
        printf(stat_lverror_msg, index);
        printf(fight_setup_failsafeID_msg);
        index = 1;
        return;
    }

    plr_mon.level = index;
    printf(fight_setup_opp_msg);

    printf(dex_prompt_msg);
    scanf("%d", &index);
    printf("\n");

    if (index > MON_AMOUNT || index == 0) {
        printf(stat_error_msg, index);
        printf(fight_setup_failsafeID_msg);
        index = 1;
        return;
    }

    opp_mon.index = index;

    printf(fight_setup_level_prompt);
    scanf("%d", &index);
    printf("\n");

    if (index > 100 || index == 0) {
        printf(stat_lverror_msg, index);
        printf(fight_setup_failsafeID_msg);
        index = 1;
        return;
    }

    opp_mon.level = index;

    printf(fight_setup_preview_msg, plr_mon.index, mon_names[plr_mon.index], plr_mon.level, opp_mon.index, mon_names[opp_mon.index], opp_mon.level);

    state = 3;
}
