#include<FL/Fl.H>
#include<FL/Fl_Window.H>

int main()
{
  Fl_Window* Window = new Fl_Window(720 , 650 ,"my first app application");
 Window->end();
 Window->show();

 return Fl::run();
}
