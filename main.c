#include "utils.h"
#include "player.h"
#include "role.h"
#include "enemy.h"
#include "loot.h"
Player player;
string welcome_message="Bienvenue dans un super jeu!\nFait pendant les cours de programmation de Mme Russo comme projet alternatif aux cours.\n";
int main(int argc, string argv[]) {
    printf("Salut %s\n",welcome_message);
    printf("Salut %s","Quel est votre nom?\n");
    string supersalut="";
    scanf("%s",supersalut);
    // printf("Salut %s",supersalut);
    player.name=supersalut;
    printf("Bienvenue %s comment allez vous? (entrez Bien ou Moyen ou Mal)",player.name);
    // string* responsepossible = {"Bien","Moyen","Mal"};
    // getInput(responsepossible,"Entrez une réponse valide");
    printsuperhello();
    return 0;
}
// string getInput(string* response_possible_list, string callback_message){
//     callback_message=callback_message?callback_message:"Oh non";
//     string ret="";
//     scanf("%s",ret);
//     while(1){
//         printf(callback_message);
//         scanf("%s",ret);
//     }
//     return ret;
// }
// void create_combat(){
//     printf("You are in combat\n");
// }
