import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner stringScanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String string1 = stringScanner.nextLine();

        System.out.print("Enter the seconnd string: ");
        String string2 = stringScanner.nextLine();

        int length1 = string1.length();
        int length2 = string2.length();

        System.out.println((length1 > length2) ? (string1 + " is larger than " + string2) : (length1 < length2) ? (string2 + " is larger than " + string1) : "Both strings are of equal length.");

    }

}