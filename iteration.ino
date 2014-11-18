#include <MeggyJrSimple.h> 

 
void setup() 

{

 MeggyJrSimpleSetup(); 

}


void loop()
{
  for (int x=0; x < 8; x++)
  {
    DisplaySlate();
    for (int i=0; i < 8; i++)
     {
       if ((i % 2) == 0)
         {
           if ((x % 2) != 0)
             {
               DrawPx(i,x,FullOn);
               DisplaySlate();
               delay(500); 
             }
            else
              {
                DrawPx(i,x,Blue);
                DisplaySlate();
                delay(500);
              }
                
          }
        else
        {
          DrawPx(i,x,Green);
          DisplaySlate();
          delay(500);
        }
     }
  }
}

