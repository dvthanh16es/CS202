package lab1_3;

public class Circle 
{
	private double radius;
	public Circle (double val)
	{
		radius=val;
	}
	public double perimeter() {
		return 2*Math.PI*radius;
	}
	public double area()
	{
		return Math.PI*Math.pow(radius, 2);
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle circ1 = new Circle(8);
		Circle circ2 = new Circle(16);
		System.out.println("area of circle 1 is "+circ1.area());
		System.out.println("perimeter of the circle 1 is "+circ1.perimeter());
		System.out.println("\narea of the circle 2 is "+circ2.area());
		System.out.println("perimeter of the circle 2 is "+circ2.perimeter());
		
	}

}
