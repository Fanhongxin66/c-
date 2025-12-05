#include "iostream"
#include "time.h"
#include "windows.h"
#include "string"
using namespace std;
#define W 60
#define H 20

void  show_wall() {
    for (int i = 0; i < H; i++) {
        for (int j = 0 ; j < W; j++) {
           if (i == 0 || i == H - 1 || j == 0 || j == W - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}
struct  Each_body {
    int x ;
    int y;
};
struct Whole_body {
    Each_body A[W * H];  // 蛇头 @ 蛇尾 #
    int size ;
    Each_body food;//食物 #
    COORD coord;    // 定位光标

};
void init_food(Each_body *food) {
    srand(time(NULL));
    food->x = rand() % W;
    food->y = rand() % H;

}
void init_snake(Whole_body *snake) {
    snake->size = 2;
    snake->A[0].x = W / 2 ;
    snake->A[0].y = H / 2;
    snake->A[1].x = W / 2 - 1;
    snake->A[1].y = H / 2;
    init_food(&(snake->food));
}
void show_snake(Whole_body *snake) {
    //显示蛇
    for (int i = 0 ;i < snake->size ; i++) {
        snake->coord.X = snake->A[i].x;
        snake->coord.Y = snake->A[i].y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),snake->coord);
        //显示蛇头
        if (i == 0 ) cout << "@";
        //显示蛇身和蛇尾
        else cout << "#" ;
    }
    //显示食物
    snake->coord.X = snake->food.x;
    snake->coord.Y = snake->food.y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),snake->coord);
    cout << "#" ;
}
int main() {
    // system("cls");
    // show_wall();
    // Whole_body *snake = new Whole_body;
    // init_snake(snake);
    // init_food(&(snake->food));
    // show_snake(snake);
    // while (true) ;
   // int y = 2;
   //  cout << x/(float)y << endl;
   //  constexpr int tem1_max = 100;
   //  cout << tem1_max << endl;
   //  string str1 = "123.4";
   //  auto  a = stof(str1);
   //  auto pi = to_string(a);
   //  auto k = sizeof(str1);
   //  auto k2 = str1.size();
   //  cout << k <<" " << k2 <<  endl;
   //  cout << pi << endl;
   //  cout << a << endl; int x= 3;
    // string str = "My name is [Name]";
    // string need = "[Name]";
    // auto len = need.size();
    // cout << len << endl;
    // auto pos = str.find(need);
    // cout << str << endl;
    // auto rep = str.replace(pos,len,"Jack");
    // cout << pos << endl;
    // cout << rep << endl;
    // cout << str << endl;

    cout <<  a << endl;
    return 0;

}