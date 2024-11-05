#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

    int main(int argc, char const *argv[]){

    std::string reset_position;
    int frame = 0;
    int frame_direction = 1;
    const int frame_max = 4;
    const int frame_min = 0;

    while (true)
    {
        auto can = Canvas(200,100);
        can.DrawPointCircle(100,20,15);
        can.DrawPointCircle(95,15,frame);
        can.DrawPointCircle(105,15,frame);
        can.DrawPointLine(95,25,105,25);
        can.DrawPointLine(100,35,100,70);
        can.DrawPointLine(100,40,90,50);
        can.DrawPointLine(100,40,115,35 + frame);
        can.DrawPointLine(100,70,110,80);
        can.DrawPointLine(100,70,90,80);
        
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        if (frame >= frame_max)
            frame_direction = -1;
        if (frame <= frame_min)
            frame_direction = 1;
        frame += frame_direction;
    }

    return 0;
}