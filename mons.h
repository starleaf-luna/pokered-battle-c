// mons.h
// Pokemon definitions and base stats

#ifndef MONS_H
#define MONS_H

#include "mon_ids.h"
#include "moves.h"

// amount of Pokemon
// last index of Pokemon + 1 for MON_NONE
#define MON_AMOUNT 152

// Pokemon base stats list
// entries correspond to MON_* IDs
const unsigned char *mon_names[] = {
    "(Invalid!)",   // MON_NONE
    "Bulbasaur",    // MON_BULBASAUR
    "Ivysaur",      // MON_IVYSAUR
    "Venusaur",     // MON_VENUSAUR
    "Charmander",   // MON_CHARMANDER
    "Charmeleon",   // MON_CHARMELEON
    "Charizard",    // MON_CHARIZARD
    "Squirtle",     // MON_SQUIRTLE
    "Wartortle",    // MON_WARTORTLE
    "Blastoise",    // MON_BLASTOISE
    "Caterpie",     // MON_CATERPIE
    "Metapod",      // MON_METAPOD
    "Butterfree",   // MON_BUTTERFREE
    "Weedle",       // MON_WEEDLE
    "Kakuna",       // MON_KAKUNA
    "Beedrill",     // MON_BEEDRILL
    "Pidgey",       // MON_PIDGEY
    "Pidgeotto",    // MON_PIDGEOTTO
    "Pidgeot",      // MON_PIDGEOT
    "Rattata",      // MON_RATTATA
    "Raticate",     // MON_RATICATE
    "Spearow",      // MON_SPEAROW
    "Fearow",       // MON_FEAROW
    "Ekans",        // MON_EKANS
    "Arbok",        // MON_ARBOK
    "Pikachu",      // MON_PIKACHU
    "Raichu",       // MON_RAICHU
    "Sandshrew",    // MON_SANDSHREW
    "Sandslash",    // MON_SANDSLASH
    "Nidoran (F)",  // MON_NIDORAN_F
    "Nidorina",     // MON_NIDORINA
    "Nidoqueen",    // MON_NIDOQUEEN
    "Nidoran (M)",  // MON_NIDORAN_M
    "Nidorino",     // MON_NIDORINO
    "Nidoking",     // MON_NIDOKING
    "Clefairy",     // MON_CLEFAIRY
    "Clefable",     // MON_CLEFABLE
    "Vulpix",       // MON_VULPIX
    "Ninetales",    // MON_NINETALES
    "Jigglypuff",   // MON_JIGGLYPUFF
    "Wigglytuff",   // MON_WIGGLYTUFF
    "Zubat",        // MON_ZUBAT
    "Golbat",       // MON_GOLBAT
    "Oddish",       // MON_ODDISH
    "Gloom",        // MON_GLOOM
    "Vileplume",    // MON_VILEPLUME
    "Paras",        // MON_PARAS
    "Parasect",     // MON_PARASECT
    "Venonat",      // MON_VENONAT
    "Venomoth",     // MON_VENOMOTH
    "Diglett",      // MON_DIGLETT
    "Dugtrio",      // MON_DUGTRIO
    "Meowth",       // MON_MEOWTH
    "Persian",      // MON_PERSIAN
    "Psyduck",      // MON_PSYDUCK
    "Golduck",      // MON_GOLDUCK
    "Mankey",       // MON_MANKEY
    "Primeape",     // MON_PRIMEAPE
    "Growlithe",    // MON_GROWLITHE
    "Arcanine",     // MON_ARCANINE
    "Poliwag",      // MON_POLIWAG
    "Poliwhirl",    // MON_POLIWHIRL
    "Poliwrath",    // MON_POLIWRATH
    "Abra",         // MON_ABRA
    "Kadabra",      // MON_KADABRA
    "Alakazam",     // MON_ALAKAZAM
    "Machop",       // MON_MACHOP
    "Machoke",      // MON_MACHOKE
    "Machamp",      // MON_MACHAMP
    "Bellsprout",   // MON_BELLSPROUT
    "Weepinbell",   // MON_WEEPINBELL
    "Victreebel",   // MON_VICTREEBEL
    "Tentacool",    // MON_TENTACOOL
    "Tentacruel",   // MON_TENTACRUEL
    "Geodude",      // MON_GEODUDE
    "Graveler",     // MON_GRAVELER
    "Golem",        // MON_GOLEM
    "Ponyta",       // MON_PONYTA
    "Rapidash",     // MON_RAPIDASH
    "Slowpoke",     // MON_SLOWPOKE
    "Slowbro",      // MON_SLOWBRO
    "Magnemite",    // MON_MAGNEMITE
    "Magneton",     // MON_MAGNETON
    "Farfetch'd",   // MON_FARFETCHD
    "Doduo",        // MON_DODUO
    "Dodrio",       // MON_DODRIO
    "Seel",         // MON_SEEL
    "Dewgong",      // MON_DEWGONG
    "Grimer",       // MON_GRIMER
    "Muk",          // MON_MUK
    "Shellder",     // MON_SHELLDER
    "Cloyster",     // MON_CLOYSTER
    "Gastly",       // MON_GASTLY
    "Haunter",      // MON_HAUNTER
    "Gengar",       // MON_GENGAR
    "Onix",         // MON_ONIX
    "Drowzee",      // MON_DROWZEE
    "Hypno",        // MON_HYPNO
    "Krabby",       // MON_KRABBY
    "Kingler",      // MON_KINGLER
    "Voltorb",      // MON_VOLTORB
    "Electrode",    // MON_ELECTRODE
    "Exeggcute",    // MON_EXEGGCUTE
    "Exeggutor",    // MON_EXEGGUTOR
    "Cubone",       // MON_CUBONE
    "Marowak",      // MON_MAROWAK
    "Hitmonlee",    // MON_HITMONLEE
    "Hitmonchan",   // MON_HITMONCHAN
    "Lickitung",    // MON_LICKITUNG
    "Koffing",      // MON_KOFFING
    "Weezing",      // MON_WEEZING
    "Rhyhorn",      // MON_RHYHORN
    "Rhydon",       // MON_RHYDON
    "Chansey",      // MON_CHANSEY
    "Tangela",      // MON_TANGELA
    "Kangaskhan",   // MON_KANGASKHAN
    "Horsea",       // MON_HORSEA
    "Seadra",       // MON_SEADRA
    "Goldeen",      // MON_GOLDEEN
    "Seaking",      // MON_SEAKING
    "Staryu",       // MON_STARYU
    "Starmie",      // MON_STARMIE
    "Mr. Mime",     // MON_MR_MIME
    "Scyther",      // MON_SCYTHER
    "Jynx",         // MON_JYNX
    "Electabuzz",   // MON_ELECTABUZZ
    "Magmar",       // MON_MAGMAR
    "Pinsir",       // MON_PINSIR
    "Tauros",       // MON_TAUROS
    "Magikarp",     // MON_MAGIKARP
    "Gyarados",     // MON_GYARADOS
    "Lapras",       // MON_LAPRAS
    "Ditto",        // MON_DITTO
    "Eevee",        // MON_EEVEE
    "Vaporeon",     // MON_VAPOREON
    "Jolteon",      // MON_JOLTEON
    "Flareon",      // MON_FLAREON
    "Porygon",      // MON_PORYGON
    "Omanyte",      // MON_OMANYTE
    "Omastar",      // MON_OMASTAR
    "Kabuto",       // MON_KABUTO
    "Kabutops",     // MON_KABUTOPS
    "Aerodactyl",   // MON_AERODACTYL
    "Snorlax",      // MON_SNORLAX
    "Articuno",     // MON_ARTICUNO
    "Zapdos",       // MON_ZAPDOS
    "Moltres",      // MON_MOLTRES
    "Dratini",      // MON_DRATINI
    "Dragonair",    // MON_DRAGONAIR
    "Dragonite",    // MON_DRAGONITE
    "Mewtwo",       // MON_MEWTWO
    "Mew",          // MON_MEW
};

// define a Pokemon struct
// uses "moves.h" Move struct
typedef struct {
    unsigned char index;
    unsigned char level;
    unsigned char status;
    unsigned char type1;
    unsigned char type2;
    unsigned int monXP;
    unsigned short int monHP;
    unsigned short int maxHP;
    unsigned short int hpXP;
    unsigned short int atkXP;
    unsigned short int defXP;
    unsigned short int spdXP;
    unsigned short int spcXP;
    unsigned short int monDVs;
    unsigned short int attack;
    unsigned short int defense;
    unsigned short int speed;
    unsigned short int special;
    Move move1;
    Move move2;
    Move move3;
    Move move4;
} Mon;

#endif

