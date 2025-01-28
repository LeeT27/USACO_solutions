#include <iostream>
#include <vector>
int main(){
    freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
    int x,y,m;
    std::cin>>x>>y>>m;
    int combo1 = m/x;
    int combo2 = m/y;
    int max {0};
    int temp;
    for (int i=0;i<combo1+1;i++){
        for (int j=0;j<combo2+1;j++){
            temp=x*(i)+y*(j);
            if (temp>max && temp<=m){
                max=temp;
                
            }
        }
    }
    std::cout<<max<<'\n';
    return 0;
}
