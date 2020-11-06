cmake_minimum_required(VERSION 3.17)
project(Army)

set(CMAKE_CXX_STANDARD 11)

add_executable(Army main.cpp warrior/Warrior.cpp warrior/Warrior.h
        state/State.cpp state/State.h exeptions/NoHPException.cpp
        exeptions/NoHPException.h ability/Ability.cpp ability/Ability.h
        warrior/Soldier.cpp warrior/Soldier.h ability/SoldierAbility.cpp
        ability/SoldierAbility.h warrior/Rogue.cpp warrior/Rogue.h
        ability/RogueAbility.cpp ability/RogueAbility.h
        warrior/Vampire.cpp warrior/Vampire.h ability/VampireAbility.cpp
        ability/VampireAbility.h warrior/Werewolf.cpp warrior/Werewolf.h
        ability/WerewolfAbility.cpp ability/WerewolfAbility.h
        exeptions/WerewolfConvertException.cpp
        exeptions/WerewolfConvertException.h
        exeptions/VampireConvertException.cpp
        exeptions/VampireConvertException.h
        spellcaster/Spellcaster.cpp spellcaster/Spellcaster.h
        spellcaster/Wizard.cpp spellcaster/Wizard.h
        spellCasterAbility/WizardAbility.cpp spellCasterAbility/WizardAbility.h
        spell/Spell.cpp spell/Spell.h spell/FireBall.cpp
        spell/FireBall.h
        spellCasterAbility/SpellCasterAbility.cpp
        spellCasterAbility/SpellCasterAbility.h spell/IceSpire.cpp spell/IceSpire.h spell/LowerHeal.cpp spell/LowerHeal.h spell/MasterHeal.cpp spell/MasterHeal.h spellcaster/Healer.cpp spellcaster/Healer.h spellCasterAbility/HealerAbility.cpp spellCasterAbility/HealerAbility.h warrior/Berserk.cpp warrior/Berserk.h ability/BerserkAbility.cpp ability/BerserkAbility.h spellcaster/Priest.cpp spellcaster/Priest.h spellCasterAbility/PriestAbility.cpp spellCasterAbility/PriestAbility.h unit/Unit.cpp unit/Unit.h spellcaster/Warlock.cpp spellcaster/Warlock.h spellCasterAbility/WarlockAbility.cpp spellCasterAbility/WarlockAbility.h ability/DemonAbility.cpp ability/DemonAbility.h warrior/Demon.cpp warrior/Demon.h spellCasterAbility/NecromancerAbility.cpp spellCasterAbility/NecromancerAbility.h spellcaster/Necromancer.cpp spellcaster/Necromancer.h player/Player.cpp player/Player.h)