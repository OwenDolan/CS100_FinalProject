# Project Vanguard RPG
 
 Authors: \([Steven Ryan Leonido](https://github.com/SRaionido)\) ([Jin Koh](https://github.com/jkoh006)\) ([Samarth Srinivasa](https://github.com/SamarthSrinivasa)\) ([Maelle Louissaint](https://github.com/markie-bit)\) ([Owen Dolan](https://github.com/OwenDolan)\)

## Project Description
* Why is this interesting to us?
  * Gaming has become a more wide-spread and accessible form of entertainment that is a part of everyday lives. Learning the process of game making and the code, processes, and logic behind making a working game align with our personal interests due to how we all enjoy gaming ourselves for entertainment. We all have experience playing multiple video games and watching TV shows in our lifetime, and we feel like having that knowledge gives us the skills necessary to build a fantasy game that hits all the points that has made our childhoods so memorable and exciting. Since we are have direct control over our project, we have great flexibility and can input a lot of creativity into our project, which will definitely make this an enjoyable and worthwhile experience.
 * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
   * C++ - Primary programming languag where we will develop all the backend and utilize the design patterns we have learned throughout this quarter.
   * Github - For sharing and access of code, and for organization sake through the kanban board.
   * Discord - To make sure we are able to communicate and work efficiently.
   * IDE's and Text Editors (VSCODE, VIM, EMACS) - For code creation, editing and test creation.
* What will be the input/output of your project? What are the features that the project provides?
  * We are basing our project on the general Fantasy RPG format, so there we be a chosen character that can attack, run, use items, heal, and make decisions to move the story. The classes that can be chosen are Farmer, warrior, archer, Paladin and Mage. They each have specific abilities tailored to the class that affects different interactions within the game. Different items and powerups can be purchased with the currency system called Okras. Since the game is based on story making decisions, which paths you pick can unlock different bosses, story arcs, and endings.

 ## Phase II

## Class Diagram

![CS100 Project UML Image](https://user-images.githubusercontent.com/97153990/153325250-e474db5c-80ea-442e-a02d-e314b563294d.png)

* UML Description:
  * In order to create our text-based-rpg game, our plan is to implement scene, item, character, and menu objects. Scene objects will be used to help drive decisions like a tree and allow the character to move to different scenes through the use of previous and next scene pointers. Dying in game will take you immediately to the tail, and running from a fight will take you back to the beginning. Decisions related to buying items, story decisions, and fight decisions within scenes will be done through the menu object within each scene. The character object will be used to give the player choice at the start of the game and give them a certain class with its own unique skills to use within fights. The character object will also have an enemy subclass in order to facilitate fights between objects of the same type. Lastly the item obejct will be used to decide variables with in characters, such as damage and armor. The item object will also be used within a shop to allow players to upgrade their weapons, armor, and stats.
 
 ## Phase III
 
 ![UML Diagram Updated](https://user-images.githubusercontent.com/97153990/155442687-73e74da2-1143-4f84-8881-1eefd97da8db.png)

 
* Design Pattern (Strategy Pattern):
  * For our project, the strategy pattern has been chosen to help the Scene class and the implementation of a menu. Our player will need to interact with each Scene within our game, although the type of scene would lead to a different type of menu. An example being that an event scene would need the player to choose between a decision while a fight scene would constantly have the player looping over attack or item usage decisions till the player or enemies are killed. These are two varying algorithms and to have the possibility of expansion with other type of scenes without needing to constantly go back and change each scene, the use of a menu item will do the job of interacting and return the decision of the player to progress the story.

 
 ## Final deliverable
 Updated UML Diagram
 
 ![Final UML](https://user-images.githubusercontent.com/97153990/157966192-54c96e92-19e3-459d-b575-4a69889e4069.png)

 ## Installation/Usage
 >  1. Download the file as a zip.
 >  2. Run cmake3 . and make, to get the game executable. 
 >  3. Run ./game.
 >  4. You are then first prompted to start a new game or quit.
 >  5. You are then prompted to choose which character to play.
 >  
 ## Screenshots
![image](https://user-images.githubusercontent.com/78832934/157957876-fa6ede8b-fec3-4ad0-9a6d-94604aca3fef.png)
>(Running and starting the game, the starting scene along with prompt to start game)

![image](https://user-images.githubusercontent.com/78832934/157957883-07d57ca8-f412-4e94-a931-771d322aca2c.png)
>(Choosing Character Class)

![image](https://user-images.githubusercontent.com/78832934/157957896-687d22b6-4ff8-4f00-b7dd-7eb50a0a99bd.png)
>(A Plot relevent Scene to start the journey, leading into the first enemy fight!)

![image](https://user-images.githubusercontent.com/78832934/157957916-85aedae9-d737-4ff5-a6ff-939787726d40.png)
> (The plot leads to a decision tree, where you can choose a quest (which opens up scenes and more enemies), the inventory, or the shop menu)

![image](https://user-images.githubusercontent.com/78832934/157957933-1269ba04-4a81-482a-bc73-1d8906872c88.png)
>(Going into the shop, you see that there is another decision tree, prompting more parts of the shop menu)

![image](https://user-images.githubusercontent.com/78832934/157957941-7ec2374c-9799-4956-8260-b31b89997546.png)
> (You can buy strong items to help you on your quest, using the currency (Okra) gained from enemy battles)

![image](https://user-images.githubusercontent.com/78832934/157957983-8db0687d-2f26-4774-b7ce-5844fd771666.png)
> (Once you leave the decision tree, you are back on your journey!)

![image](https://user-images.githubusercontent.com/78832934/157957996-ba67aa9a-d77a-45df-8b9e-233b056f2c31.png)
>(You start your new quest, but your decisions seem to have alot of work to do!)



 

 ## Testing
We created google unit tests for different objects, for scene its different getter functions, making sure that it returns and constructs properly. For character we  tested to see the unique attack fucntions and special attacks for each different characters, making sure that the algorithms for the damage based on each characters special attack was correct. The shop test was functional and checked menu within its own environment, to see if formatting and functionality was working, and to make sure that it could interact with other other characters and items. We also used valgrind to make sure there were no memory leaks, using the full clean check function to make sure that ./game creates any memory leaks. 

 
