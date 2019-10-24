import java.math.BigInteger;
import java.util.Scanner;
class UVA10106 {
	public static void main(String args[]) {
		Scanner scn = new Scanner(System.in);
		while(scn.hasNext()) {
			BigInteger X = scn.nextBigInteger();
			BigInteger Y = scn.nextBigInteger();
			BigInteger SUM = X.multiply(Y);
			System.out.println(SUM);
		}
	}
}
