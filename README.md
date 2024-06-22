# Pokémon Red and Blue (international) battle engine port to C
A port of Pokémon Red and Blue (international)'s battle engine to C (WIP).

It has been created as an excersise in C programming, by porting something I'm already (kinda) familiar with (Pokémon), while also brushing up on C knowledge and using things like `struct`s. and, of course, for fun!

Pokémon is owned by Pokémon Company, Nintendo and Game Freak. Please don't take this down O_o

## How to run?
This repo doesn't include prebuilt binary yet. For now, to build the binary, you need a C compiler. I use GCC, so in the terminal I simply run this command:

`gcc main.c`

Make sure that you select `main.c` as the input file. Everything is linked to it, so you won't need any dependencies (currently).

You can choose any path for the outfile. I just like to use GCC's default, `./a.exe`.

## Overview
This is a console-mode program.

When launched, you're prompted with a main menu:
```
Pokemon Red, Blue (International) Battle Engine
Ported to C by Bellie, 2024
Pokemon is a trademark of Pokemon Company, not mine.
Thanks to pret for the disassembly!

What do you wish to do?:
(Input the number corresponding to the option [to the left]).

  1. Set up a battle
  2. Options & settings
  3. Pokedex

  0. Exit

Input your choice here... > 
```

Currently the only two options that work are the Pokédex and the Exit option. After printing their description, Setup and Options display a generic error message:

```
Change stuff like the Battle type, or whether bugs within the
battle engine should be fixed or not.

This option is yet unimplemented. =( 
```

## Implementation

### What's currently implemented?
- Main menu
- Pokédex - View the base stats of any Pokémon. You'll only need to provide the index number of the Pokémon you want to check, and you'll get back its name and base HP, Attack, Defense, Speed and Special stats.
- All Gen 1 Pokémon names and base stat data
- Move and Pokémon structs

### What needs to be implemented?
- Setup - Set up a battle by providing which Pokémon you want to battle with and which Pokémon you want the opponent to have. The "Advanced" mode lets you specify stats of each Pokémon, while the default "Basic" mode only lets you specify the ID and the level, which is used to calculate the Pokémon's stats.
- Options - Change stuff like the Battle type, or whether bugs within the battle engine should be fixed or not.
- Pretty much all of the engine's code
- Level-based stat recalculation code
- Types

### Completion (%)
The project is currently estimated to be `3%` completed.

## Contributing
Style guidelines:
- Always `typedef` `struct`s.
- Use `snake_case`.
  - An exception: if the name is 2 words long, and the second word is an acronym (HP, DVs, XP etc.), don't put in the underscore (i.e. `monHP`, `atkXP`).
- Within the program, don't use `é`. ASCII doesn't have `é` in it, so `Pokémon` appears glitched in the terminal. Use `Pokemon` instead.
- Internally, use `mon` or `mons` for brevity. It's easier to type `monHP` than `pokemonHP` for the hundredth time, isn't it?
- Don't use magic numbers. For instance, instead of using `152` everywhere, I defined it as `MON_AMOUNT`.
