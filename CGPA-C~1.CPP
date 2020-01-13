	     //CGPA To Percentage And Reverse Calculator Using C++//

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<graphics.h>
int main()
{ clrscr() ;
  float perc, CGPA ;
  int ch ;
  char ch1 ;
  textcolor(RED) ;
  cprintf("Conversion Menu\n") ;
  cout<<"\n1. CGPA to Percentage\n" ;
  cout<<"2. Percentage to CGPA\n" ;
  textcolor(MAGENTA) ;
  cprintf("\nEnter Your Choice No. : ") ;
  do
  { cin>>ch ;
    switch(ch)
  {   case 1 : textcolor(MAGENTA) ;
	       cprintf("Enter Your CGPA : ") ;
	       cin>>CGPA ;
	       perc = CGPA * 9.5 ;
	       if(CGPA>10)
	     {  textcolor(YELLOW) ;
		cprintf("\t\t\tDon't Be Over Smart With Me.") ;
	     }
	       else
	       if(CGPA==10)
	     { textcolor(CYAN) ;
	       cprintf("You Scored Greater Or Equal To ") ;
	       cout<<perc ;
	       textcolor(GREEN) ;
	       cprintf("%") ;
	     }
	       else
	     { textcolor(CYAN) ;
	       cprintf("You Scored : ") ;
	       cout<<perc ;
	       { if(perc>=33)
		 textcolor(GREEN) ;
		 else
		 textcolor(RED) ;
		 cprintf(" %") ;
	       }
	     }
	       break ;
      case 2 : textcolor(MAGENTA) ;
	       cprintf("Enter Your Percentage : ") ;
	       cin>>perc ;
	       CGPA = perc / 9.5 ;
	       if(perc>=95)
	       CGPA = 10 ;
	     {  if((CGPA==8.3) || (CGPA==8.5) || (CGPA==8.7) || (CGPA==8.9) || (CGPA==9.1) || (CGPA==9.3) || (CGPA==9.5) || (CGPA==9.7) || (CGPA==9.9))
	       CGPA += 0.1 ;
	     }
	       if(perc>100)
	     {  textcolor(YELLOW) ;
	       cprintf("\t\t\tDon't Be Over Smart With Me.") ;
	     }
	       else
	     { textcolor(CYAN) ;
	       cout<<setprecision(1) ;
	       cprintf("You Scored : ") ;
	       cout<<CGPA ;
	       { if(CGPA>=3.6)
		 textcolor(GREEN) ;
		 else
		 textcolor(RED) ;
		 cprintf(" CGPA") ;
	       }
	     }
	       break ;
      default :textcolor(RED+BLINK) ;
	       cprintf("Please Check Your Choice !!!") ;
	       break ;
  }
   cout<<"\n\nWanna Do More ? (y/n) : " ;
   cin>>ch1 ;
   if(ch1=='y' || ch1=='Y')
    { textcolor(MAGENTA) ;
      cprintf("\nEnter Your Choice No. : ") ;
    }
      else
    { textcolor(RED) ;
      cprintf("\nExiting...") ;
    }
  }while(ch1=='y' || ch1=='Y') ;
  return 0 ;
}