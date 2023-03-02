#include <bits/stdc++.h>
#include <ctime>
using namespace std;
string initWord();
void notification(int wrongGuess, string guessWord);
void characterGuess(char &input);
void update(char input,string secretWord,string&guessWord,int &wrongGuess);
void win_congra(string secretWord,int wrongGuess,string guessWord);
void lose_notifi(string secretWord);
string initGuessWord(string secretWord);
const int MAX_GUESS = 7;
const string word[] = {"angle", "ant", "apple", "arch", "arm", "army","baby", "bag", "ball", "band", "basin", "basket", "bath", "bed",
		 "bee", "bell", "berry","brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button", "cake", "camera", 
		 "card",  "cart", "carriage", "cat", "chain", "cheese", "chest","chin", "church", "circle", "clock", "cloud", "coat", "collar",
		 "comb", "cord","cow", "cup", "curtain", "cushion","dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly","foot", "fork", "fowl", "frame","garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse","hospital", "house","island", "jewel","kettle", "key", "knee", "knife",
		"knot","leaf", "leg", "library", "line", "lip", "lock","map", "match", "monkey", "moon", "mouth", "muscle","nail", "neck", "needle", "nerve", "net",
		"nose", "nut","office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin","pipe", "plane", "plate", "plow", "pocket", "pot",
		"potato", "prison", "pump","rail", "rat", "receipt", "ring", "rod", "roof", "root","sail", "school", "scissors", "screw", "seed", "sheep", "shelf",
		"ship", "shirt","shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring","square", "stamp", "star", "station", "stem", "stick",
		"stocking", "stomach","store", "street", "sun","table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth","town", "train",
		"tray", "tree", "trousers","umbrella","wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm"};
const int numOfWord = sizeof(word) / sizeof(string);
const string figure[8]={
    "  --------  \n"
    "  |         \n"
    "  |         \n"
    "  |         \n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |         \n"
    "  |         \n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |         \n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |      |  \n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |     /|  \n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |     /|\\\n"
    "  |         \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |     /|\\\n"
    "  |     /   \n"
    "-----       \n",
    "  --------  \n"
    "  |      |  \n"
    "  |      O  \n"
    "  |     /|\\\n"
    "  |     / \\\n"
    "-----       \n"
                   };
int main()
{
	srand(time(0));
    string secretWord=initWord();
    int wrongGuess=0;
    string guessWord=initGuessWord(secretWord);
    char input;

    do{
        notification(wrongGuess, guessWord);
        if (wrongGuess==MAX_GUESS) {lose_notifi(secretWord);return 0;}
        characterGuess(input);
        update(input,secretWord,guessWord,wrongGuess);

    }while(guessWord!=secretWord);
    win_congra(secretWord,wrongGuess,guessWord);
    return 0;
}

string initWord(){
    int i = rand() % numOfWord;
    return word[i];
}

void notification(int wrongGuess, string guessWord){
    cout << figure[wrongGuess] <<endl;
    cout << guessWord<<endl;
    cout <<"Number of wrong guess: "<<wrongGuess<<endl;

}

void characterGuess(char &input){
    cout << "Guess a character: ";
    cin >> input;
}

void update(char input,string secretWord,string&guessWord,int &wrongGuess){
    int len=secretWord.length();
    if ((!(secretWord.find(input)<len && secretWord.find(input)>=0))||((guessWord.find(input)<len && guessWord.find(input)>=0))) {wrongGuess++;return;}
    for (int i=0;i<len;i++){
        if (secretWord[i]==input) guessWord[i]=input;
    }
}

void win_congra(string secretWord,int wrongGuess,string guessWord){
    notification(wrongGuess, guessWord);
    cout << "You win. The word is '"<<secretWord<<"'";
}

void lose_notifi(string secretWord){
    cout << "You lose. The word is '"<<secretWord<<"'";
}
string initGuessWord(string secretWord){
    int n= secretWord.length();
    string res="";
    for (int i=0; i<n;i++){
        res+='_';
    }
    return res;
}
