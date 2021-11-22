#include<bits/stdc++.h>
using namespace std;

const int x=1,y=-1,empty=0;
int board[3][3];
int currentPlayer;

void clearBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j]=empty;
        }
    }
    currentPlayer = x;
}

void putMark(int i,int j){
    if(board[i][j] == empty){
        board[i][j] = currentPlayer;
        currentPlayer = -currentPlayer;
    }else{
        cout<<"already filled"<<endl;
    }
}

bool isWin(int mark){
    int win = 3*mark;
    return ("updating...") ;
}

int getWinner(){

}

void printBoard(){

}

int main(){
    
}