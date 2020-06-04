import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;


public class tameshi {
	public static void main(String[] args) {
		List<String> list = new ArrayList<String>(Arrays.asList("Kameda","Ono","Iwashita","Aida"));
	
		System.out.println(list);
		System.out.println("============================");
		list.add("PTC");
		System.out.println(list);
		System.out.println("============================");
		list.set(3, "TASA");
		System.out.println(list);
		System.out.println("============================");
		
		Collections.sort(list);
		System.out.println("===========================");
		
		for (String string : list) {
			System.out.println(string);
			
		}

	}
}