import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String str = sc.next();
        
        if (isPalindrome(str)) 
            System.out.println("Yes"); 
        else
            System.out.println("No");
        
    }
    static boolean isPalindrome(String str) 
    { 
  
        int i = 0, j = str.length() - 1; 
  
        while (i < j) { 
  
            // If there is a mismatch 
            if (str.charAt(i) != str.charAt(j)) 
                return false; 
  
            i++; 
            j--; 
        } 
  
        return true; 
    }
}
