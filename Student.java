package vector;

import java.util.Scanner;
import java.util.Vector;

class Student
{
	private String name;
    private long id;
    private double mathMark, englishMark, physicsMark, chemistryMark;
    public Student() 
    {
    	this.name = "student's name";
    	this.id = 0;
    }
    public Student(String Name, long Id)
    {
        name = Name;
        id = Id;
    } 
    public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public long getId() {
		return id;
	}
	public void setId(long id) {
		this.id = id;
	}
	public void Input() 
    {
    Scanner key = new Scanner(System.in);
    System.out.println("Nhap Name");
    setName(key.nextLine());
    System.out.println("Nhap id");
    setId(key.nextInt());
    System.out.println("Nhap toan");
    setMathMark(key.nextDouble());
    System.out.println("Nhap anh");
    setEnglishMark(key.nextDouble());
    System.out.println("Nhap ly");
    setPhysicsMark(key.nextDouble());
    System.out.println("Nhap hoa");
    setChemistryMark(key.nextDouble());
    }
   
    public void setMathMark(double val)
    {
        if (val>=0&&val<=100)
        {
            this.mathMark = val;
        }
    }
    public void setEnglishMark(double val)
    {
        if (val>=0&&val<=100)
        {
        	this.englishMark = val;
        }
    }
    public void setPhysicsMark(double val)
    {
        if (val>=0&&val<=100)
        {
        	this.physicsMark = val;
        }
    }
    public void setChemistryMark(double val)
    {
        if (val>=0&&val<=100)
        {
        	this.chemistryMark = val;
        }
    }
    public double getAverage()
    {
        double result=0;
        result=(this.mathMark+this.englishMark+this.physicsMark+this.chemistryMark)/4;
        return result;
    }
    public void displayDetails()
    {
        System.out.println("\nName = "+getName());
        System.out.println("\nStudent's ID = "+getId());
        System.out.println("\nAverage = "+getAverage());
    }
    public static void main(String[] args) {
    	
    	Vector <Student> vStudent = new Vector<Student>();
    	int n=3;
    	for (int i=0;i<n;i++)
    	{
    		Student std = new Student();
    		std.Input();
    		vStudent.add(std);
    	}
    	
    	/*for (Student std:vStudent)
    	{
    		std.displayDetails();
    	}*/
    	
    	
    	// point out student who have the highest score
    	Student highest = vStudent.get(0);
    	for (int i = 0; i < n; i++) 
    	{
    		if (highest.getAverage()<vStudent.get(i).getAverage())
    		{
    				highest = vStudent.get(i);    			
    		}
		}
    	System.out.println("Student have the highest score is : ");
    	highest.displayDetails();
    	
    	// point out the student who the lowest score
    	
    	Student lowest = vStudent.get(0);
    	for (int i = 0; i < n; i++) 
    	{
    	    if (lowest.getAverage()>vStudent.get(i).getAverage())
    		{
    				lowest = vStudent.get(i);    			
    		}
		}
    	System.out.println("Student have the lowest score is : ");
    	lowest.displayDetails();
    	
    	
    	// ranking!
    	for (int i=0; i<n;i++)
    	{
    		for (int j=i+1;j<n;j++)
    		{
    			if(vStudent.get(i).getAverage() < vStudent.get(j).getAverage())
    			{
    				Student lower = vStudent.get(i);
    				Student higher = vStudent.get(j);
    				vStudent.setElementAt(higher, i);
    				vStudent.setElementAt(lower, j);
    			}
    		}
    	}
    	System.out.println("\nAfter ranking!");
    	for (Student std:vStudent)
    	{
    		std.displayDetails();
    	}
    }
};
