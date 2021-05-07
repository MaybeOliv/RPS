#include <iostream>
using namespace std;

void game(){
    int option;
    bool win = 0;
    int score = 0;

    cout << "new game: \n";
    cout << "1: rock\n";
    cout << "2: paper\n";
    cout << "3: scissors\n";
    cout << "option: ";
    cin >> option;
    int ran = rand() % 4;
    system("CLS");
    if(option == 1){
        cout << "you chose: rock\n";
        if(ran == 1){
            cout << "rock vs rock\nTIE\n\n";
        }else if(ran == 2){
            cout << "rock vs paper\nYOU LOST\n\n";
        }else if(ran == 3){
            cout << "rock vs scissors\nYOU WON\n\n";
            score = score + 1;
        }
    }else if(option == 2){
        cout << "you chose: paper\n";
        if(ran == 1){
            cout << "paper vs rock\nYOU WON\n\n";
            score = score + 1;
        }else if(ran == 2){
            cout << "paper vs paper\nTIE\n\n";
        }else if(ran == 3){
            cout << "paper vs scissors\nYOU LOST\n\n";
        }

        }else if(option == 3){
        cout << "you chose: scissors\n";
        if(ran == 1){
            cout << "scissors vs rock\nYOU LOST\n\n";
        }else if(ran == 2){
            cout << "scissors vs paper\nYOU WON\n\n";
            score = score + 1;
        }else if(ran == 3){
            cout << "scissors vs scissors\nTIE\n\n";
        }

    cout << "score: " << score << "\n";

    }else{
        system("CLS");
        cout << "invalid option\n";
    }
    for(int i = 1; i <= 1000; ++i){
    int ran = rand() % 4;

    cout << "new game: \n";
    cout << "1: rock\n";
    cout << "2: paper\n";
    cout << "3: scissors\n";
    cout << "option: ";
    cin >> option;
    system("CLS");
    if(option == 1){
        cout << "you chose: rock\n";
        if(ran == 1){
            cout << "rock vs rock\nTIE\n\n";
        }else if(ran == 2){
            cout << "rock vs paper\nYOU LOST\n\n";
        }else if(ran == 3){
            cout << "rock vs scissors\nYOU WON\n\n";
            score = score + 1;
        }
    }else if(option == 2){
        cout << "you chose: paper\n";
        if(ran == 1){
            cout << "paper vs rock\nYOU WON\n\n";
            score = score + 1;
        }else if(ran == 2){
            cout << "paper vs paper\nTIE\n\n";
        }else if(ran == 3){
            cout << "paper vs scissors\nYOU LOST\n\n";
        }

        }else if(option == 3){
        cout << "you chose: scissors\n";
        if(ran == 1){
            cout << "scissors vs rock\nYOU LOST\n\n";
        }else if(ran == 2){
            cout << "scissors vs paper\nYOU WON\n\n";
            score = score + 1;
        }else if(ran == 3){
            cout << "scissors vs scissors\nTIE\n\n";
        }

    }else{
        system("CLS");
        cout << "invalid option\n";
    }
    cout << "score: " << score << "\n";

}
}

int main(){
    for (int i = 1; i <= 1000; ++i){
        game();
    }
}