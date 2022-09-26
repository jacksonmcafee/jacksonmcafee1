import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Area_Buffered
{
	public static void main(String args[])
    {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        
        String input  = "";
        
        double radius = 0.0;
        double perimeter = 0.0;
        double area = 0.0; 
        double pi = 3.14;
		
		try
        {
			System.out.println("Enter the radius of a circle");
			input = bufferedReader.readLine();
			radius = Float.parseFloat(input);
			perimeter = 2 * pi * radius;
			area = pi * (radius * radius);
		}
		catch(IOException e){
			System.out.println("Error");
		}
		catch(NumberFormatException e)
        {
			System.out.println("Invalid input");
		}
		
		System.out.println("Radius = " + radius);
		System.out.println("Perimeter is = " + perimeter);
		System.out.println("Area is = " + area);

	}
}