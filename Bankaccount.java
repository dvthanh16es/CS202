package blahblah;

public class Bankaccount 
{
	private String name;
	private double balance, dep=0, wdr=0;
	long id;
	
	public Bankaccount(String name, long id, double balance)
	{
		this.name=name;
		this.id=id;
		this.balance=balance;
	}
	public void deposit(double dep)
	{
		this.dep=dep;
		System.out.println("You add "+this.dep+" to your balance");
	}
	public void withdraw(double wdr)
	{
		if (wdr>balance)
		{
			System.out.println("Withdraw values must be lower than your balance ");
		}
		else
		{
		this.wdr=wdr;
		System.out.println("You withdraw "+this.wdr+" from your balance");
		}
	}
	public void newbalance ()
	{
		balance = balance-wdr+dep;
		 System.out.println("Account's new balance : "+balance);
	}
	void details()
	{
		 System.out.println("Name : "+name);
		 System.out.println("Account's ID : "+id);
		 System.out.println("Account's balance : "+balance);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bankaccount acc1 = new Bankaccount("Do Van Thanh",280598,211298);
		acc1.details();
		acc1.deposit(50);
		acc1.withdraw(20);
		acc1.newbalance();
	}
}
