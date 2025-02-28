#include <iostream>
#include <vector>

int main(){
    freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);

    std::vector<std::vector<char>> board(3, std::vector<char>(3, 0));
    for (int i=0;i!=3;i++){
        std::cin>>board[i][0]>>board[i][1]>>board[i][2];
    }

    int single{0};
    int team{0};
    //checks for row win
    for (int i=0;i!=3;i++){
        
        //checks for row win
        if (board[i][0]==board[i][1]&&board[i][2]==board[i][0]){
            single++;
        }
        else if (board[i][0]==board[i][1]||board[i][1]==board[i][2]||board[i][0]==board[i][2]){
            team++;
        }
        //checks for column win
        if (board[0][i]==board[1][i]&&board[2][i]==board[0][i]){
            single++;
        }
        else if (board[0][i]==board[1][i]||board[1][i]==board[2][i]||board[0][i]==board[2][i]){
            team++;
        }
    }
    //checks for diagonal wins
    if (board[0][0]==board[1][1]&&board[0][0]==board[2][2]){
        single++;
    }
    else if (board[0][0]==board[1][1]||board[1][1]==board[2][2]||board[0][0]==board[2][2]){
        team++;
    }
    if (board[0][2]==board[1][1]&&board[2][0]==board[1][1]){
        single++;
    }
    else if (board[0][2]==board[1][1]||board[1][1]==board[2][0]||board[0][2]==board[2][0]){
        team++;
    }

    std::cout<<single<<"\n";
    std::cout<<team<<"\n";
    return 0;
}
