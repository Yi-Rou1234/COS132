#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int choiceMain, choiceFlavour, choiceSize, quantity1, drink;
	int quantity2, quantity3;
	string decision;
	float total=0;
	
    	cout<<"What would you like to order? "<< endl
    	    << "MENU"<< endl
    	    <<"1) Burger"<< endl
    	    <<"2) Pizza"<< endl
    	    <<"3) Quit"<< endl
    	    <<"Please enter your choice: ";
    	    
    	    cin>> choiceMain;
	    //validate if it is 1<=x<=3
	    //while ((choiceMain>0) && (choiceMain<=3))
	    //{
    	    if (choiceMain == 1) 
    	    {
     	    	cout<<"1) Chicken R35"<< endl
    	    	    <<"2) Beef R40"<< endl
    	    	    <<"3) Vegan R45"<< endl
    	    	    <<"Please enter your choice (flavour): ";
    	    	cin>> choiceFlavour;
    	    	
    	    	cout<<"Please enter quantity: ";
    	    	cin>> quantity1;
    	    	
    	    	if (choiceFlavour == 1)
    	    	    	total = 35* quantity1;
    	    	else 	if (choiceFlavour == 2)
    	    		total = 40 * quantity1;
    	    	else 	total = 45 * quantity1;
    	    }
    	    else 
    	    if (choiceMain ==2)
    	    {
    	    	cout<<"1) Small R25"<<endl
    	    	    <<"2) Medium R50"<<endl
                    <<"3) Large R75"<<endl
    	    	    <<"Please enter your choice (size): ";
    	    	cin>> choiceSize;
    	    	
    	    	cout<<"Please enter quantity: ";
    	    	cin>> quantity2;
    	    	
    	    	if (choiceSize == 1)
    	    	    	total = 25* quantity2;
    	    	else 	if (choiceSize == 2)
    	    		total = 50 * quantity2;
    	    	else 	total = 75 * quantity2;
    	    }
    	    else 
    	    {
                return 0;
    	    } //end for if statement
	    //} //end for while loop
    	    
    	  cout<< "Would you like to order a drink? (yes/no): "<< endl;
    	  cin>> decision;
    	  if (decision == "yes") 
    	  {
    	  	cout<< "1) Cola R10"<< endl
    	  	    << "2) Juice R13" << endl
    	  	    << "3) Coffee R16" << endl;
    	  	cout<< "Please enter your choice: "<<endl;
    	  	cin>> drink;
    	  	cout<< "Please enter quantity: "<<endl;
    	  	cin>> quantity3;
    	  	if (drink==1)
    	  		total+= 10*quantity3;
    	  	else 
    	  	if (drink ==2)
    	  		total+= 13*quantity3;
    	  	else
    	  		total+= 16*quantity3;
    	  }
	
	//OUTPUT:
	cout<< "You ordered the following items:"<<endl;
    	
	switch (choiceMain)
	{
		case 1:  if (choiceFlavour==1) 
		    {
			cout<<"- "<<quantity1<< " x Chicken Burger R35"<< endl;
		    }	else
		    if (choiceFlavour==2) 
		    {
			cout<<"- "<<quantity1<< " x Beef Burger R40"<< endl;
		    }
		    else
		    {
			cout<<"- "<<quantity1<< " x Vegan Burger R45"<< endl;
		    }
		    break;
		case 2:  if (choiceSize==1) 
		    {
			cout<<"- "<<quantity2<< " x Small Pizza R25"<< endl;
		    }	else
		   if (choiceSize==2) 
		    {
			cout<<"- "<<quantity2<< " x Medium Pizza R50"<< endl;
		    }
		   else 
		    {
			cout<<"- "<<quantity2<< " x large Pizza R75"<< endl;
		    }
		    break;
		default: cout<< "User quit menu"<< endl;
	}	
	
	if (decision == "yes")
	{
		if (drink==1) 
		    {
			cout<<"- "<<quantity3<< " x Cola R10"<< endl;
		    }	else
		   if (drink==2) 
		    {
			cout<<"- "<<quantity3<< " x Juice R13"<< endl;
		    }
		   else
		    {
			cout<<"- "<<quantity3<< " x Coffee R16"<< endl;
		    }
	}

	cout<< "Total = R"<< total<< endl;
	cout<< "Your order will be delivered soon, have a lovely day!"<<endl;

	return 0;
}




