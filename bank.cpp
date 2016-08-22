#include"iostream"
using namespace std;
class bank
{
	int accno;
	char nm[10];
	char accty[10];
	int bal;
	public:
		void setdata()
		{	
			cout<<"\n enter account information:";
			cout<<"\nenter account no:";
			cin>>accno;
			cout<<"\nenter name:";
			cin>>nm;
			cout<<"\naccount type:";
			cin>>accty;
			cout<<"\nbalance:";
			cin>>bal;
		}
		void display()
		{	
			cout<<"\ndata:\naccount no:"<<accno<<"\nname:"<<nm<<"\naccount type:"<<accty<<"\nbalance:"<<bal<<"\n";
		}
		
		void deposite()
		{	
			int d;
			cout<<"enter ammount:";
			cin>>d;
			bal=bal+d;
		}
		void withdrall()
		{
			int n;
			cout<<"enter ammount:";
			cin>>n;
			bal=bal-n;
		}
};


int main()
{
	int opt;
	bank a;
	while(1)
	{
		cout<<"\n\nmenu:\n1.setdata\n2.dispaly\n3.deposite\n4.withdrall\n5.exit\n\nopt:";
		cin>>opt;
		if(opt>4)
			break;
		switch(opt)
		{
			case 1:	
				a.setdata();
				break;
			case 2:
				a.display();
				break;
			case 3:
				a.deposite();
				break;
			case 4:
				a.withdrall();
				break;
		}
	}
	return 0;
}
	
	

			


