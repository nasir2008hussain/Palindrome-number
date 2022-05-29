#include <iostream>
using namespace std;
int r = 0;
int palindrome(int n)
{ 

   
	int chk,pall;
    n = pall;
    do
       {
         chk = pall % 10;
         r = (r * 10) + chk;
         pall = pall / 10;
        } while (pall != 0);
        cout<<"The reverse of "<<n<<" is : " <<r<< endl;

      if (n == r)
        {
          cout << "The number "<<n<<" is palindrome\n";
          int t=n;
	      int count=0;
		  while(t!=0)
		     {
		      int d=t%10;
		      t=t/10;
		      if(d%2==1)
			   {
				 count++;
		        }
		    }
		    cout<<n<<" has "<<count<<" odd number \n";
    	}
      else 
        {
          cout << "The number "<<n<<" is not a palindrome\n";
		}
		r=0;
}
	int main()
	{
		int pal;
	    char ch;
	do{
	
	    cout<<"Enter the number : ";
	    cin>>pal;
	    palindrome(pal);
        cout<<"Do you want to continue : ";
	    cin>>ch;
	    if(ch=='y'||ch=='Y')
	    {
	     continue;
    	 }
        else if(ch!='N'&&ch!='n')
         {  
            int chance=1;
            int q=3;
            while(chance<=3)
            {
			  cout<<"Please Give Valid Command (Y/y/N/n) : ";
              cin>>ch; 
              if(ch!='n'&&ch!='N'&&ch!='Y'&&ch!='y')
                 {
                 chance++;
                 q--;
                 cout<<"You have "<<q<<" chance left\n";
				 }
              else if(ch=='y'||ch=='Y')
                  {
    	          break;
				  } 
			  else
				  break;    
			}
			if(chance==4)
			 {
				cout<<"Sorry Invalid Command";
			    break;
			 }
			 
		 }
		 else 
		 break;  
	} while(ch!='n'&&ch!='N');
	cout<<"\nThank You ! Your Process is Finished :)";


    return 0;
}
