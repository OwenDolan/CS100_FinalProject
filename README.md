# Project Vanguard RPG
 
 Authors: \([Steven Ryan Leonido](https://github.com/SRaionido)\) ([Jin Koh](https://github.com/jkoh006)\) ([Samarth Srinivasa](https://github.com/SamarthSrinivasa)\) ([Maelle Louissaint](https://github.com/markie-bit)\) ([Owen Dolan]) (https://github.com/OwenDolan)

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
 > You will need to schedule a check-in for the second scrum meeting with a reader (using Calendly). Your entire team must be present. This meeting will occur on week 8 but NOT during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.
* Design Pattern:
 * For our project, the strategy pattern has been chosen to help the Scene class and the implementation of a menu. Our player will need to interact with each Scene within our game, although the type of scene would lead to a different type of menu. An example being that an event scene would need the player to choose between a decision while a fight scene would constantly have the player looping over attack or item usage decisions till the player or enemies are killed. These are two varying algorithms and to have the possibility of expansion with other type of scenes without needing to constantly go back and change each scene, the use of a menu item will do the job of interacting and return the decision of the player to progress the story.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
