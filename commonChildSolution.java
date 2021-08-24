
public class commonChildSolution {
	//commonChild
	public static int commonChild (String s1, String s2) {
		int[][] C = new int[s1.length() + 1][s2.length() + 1];	
		for (int x = 1; x <= s1.length(); x++) {
			for (int y = 1; y <= s2.length(); y++) {
				if (s1.charAt(x - 1) == s2.charAt(y - 1)){
					C[x][y] = C[x  - 1][y - 1] + 1;  
				}else {
					C[x][y] = Math.max(C[x  - 1][y], C[x][y - 1]);
				}
			}
		}
		return C[s1.length()][s2.length()];
	}	
	//Main 
	public static void main (String[] argi) {
		String s1 = "SHINCHAN"; String s2 = "NOHARAAA";
		int lcs = commonChild(s1, s2);
		System.out.println(lcs);
	}
}