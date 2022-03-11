#include "../../header/Scene/scene.h"

class SceneOne : Scene {


//set description, intro scene and implement what happens
public:
string description = "The guild intro scene";
string intro = "There is a rowdy drunk at the bar looking for some trouble. \nHe approaches.\n Drunk: \"What are you looking at boy?\"\n He shoves you and initiates an altercation.";

    SceneOne(Character* c) : Scene(description, intro, c) {
    }
void print();
};

void SceneOne::print() {
    cout << descrip << endl;
    cout << introStory << endl;

    Fight_Menu fight(player);
    Enemy enemy;
    player = fight.print(enemy);




}