public class Buggy {
    
    public static void printArray(String[] array) {
        for (String string : array) {
            System.out.print(string + " ");
        }
        
        System.out.println();
    }
    
    public static void main(String[] args) {
        String[] localArray;
        
        for (int i = 0; i < 4; ++i) {
            localArray[i] = String.valueOf(i);
        }
        
        printArray(localArray);
    }
    
}