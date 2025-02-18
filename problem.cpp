#include <iostream>

int main(){
    freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
    int bx1,by1,bx2,by2,gx1,gy1,gx2,gy2;

    std::cin>>bx1>>by1>>bx2>>by2>>gx1>>gy1>>gx2>>gy2;
    //left blocked
    if (gy1<by1&&gy2>by2&&gx1<by1){
        std::cout<<((by2-by1)*(gx2-bx2));
    }
    //top blocked
    if (gx1<bx1&&gx2>bx2&&gy2>by2){
        std::cout<<((gy1-by1)*(bx2-bx1));
    }
    //right blocked
    if (gy1<by1&&gy2>by2&&gx2>bx2){
        std::cout<<((by2-by1)*(bx2-gx2));
    }
    //bottom blocked
    if (gx1<bx1&&gx2>bx2&&gy1<by1){
        std::cout<<((by2-gy2)*(bx2-bx1));
    }
    //no block, should output area
    else{
        std::cout<<((by2-by1)*(bx2-bx1));
    }
    return 0;
}