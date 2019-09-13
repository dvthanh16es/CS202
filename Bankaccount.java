package lab1_6;

import java.util.Scanner;

public class Bankaccount {
	private String name;
	private double balance = 211298, dep=0, wdr=0;
	long id;
	
	public Bankaccount(String name, long id)
	{
		this.name=name;
		this.id=id;
	}
	public void deposit(double dep)
	{
		this.dep=dep;
		System.out.println("You add "+dep+" to your balance");
	}
	public void withdraw(double wdr)
	{
		this.wdr=wdr;
		System.out.println("You withdraw "+wdr+" from your balance");
	}
	public void WithdrawOrDeposit()
	{
		int n;
		double val=0;
		Scanner input = new Scanner(System.in);
		System.out.println("\n1. Deposit\n2. Withdraw\n0. Exit\n----------\n");
		n = input.nextInt();
		while (n!=1 && n!=2 && n!=0)
		{
			System.out.println("Input is false, again : ");
			n = input.nextInt();
		}
		switch(n)
		{
		case 1:
		{
			 System.out.println("Values : ");	
			 val = input.nextInt();
			 deposit(val);
			 break;
		}	
		case 2:
		{
			 System.out.println("Values : ");	
			 val = input.nextInt();
			 while(val<0 || val>balance)
			 {
				 System.out.println("Withdraw values must be lower than your balance and higher than 0 : ");
				 val = input.nextInt();
			 }
			 withdraw(val);
			 break;
		}
		case 0:
			break;
		}	
	}
	public double newBalance ()
	{
		balance = balance-wdr+dep;
		return balance;
	}
	void details()
	{
		 System.out.println("Name : "+name);
		 System.out.println("Account's ID : "+id);
		 System.out.println("Account's balance : "+balance);
		 WithdrawOrDeposit();
		 System.out.println("Account's new balance : "+newBalance());
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bankaccount acc1 = new Bankaccount("Do Van Thanh",280598);
		acc1.details();
	}	
}
